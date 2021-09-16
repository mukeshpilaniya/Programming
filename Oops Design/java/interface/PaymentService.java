interface Payment{
	public void pay(int amount);
}

class Cashpayment implements Payment{
	private int paymentId=101;
	public void pay(int amount){
		System.out.println(amount+" Payment done via CashPayment and paymentId: "+paymentId);
	}
}

class CreditCard implements Payment{
	private int paymentId=102;
	public void pay(int amount){
		System.out.println(amount+" Payment done via CreditCard and paymentId: "+paymentId);
	}
}

class UPI implements Payment{
	private int paymentId=103;
	public void pay(int amount){
		System.out.println(amount+" Payment done via UPI and paymentId: "+paymentId);
	}
}

public class PaymentService{
	public static void main(String[] args){
		Payment cashpayment= new Cashpayment();
		Payment creditCard = new CreditCard();
		Payment upi=new UPI();
		cashpayment.pay(434432);
		creditCard.pay(532);
		upi.pay(4444);
	}
}
