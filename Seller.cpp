//IT21168536
#include "Seller.h"
#include "Property.h"
#include <string>
using namespace std;

Seller::Seller()
{
	Seller_ID = 000;
	Name = " ";
	contactNumber = " ";
	Email = " ";
	prp[0] = new Property(104);
	prp[1] = new Property(102);
}

Seller::Seller(int S_ID, string S_Name, string C_Num, string eml, int prp1, int prp2)
{
	Seller_ID = S_ID;
	Name = S_Name;
	contactNumber = C_Num;
	Email = eml;
	prp[0] = prp1;
	prp[1] = prp2;
}

void Seller::Display()
{
	cout << "This is a Seller class" << endl;
}

void Seller::DisplayProperty()
{
	for (int i = 0; i < SIZE; i++) {

		prp[i]->DisplayProperty();//property's display funtion
	}
}

void Seller::DisplaySeller()
{
	cout << "SellerID :" << Seller_ID << endl;
	cout << "Seller name :" << Name << endl;
	cout << "Seller contactnumber :" << contactNumber << endl;
	cout << "Seller email :" << Email << endl << endl;
}

Seller::~Seller()
{
	for (int i = 0; i < SIZE; i++) {

		delete prp[i];

	}
	cout << "deleting seller" << endl;
}
