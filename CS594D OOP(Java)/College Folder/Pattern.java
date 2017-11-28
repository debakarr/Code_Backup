class Pattern{
	public static void main(String[] args){
		for(int i =0; i<10;i++){
			System.out.print("* ");
			if(i%2 == 0){
				continue;
			}
			System.out.println();
		}
	}
}
