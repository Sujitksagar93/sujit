#include<math.h>
class Investment 
{
	public :
	Investment()
	{
        	amount=10000;
	        period=3;
	}
	Investment (double amount ,int period)
	{
		this ->amount=amount;
		this ->period=period;
	
	
	}
double InterestRate()
{	double rate=0;
	
	if (amount<10000)
	{	
	 	 rate =8.0;
	}
	if (10000>amount) && (amount<50000)
	{
		rate = 9.0;
	}
	if (amount>50000)
	{
		rate = 10.0;
	}
	if (period>5)
	{
		 rate = rate + 1;
	}

	return rate;
}

double GetInterest( bool Interesttype )

{
	double rate = InterestRate()
	double interest = 0;
	double amount = 0;
	if (Interesttype)
	{
		interest=(amount*period*rate)/100;
	}
	else
	{
		amt=amount*pow(1+rate/100);period;
		interest = amt - amount;
	}
		return Interest;
} 
	
	~Invetment()
	{

	}

double Getamount()
{
	return amount;
}
void Setamount()
{
	amount=Amount;
}
int Getperiod()
{
	return period;
}
void Setperiod()
{
	period = Period;
}


	private:
	double amount;
	int period;
}
