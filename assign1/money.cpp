#include "money.h"
#include <cstdio>

int main(void)

{
	int r ,p;
	printf("Enetr rupees & paise 1\n");
	scanf("%d%d",&r,&p);
	Money m(r,p);

	printf("Enetr rupees & paise 2\n");
	scanf("%d%d",&r,&p);
	Money m1(r,p);
	Money m2 = m + m1;
	printf("Total Money    =     ");
	m2.print();

};
