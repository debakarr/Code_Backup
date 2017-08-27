import java.util.*;

class MyStack {
	int stack[];
	int tos;

	// Initialize top-of-stack
	MyStack(int n) {
		tos = -1;
		stack = new int[n];
	}

	// Retrun true if stack is full
	boolean isFull() {
		if (tos == stack.length - 1)
			return true;
		else
			return false;
	}

	// Retrun true if stack is empty
	boolean isEmpty() {
		if (tos == -1)
			return true;
		else
			return false;
	}

	// Push an item onto the stack
	void push(int item) {
		if (isFull())
			System.out.println("Stack is full. " + item + " can't be pushed on to the stack.");
		else
			stack[++tos] = item;
	}

	// Pop an item from the stack
	int pop() {
		if (isEmpty()) {
			System.out.println("Stack underflow.");
			return -9999;
		} else
			return stack[tos--];
	}
	void displayStack() {
		if (isEmpty()) {
			System.out.println("\nStack is Empty.");
			return;
		}

		System.out.println("\nStack: ");
		for (int i = 0; i <= tos; i++)
			System.out.print(stack[i] + " ");
	}
}

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		char c;

		System.out.print("\nEnter the number of elements of the stack: ");
		int n = in.nextInt(), choice, item;

		MyStack s = new MyStack(n);

		do {
			System.out.print("\n1. Push\n2. Pop\n3. Display\nEnter your choice: ");
			choice = in.nextInt();

			switch (choice) {
			case 1:
				System.out.print("\nEnter the element you want to push: ");
				item = in.nextInt();
				s.push(item);
				break;
			case 2:
				item = s.pop();
				if (item != -9999)
					System.out.println(item + " is poped from the stack.");
				break;
			case 3:
				s.displayStack();
				break;
			default:
				System.out.println("\nInvalid input. Please try again.");
			}
			System.out.print("\nWant to enter more?(Y/N): ");
			c = in.next().charAt(0);
		} while (c == 'Y' || c == 'y');
	}
}

/*

Enter the number of elements of the stack: 4

1. Push
2. Pop
3. Display
Enter your choice: 1

Enter the element you want to push: 7

Want to enter more?(Y/N): y

1. Push
2. Pop
3. Display
Enter your choice: 1

Enter the element you want to push: 6

Want to enter more?(Y/N): y

1. Push
2. Pop
3. Display
Enter your choice: 1

Enter the element you want to push: 2

Want to enter more?(Y/N): y

1. Push
2. Pop
3. Display
Enter your choice: 1

Enter the element you want to push: 1

Want to enter more?(Y/N): y

1. Push
2. Pop
3. Display
Enter your choice: 1

Enter the element you want to push: 8
Stack is full. 8 can't be pushed on to the stack.

Want to enter more?(Y/N): y

1. Push
2. Pop
3. Display
Enter your choice: 2
1 is poped from the stack.

Want to enter more?(Y/N): y

1. Push
2. Pop
3. Display
Enter your choice: 2
2 is poped from the stack.

Want to enter more?(Y/N): y

1. Push
2. Pop
3. Display
Enter your choice: 3

Stack:
7 6
Want to enter more?(Y/N): n

*/