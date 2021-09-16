class Add{
public:
	int getSum(int a, int b){
		return a+b;
	}
	int getSum(int a,int b, int c){
		return a+b+c;
	}
	double getSum(double a, double b){
		return a+b;
	}
};

int main(){
	Add add;
	cout<<add.getSum(1,5)<<endl;
	cout<<add.getSum(6,19,2)<<endl;
	cout<<add.getSum(3.5,2.3)<<endl;
}