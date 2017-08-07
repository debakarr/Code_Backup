#include<stdio.h>
#include<stdlib.h>

#define SIZE 30

typedef struct BT{
	int info;
	struct BT *left;
	struct BT *right;
}bst;

bst* insert_intreaded_bst(bst **, int);
void inorder_intreaded_bst(bst *);
void preorder_intreaded_bst(bst *);

int main()
{
	int item, ch;
	bst *root = NULL;	
	system("clear");
	while(1)
	{
		printf("\n1.Insert in Binary treaded tree\n2.Inorder Traverse\n3.Preorder Traverse");
		printf("\n0.Exit\nEnter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the element you want to insert: ");
				scanf("%d", &item);
				insert_intreaded_bst(&root, item);
				break;
			case 2:
				inorder_intreaded_bst(root);
				break;	
			case 3:
				preorder_intreaded_bst(root);
				break;	
			case 0:
				exit(0);
			default:
				printf("\nInvalid choice try again!!\n");
		}
	}
	return(0);
}

bst* insert_intreaded_bst(bst **root, int item)
{
	bst *newnode, *loc;
	int flag;
	newnode = (bst *)malloc(sizeof(bst));
	newnode->info=item;
	if(*root==NULL)
	{
		*root=newnode;
		newnode->left=NULL;
		newnode->right=NULL;
		return(*root);
	}
	loc=*root;
	flag=1;
	while(flag==1)
	{
		if(item<loc->info && (int)loc->left>0)
			loc=loc->left;
		else if(item>loc->info && (int)loc->right>0)
			loc=loc->right;
		else if(item<loc->info && (int)loc->left<=0)
		{
			newnode->left=loc->left;
			loc->left=newnode;
			newnode->right=(bst *)(-1*(int)loc);
			flag=0;
		}
		else if(item>loc->info && (int)loc->right<=0)
		{
			newnode->right=loc->right;
			loc->right = newnode;
			newnode->left=(bst *)(-1*(int)loc);
			flag=0;
		}
		else
		{
			printf("\nDuplicate Item\n");
			flag=0;
		}
	}
	return(*root);
}

void inorder_intreaded_bst(bst *root)
{
	bst *loc=root;
	if((int)loc>0)
	{
		while((int)loc->left > 0)
		{
			loc=loc->left;
		}
	}
	while((int)loc>0)
	{
		printf("%5d",loc->info);
		loc=loc->right;
		if((int)loc<0)
			loc=(bst*)((-1)*(int)loc);
		else if((int)loc>0)
		{
			while((int)loc->left>0)
				loc=loc->left;
		}
	}
	return;
}

void preorder_intreaded_bst(bst *root)
{
	bst *loc=root;
	while((int)loc>0)
	{
		printf("%5d", loc->info);
		if((int)loc->left>0)
			loc=loc->left;
		else if((int)loc->right>0)
			loc=loc->right;
		else
		{
			while((int)loc->right<0)
			{
				loc=(bst *)(-1*(int)loc->right);
			}
			loc=loc->right;
		}
	}
	return;
}

