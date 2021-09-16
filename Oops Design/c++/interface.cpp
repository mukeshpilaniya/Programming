class Payment{
public:
	virtual void pay(int amount)=0;
};

class CashPayment:public Payment{
	private:
	 int paymentId=101;
	public:
	 void pay(int amount){
		cout<<amount <<" Payment done via CashPayment and PaymentId:"<<paymentId<<endl;
	 }
};

class CreditCard :public Payment{
	private:
	 int paymentId=102;
	public:
	 void pay(int amount){
		cout<<amount <<" Payment done via CreditCard and PaymentId:"<<paymentId<<endl;
	 }
};

class UPI :public Payment{
	private:
	 int paymentId=103;
	public:
	 void pay(int amount){
		cout<<amount <<" Payment done via UPI and PaymentId:"<<paymentId<<endl;
	 }
};


int main(){
	Payment *payment;
	CreditCard creditCard;
	CashPayment cashPayment;
	UPI upi;

	payment=&cashPayment;
	payment->pay(55345);

	payment=&creditCard;
	payment->pay(1445);

	payment=&upi;
	payment->pay(7744);
		
	return 0;
}
