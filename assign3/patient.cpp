#include "patient.h"
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main(void)
{
	int id , bed , n;
	string name;
	float discount;
	cout<<"Enter patient Id :"<<endl;
	cin>>id;

	cout<<"Enter patient name"<<endl;
	cin>>name;

	cout<<"Enter bed type :"<<endl;
	cin>>bed;

	cout<<"Enter days :"<<endl;
	cin>>n;

	Patient p(id,name,bed,n);


	cout<<"the total amount without Gst : "<<p.getBillAmount()<<endl;

//	printf("the total amount without gst : %d \n ",p.getBillAmount());
//	printf("the total amount with gst : %d \n ",p.getHospitalExp()+ p.getBillAmount());
	
	cout<<"the total amount with Gst : "<<p.getHospitalExp() + p.getBillAmount()<<endl;

	InHousePatient ip(id,name,bed,n,discount);

	//printf("InHousePatient bill : %d \n ", ip.getBillAmount());
	cout<<"InHousepatient bill : "<<ip.getBillAmount()<<endl;	

}
