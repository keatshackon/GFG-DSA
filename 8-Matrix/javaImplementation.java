class arr{
	public static void main(String []args){

		int [][]a = new int[2][3];
		print(a);
		

	}
	public  static void print(int [][]a){
		for(int i = 0;i < a.length;i++){
			for(int j = 0;j < a[i].length;j++){
				System.out.print(a[i][j] + " ");
			}
			System.out.println();
		}
	}
}