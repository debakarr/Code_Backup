import java.util.*;

class StringReorder2{
	
	static void alphaReorder(String s){
		StringBuffer alphaOrder = new StringBuffer(s);
		char temp1;
		//System.out.println(alphaOrder+" "+alphaOrder.length());
		char temp;
		
		for(int i=0;i<alphaOrder.length();i++){
			for(int j = i+1;j<alphaOrder.length();j++){
				if(alphaOrder.charAt(i)>alphaOrder.charAt(j)){
					System.out.println(j);
					temp1 = alphaOrder.charAt(j);
					alphaOrder.insert(i, temp1);
					alphaOrder.delete(j+1, j+2);
					//System.out.println(alphaOrder.length());
				}
			}
		}
		
		System.out.println(alphaOrder);
	}

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		
		System.out.print("\nEnter the String: ");
		String s = in.nextLine();

		alphaReorder(s);
	}
}
