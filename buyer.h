//IT21172014 
#include <person.h>
class buyer : public person
{
    protected:
		int Buyer_ID;
		
	public:
		buyer(int B_ID, string B_Name, string C_Num, string eml);
		void Display();
		void DisplayBuyer();
		~buyer();
}
