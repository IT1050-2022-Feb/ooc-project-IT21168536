//IT21168536
#include "Person.h"
#include "Property.h"
#include <iostream>
#include <cstring>
#define SIZE 2
using namespace std;
class buyer : public Person
{
	protected:
		int Buyer_ID;
		Property *prp[SIZE];

	public:
		buyer();
		buyer(int B_ID, string B_Name, string C_Num, string eml);
		void AddProperty(Property *prp);
		void displayBuyer();
		void Display();
		~buyer();
};


