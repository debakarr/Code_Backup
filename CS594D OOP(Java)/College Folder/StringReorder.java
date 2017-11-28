import java.util.*;

class StringReorder{
	
	static void alphaReorder(String s){
		char[] c = new char[s.length()];
		for(int i = 0;i<s.length();i++){
			c[i] = s.charAt(i);
		}

		char temp;
		for(int i=0;i<c.length;i++){
			for(int j = i+1;j<c.length;j++){
				if(c[i]>c[j]){
					temp = c[i];
					c[i] = c[j];
					c[j] = temp;
				}
			}
		}
		
		String reorder = new String();
		
		for(int i = 0;i<c.length;i++)
			reorder = reorder + c[i];

		System.out.println(reorder);
	}

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		
		System.out.print("\nEnter the String: ");
		String s = in.nextLine();

		alphaReorder(s);
	}
}
