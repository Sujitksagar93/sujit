#include "loan.h"
#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	double principle;
	float period;
	int choice;

	cout<<"======================="<<endl;
	cout<<"0. personal loan"<<endl;
	cout<<"1. home loan"<<endl;
	
	cout<<"Enter your choice"<<endl;
	cin>>choice;

	cout<<endl<<"Enetr principle amount";
	cin>>principle;
	cout<<endl<<"Enetr period";
	cin>>period;

	cout<<"============================"<<endl;
	 
	cous<<endl<<"Enetr principle amount";
	cin>>principle;

	personalLoan p(principle,period);
	HomeLoan h(principle , period);

	switch (choice)
	{
	
		case 0:
			cout<<"principle"<<p.Getprinciple()<<endl;
			cout<<"period"<<p.Getperiod()<<endl;
			cout<<"principle"<<p.GetEmi()<<endl;
			break;

		case 1:
			cout<<"principle"<<h.Getprinciple()<<endl;
			cout<<"period"<<h.Getperiod()<<endl;
			cout<<"principle"<<h.GetEmi()<<endl;
			break;
		default:
			cout<<"please enter valide input"<<endl;
			break;
	}



	
	
	
	
	}

