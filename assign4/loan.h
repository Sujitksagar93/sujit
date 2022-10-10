class loan
{	
	private:
	double principle;
	float period;
	float rate;
	
	public:
	loan()
	{
		 principle = 100;
		 period = 3;
		 rate =15;					
	}

	loan(double p ,float t)
	{
		double principle=p;
		float period=t;				
	}
	
	
	double Getprinciple()
	{
		return principle;
	}
	void Setprinciple(double p)
	{
		principle = p;
	}
	
	float Getperiod()
	{
		return period;
	}
	void Setperiod(float t)
	{
		period = t;
	}


	virtual float Getrate()=0;

	float GetEmi(double pri,float t)
	{
				
	return pri * (1+ Getrate()* t/100)/(12 * t);
	
	}


};


class personalLoan:public loan
{

	public :
		personalLoan(double p,float t)
		{
		
//		double principle=p;
//		float period=t;
		loan::Setprinciple(p);
		loan::Setperiod(t);		
			
	
		}
		float Getrate()
		{
			float rate;

			if (Getprinciple()<=500000)
			{
			return 15;
			}
			else
 			{
			return 16;
			}
		}

	private:
	double principle;
	float period;
	
};



class HomeLoan : public loan
{
	public :
		HomeLoan(double p,float t)
		{	
		
		loan::Setprinciple(p);
		loan::Setperiod(t);		
			
	//	double principle=p;
	//	float period=t;
		}

		float Getrate()
		{
			float rate;

			if (Getprinciple()>2000000)
			{
				rate =11;
			}
			else
			{
				rate= 10;
			}
			return rate;
		}

	private:
	double principle;
	float period;



};
