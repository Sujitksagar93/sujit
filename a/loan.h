class loan
{
	
	private:
	double principle;
	float period;
	float rate;
	

	public:
	loan()
	{
		 principle = 100000;
		 period = 3;
		 rate =15;
					
	}

	loan(double p ,float t)
	{
		double principle;
		float period;				
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

	float GetEmi(double p, float t)
	{
	
	return p * (1+ Getrate()* t/100)/(12 * t);
	
	}


};


class personalLoan:public loan
{

	public:
	/*	personal_loan():loan()
		{
		
		double principle;
		float period;

		}*/
		personalLoan(double p,float t):loan()
		{
		
		double principle=p;
		float period=t;
		
			
	
		}
		float Getrate()
		{
			float rate;

			if (principle<=500000)
			{
			return 15;
			}
			else
			{
		//	rate = 16;
			return 16;
			}
		}

	protected:
	double principle;
	float period;
	


};



class HomeLoan : public loan
{
	public:

	/*	Home_loan():loan()
		{

		}
		*/
		HomeLoan(double p,float t):loan()
		{	
		//	loan::Setprinciple(p);
		//
		//	loan::Setperiod(t);
		double principle=p;
		float period=t;
		}

		float Getrate()
		{
			float rate;

			if (principle<=2000000)
			{
			return 10;
			}
			else
			{
			return 11;
			}
		}

	protected:
	double principle;
	float period;



};
