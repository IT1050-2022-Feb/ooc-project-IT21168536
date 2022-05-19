#include "Admin.h"
#include "Property.h"
#define SIZE 2

Admin::Admin()
{
	Admin_ID = 000;
	Name = " ";
	contactNumber = " ";
	Email = " ";
	prp[0] = new Property(104);
	prp[1] = new Property(102);
}
Admin::Admin(int A_ID, string A_Name, string C_Num, string eml, string pw, int prp1, int prp2)
{
	Admin_ID = A_ID;
	Name = A_Name;
	contactNumber = C_Num;
	Email = eml;
	prp[0] = prp1;
	prp[1] = prp2;
}

void Admin::RemoveProperty()
{
}

void Admin::ManageProperty()
{
}

void Admin::AddProerty()
{
}

void Admin::DisplayReport()
{
}

void Admin::Display()
{
	cout << "This is a Admin class" << endl;
}

void Admin::DisplayAdmin()
{
	cout << "AdminID :" << Admin_ID << endl;
	cout << "Admin name :" << Name << endl;
	cout << "Admin contactnumber :" << contactNumber << endl;
	cout << "Admin email :" << Email << endl << endl;
}

Admin::~Admin()
{
	cout << "Destuctor called" << endl;
}