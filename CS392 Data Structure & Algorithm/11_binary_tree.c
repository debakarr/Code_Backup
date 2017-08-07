#include<stdio.h>
#include<stdlib.h>

#define SIZE 30

typedef struct BT{
	int info;
	struct BT *left;
	struct BT *right;
}bst;

typedef struct stk
{
	struct BT *arr[SIZE];
	int top;
}stack;

void insert_bst(bst **, int);
void delete_bst(bst **, int);
void inorder_traverse(bst *);
void preorder_traverse(bst *);
void postorder_traverse(bst *);
void preorder_non_recursive(bst *,stack*);
void inorder_non_recursive(bst *,stack*);
void postorder_non_recursive(bst *,stack*);
void push(stack*,bst*);
bst *pop(stack*);
bst *peek(stack*);
int is_empty(stack*);

int main()
{
	int item, ch;
	bst *root = NULL;	
	stack s,*ps;
	ps=&s;
	system("clear");
	while(1)
	{
		printf("\n1.Insert in Binary tree\n2.Inorder Traverse\n3.Preorder Traverse\n4.Postorder Traverse\n5.Delete an item");
		printf("\n6.Preorder Traverse[Non Recursive]\n7.Inorder Traverse[Non Recursive]\n8.Postorder Traverse[Non Recursive]");
		printf("\n0.Exit\nEnter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the element you want to insert: ");
				scanf("%d", &item);
				insert_bst(&root, item);
				break;
			case 2:
				inorder_traverse(root);
				break;	
			case 3:
				preorder_traverse(root);
				break;	
			case 4:
				postorder_traverse(root);
				break;	
			case 5:
				printf("\nEnter the element you want to delete: ");
				scanf("%d", &item);
				delete_bst(&root, item);
				break;
			case 6:
				preorder_non_recursive(root,ps);
				break;	
			case 7:
				inorder_non_recursive(root,ps);
				break;	
			case 8:
				postorder_non_recursive(root,ps);
				break;	
			case 0:
				exit(0);
			default:
				printf("\nInvalid choice try again!!\n");
		}
	}
	return(0);
}

void insert_bst(bst **root, int item)
{
	bst *newnode, *loc, *par;
	par = NULL;
	loc = *root;
	while(loc != NULL)
	{
		if(item == loc->info)
		{
			printf("\nDuplicate item!!\n");
			return;
		}
		par = loc;
		if(item < loc->info)
			loc = loc->left;
		else
			loc = loc->right;
	}
	newnode = (bst *)malloc(sizeof(bst));
	newnode->info = item;
	newnode->left = NULL;
	newnode->right = NULL;
	if(par == NULL)
		*root = newnode;
	else if(item < par->info)
		par->left = newnode;
	else
		par->right = newnode;
	return;
}

void inorder_traverse(bst *root)
{
	if(root!=NULL)
	{
			inorder_traverse(root->left);
			printf("%d ",root->info);
			inorder_traverse(root->right);
	}
}

void preorder_traverse(bst *root)
{
	if(root!=NULL)
	{
			printf("%d ",root->info);
			preorder_traverse(root->left);
			preorder_traverse(root->right);
	}
}

void postorder_traverse(bst *root)
{
	if(root!=NULL)
	{
			postorder_traverse(root->left);
			postorder_traverse(root->right);
			printf("%d ",root->info);
	}
}

void delete_bst(bst **root, int item)
{
	bst *par = NULL, *loc = *root, *child, *parsuc, *suc;
	while(loc != NULL && loc->info != item)
	{
		par =  loc;
		if(item < loc->info)
			loc = loc->left;
		else
			loc = loc->right;
	}	
	if(loc == NULL)
	{
		printf("\nNode containing %d does not exist\n", item);
		return;
	}
	if(loc->left = NULL && loc->right == NULL)
		child = NULL;
	else if(loc->left == NULL)
		child = loc->right;
	else if(loc->right == NULL)
		child = loc->left;
	else
	{
		suc = loc->right;
		parsuc = loc;
		while(suc->left != NULL)
		{
			parsuc = suc;
			suc = suc->left;
		}
		if(parsuc != loc)
		{
			parsuc->left == suc->right;
			suc->right = loc->right;
		}
		suc->left = loc->left;
		child = suc;
	}
	if(par != NULL)
	{
		if(loc == par->left)
			par->left = child;
		else
			par->right = child;
	}
	else
		*root = child;
	printf("\n%d deleted.\n", item);
	free(loc);
	return;
}

void preorder_non_recursive(bst *root,stack *ps)
{
	ps->top=-1;
	bst *loc = root;

	while(1)
	{
		while(loc!=NULL)
		{
			printf("%d ",loc->info);
			push(ps,loc);
			loc=loc->left;
		}		
		if(is_empty(ps))
			break;
		loc=pop(ps);
		loc=loc->right;

	}
}

void inorder_non_recursive(bst *root,stack *ps)
{
	ps->top=-1;
	bst *loc = root;
	while(1)
	{
		while(loc!=NULL)
		{
			push(ps,loc);
			loc=loc->left;
		}		
		if(is_empty(ps))
			break;
		loc=pop(ps);
		printf("%d ",loc->info);
		loc=loc->right;

	}
}

void postorder_non_recursive(bst *root,stack *ps)
{
	ps->top=-1;
	bst *loc = root;
	while(1)
	{
		while(loc!=NULL)
		{
			if(loc->right != NULL)
				push(ps, loc->right);
			push(ps, loc);
			loc=loc->left;	
		}		
		loc=pop(ps);
		if(loc->right != NULL && peek(ps) == loc->right)
		{
			pop(ps);
			push(ps, loc);
			loc=loc->right;
		}
		else
		{
			printf("%d ", loc->info);
			loc=NULL;
		}
		if(is_empty(ps))
			return;
	}
}

void push(stack *ps,bst *loc)
{
	ps->top++;
	ps->arr[ps->top]=loc;
	return;
}

bst *pop(stack *ps)
{
	bst *ptr;
	if(!is_empty(ps))
	{
		ptr=ps->arr[ps->top];
		ps->top--;
	}
	return ptr;
}
bst *peek(stack *ps)
{
	bst *ptr;
	if(!is_empty(ps))
		ptr=ps->arr[ps->top];
	return ptr;
}
int is_empty(stack *ps)
{
	if(ps->top==-1)
		return 1;
	return 0;
}
