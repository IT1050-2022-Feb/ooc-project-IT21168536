//IT21168536
#include <iostream>
#include "buyer.h"
#include "Property.h"
#include<cstring>
using namespace std;

buyer::buyer()
{}

buyer::buyer(int B_ID, string B_Name, string C_Num, string eml)
{
	Buyer_ID = B_ID;
	Name = B_Name;
	contactNumber = C_Num;
	Email = eml;
}

void AddProperty(Property* prp)
{
}
void buyer::displayBuyer()
{
	cout << "buyerID :" << Buyer_ID << endl;
	cout << "buyer name :" << Name << endl;
	cout << "buyer contactnumber :" << contactNumber << endl;
	cout << "buyer email :" << Email << endl << endl;
}
void buyer::Display()
{
	cout << "This is a buyer class" << endl;
}
buyer :: ~buyer()
{
	cout << "Destuctor called" << endl;
}
