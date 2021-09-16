class Bank{

	public double getRateOfinterset(){
		return 0;
	}
}

class SBI extends Bank{

	public double getRateOfinterset(){
		return 7.2;
	}
}

class AXIS extends Bank{
	public double getRateOfinterset(){
		return 7.5;
	}
}

public class Main{
	public static void main(String[] args) {
		Bank obj1=new SBI();
		Bank obj2=new AXIS();
		System.out.println(obj1.getRateOfinterset());
		System.out.println(obj2.getRateOfinterset());
	}
}