#include<cmath>
#include<cstdio>
class Investment 
{
	
	private:
	double amount;
	int period;
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
	if ((amount>=10000) && (amount<50000))
	{
		rate = 9.0;
	}
	if (amount>=50000)
	{
		rate = 10.0;
	}
	if (period>5)
	{
		 rate = rate + 1;
	}

	return rate;
}

double GetInterest(bool Interesttype)

{
	double rate = InterestRate();
	double interest;
//	printf("rate = %lf",rate);

	double amt;
	if (Interesttype)
	{
		interest=(amount*period*rate)/100;
	}
	else
	{
		amt=amount* (pow((1+rate/100),period));
		interest = amt - amount;
	}
	return interest;
} 
	

double Getamount()
{
	return amount;
}
void Setamount(double aa)
{
	amount=aa;
	//period=pp;
}
int Getperiod()
{
	return period;
}
void Setperiod(int pp)
{
	period =pp;
}

	~Investment()
	{
	}


};
