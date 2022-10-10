#include "loan.h"
#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	double pri;
	float n;
	int choice;

	cout<<"======================="<<endl;
	cout<<"0. personal loan"<<endl;
	cout<<"1. home loan"<<endl;
	
	cout<<"Enter your choice = "<<endl;
	cin>>choice;

	cout<<endl<<"Enetr principle amount = ";
	cin>>pri;
	cout<<endl<<"Enetr period = "<<endl;
	cin>>n;

	cout<<"============================"<<endl;
	 
	
	personalLoan per(pri,n);
	HomeLoan h(pri , n);

//	cout<<endl<<" principle amount"<<per.Getprinciple();
//	cout<<endl<<"period"<<per.Getperiod();
//	cout<<endl<<"Emi"<<per.GetEmi(pri,n);



	switch(choice)
	{
	
		case 0 :
			cout<<"principle = "<<per.Getprinciple()<<endl;
			cout<<"period = "<<per.Getperiod()<<endl;
			cout<<"Emi = "<<per.GetEmi(pri,n)<<endl;
			break;

		case 1 :
			cout<<"principle = "<<h.Getprinciple()<<endl;
			cout<<"period = "<<h.Getperiod()<<endl;
			cout<<"Emi = "<<h.GetEmi(pri,n)<<endl;
			break;
		default:
			cout<<"please enter valide input"<<endl;
			
	}


	
	
	
	
	}

