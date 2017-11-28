import java.util.*;

class MyStack{
	int top;
	char stack[];

	MyStack(int n){
		top = -1;
		stack = new char[n];
	}

	boolean isEmpty(){
		if(top == -1)
			return true;
		else
			return false;
	}

	boolean isFull(){
		if(top == stack.length - 1)
			return true;
		else
			return false;
	}

	void push(char c){
			top++;
			stack[top] = c;
	}

	void pop(){
			System.out.print("\nPopping " + stack[top--]);
	}

	void displayStack(){
		if(isEmpty())
			System.out.println("\nStack is empty.");
		else{
			System.out.println("top = "+top);
			for(int i = 0;i<=top;i++)
				System.out.print(stack[i] + " ");	
		}	
	}
}

class Main{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int num;
		char c;	
		System.gc();	
	
		System.out.print("\nEnter the number of element in stack: ");
		num = in.nextInt();
		
		MyStack s = new MyStack(num);		

		do{
			System.out.print("\nStack Operation\n1.Push\n2.Pop\n3.Display\nEnter your choice: ");
			int choice = in.nextInt();
			in.nextLine();

			switch(choice){
				case 1:
					if(s.isFull())
						System.out.println("\nStack Full.");
					else{
						System.out.print("\nEnter the value to push in stack: ");
						c = in.nextLine().charAt(0);
						s.push(c);					
					}
					break;
				case 2:
					if(s.isEmpty())
						System.out.println("\nStack is empty.");
					else
						s.pop();						
					break;
				case 3:
					if(s.isEmpty())
						System.out.println("\nStack is empty.");
					else
						s.displayStack();
					System.out.println();
					break;
				default:
					System.out.println("\nInvalid Input.");
				
			}
			System.out.print("\nWant to check again?(Y/N): ");
			c = in.next().charAt(0);
		}while(c == 'Y' || c == 'y');
	}
}
