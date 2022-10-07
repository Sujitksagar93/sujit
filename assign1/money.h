#include <cstdio>

class Money
{
	public :
		Money(int r, int p)
		{
			rupees =r+p/100;
			paise =p%100;
				
			
			//puts(" constructed Initialised");
		}

		Money(const Money& source)
		{
			rupees = source.rupees;   //copy constructor
			paise  = source.paise;
			
			//puts("Copy constructed Initialised");
		}
			int Cash()
		{
			return 100*rupees + paise;
		
		}

		void print() const
		{
		
		printf("%d:%02d\n",rupees,paise);
		
		}

		Money operator+(const Money& rhs)const
		{
			return Money(rupees+ rhs.rupees, paise+ rhs.paise);
		
		}
		~Money()
		{
			//puts("Destructor Initialised");
		}


	private	:
		int rupees;
		int paise;


};
