class Bank{
public:
	virtual double getRateOfInterest(){
		return 0;
	} 
};

class SBI: public Bank{
public:
	double getRateOfInterest(){
		return 7.2;
	}
};

class AXIX: public Bank{
public:
	double getRateOfInterest(){
		return 7.5;
	}
};

int main(){
	Bank *obj1=new SBI();
	Bank *obj2=new AXIX();
	cout<<obj1->getRateOfInterest()<<endl;
	cout<<obj2->getRateOfInterest()<<endl;
}
