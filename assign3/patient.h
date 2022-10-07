#include <string>
#include <iostream>
using namespace std;
class Patient
{
	private:
		int patientId;
		string patientName;
		int bedType;
		int noOfdays;

	public:

		Patient()
		{
		 
		int patientId = 101;
		string patientName = "Sarang";
		int bedType = 1;
		int noOfdays = 5;
	
		}

		Patient(int pid , string name, int bedT,int days)
		{
			patientId = pid;
			patientName = name;
			bedType = bedT;
			noOfdays = days;		
		}
	
		virtual	int getBillAmount()
		{	
			int amount;		
			int price;

			if (bedType == 1)
			   price = 500;

			if (bedType == 2)
			   price = 350;
			
			if (bedType == 3)
			   price = 200;
			
    			return   noOfdays * price;
			}
		int getHospitalExp()
		{
		
		   return getBillAmount()*0.05;
		
		}

	int Getpatientid()
	{
	 return patientId;
	}
	void Setpatient(int pid)
	{
	 patientId = pid;
	}

	string GetpatientName()
	{
	 return patientName;
	}
	void SetpatientName(string name)
	{
	 patientName = name;
	}

	int GetbedType()
	{
	 return bedType;
	}
	void SetbedType(int bedT)
	{
	 bedType = bedT;
	}

	int GetnoOfdays()
	{
	 return noOfdays;
	}
	void SetnoOfdays(int days)
	{
	 noOfdays = days;
	}

	~Patient()
	{
	
	}

};

class InHousePatient : public Patient
{
	private :
		float discount;

	public:
		InHousePatient():Patient()
		{
		   discount=0;
		}
		InHousePatient(int pid ,string name, int bedT,int days,float discount ):Patient(pid ,name, bedT, days)
			
		{
		this->discount=discount;
		}

	int getBillAmount()
	{
		int amount;
		amount = Patient::getBillAmount();
		if (amount>5000)
			return amount * 0.95;
		else 
			return amount*(1-discount);
	
	}

};
