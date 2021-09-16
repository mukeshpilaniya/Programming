class Employee{
public:
	int employeeId;
	string name;
	int salary;
	Employee(){

	}
	virtual void calculateSalary()=0;
	int getSalary(){
		return salary;
	}
};

class FullTime:public Employee{
public:
	FullTime(int empId, string empName, int empSalary){
		employeeId=empId;
		name=empName;
		salary=empSalary;
	}
	int hours=6;
	void calculateSalary(){
		cout<<6*getSalary()<<endl;
	}
};

class Intern:public Employee{
public:
	Intern(int empId, string empName, int empSalary){
		employeeId=empId;
		name=empName;
		salary=empSalary;
	}
	int hours=5;
	void calculateSalary(){
		cout<<5*getSalary()<<endl;
	}
};

int main(){
	Employee *intern=new FullTime(101,"mukesh",2000);
	intern->calculateSalary();
	
	Employee *fulltime=new Intern(102,"pilaniya",400);	
	fulltime->calculateSalary();

	//Employee emp=new Employee(); can not instiated abstract class 
}








