#include "InvestmentA_1.h"
#include <cstdio>
int main(void)
{	
	double amount;
	int period;
	//double interest = 0;
	int itype=0;
	bool type = true;

	printf("Enter Amount and period = ");
	scanf("%lf%d", &amount, &period);

	printf("enter the type of interets 1 for SI & 0 for CI ");
	scanf("%d",&itype);
	Investment b(amount,period);
	if(itype == 1)
		type = true;
	else
		type = false;
	
	printf("calculated intrest = %lf",b.GetInterest(type));
    
}
