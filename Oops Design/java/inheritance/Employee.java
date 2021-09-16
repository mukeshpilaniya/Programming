abstract class Employee{
	private int employeeID;
	private String name;
	private int salary;

	Employee(int employeeID,String name, int salary){
		this.employeeID=employeeID;
		this.name=name;
		this.salary=salary;
	}
	abstract public void  calculateSalary();
	public int getSalary(){
		return salary;
	}
}

class FullTime extends Employee{
	
	FullTime(int employeeID, String name, int salary){
		super(employeeID,name,salary);
	}
	int hours=6;
	public void calculateSalary(){
		System.out.println(6*getSalary());
	}
}

class Inetern extends Employee{
	Inetern(int employeeID, String name, int salary){
		super(employeeID,name,salary);
	}
	int hours=5;
	public void calculateSalary(){
		System.out.println(hours*getSalary());
	}
}


public class Company{
	public void static main(String[] arrgs){
		Employee fulltime=new FullTime(101,"mukesh",20000);
		Employee intern=new Inetern(102,"pilaniya",2000);
		fulltime.calculateSalary();
		intern.calculateSalary();
	}
}
