class Add{
	public int addSum(int a, int b){
		return a+b;
	}
	public int addSum(int a,int b, int c){
		return a+b+c;
	}

	public double addSum(double a, double b){
		return a+b;
	}
}

public class Main{
	public static void main(String[] args) {
		Add obj=new Add();
		System.out.println(obj.addSum(2,5));
		System.out.println(obj.addSum(2,5,2));
		System.out.println(obj.addSum(2.3,5.3));
	}
}
