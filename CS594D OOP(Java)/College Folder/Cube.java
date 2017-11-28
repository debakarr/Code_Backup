class Cube{
	void cubeNumber(int n){
		for(int i = 1;i<=n;i++){
			System.out.println(i+"^3 = "+ (i*i*i));
		}
	}
}
class Main{
	public static void main(String[] args){
		Cube c =  new Cube();
		c.cubeNumber(Integer.parseInt(args[0]));
	}
}
