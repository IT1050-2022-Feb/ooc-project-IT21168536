//IT21168536
#include "Person.h"
#include <cstring>
#include "Property.h"
#define SIZE 2

	class Seller : public Person
	{
	protected:
		int Seller_ID;
		Property *prp[SIZE];

	public:
		Seller();
		Seller(int S_ID, string S_Name, string C_Num, string eml, int prp1, int prp2);
		void Display();
		void DisplayProperty();
		void DisplaySeller();
		~Seller();

	};
};
