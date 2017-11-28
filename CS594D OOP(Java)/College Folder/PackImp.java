import MyPack.*;
//import MyPack.Subtraction;

class Main{
	public static void main(String[] args){
		Addition a = new Addition(6, 8);
		Subtraction s = new Subtraction(10, 2);
		
		a.Sum();
		s.Dif();	
	}
}
