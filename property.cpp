//IT21167928 
#include <iostream>
#include<string.h>

using namespace std;
class Property
{
 
private:
	int proprtyID;
	char propertyType[50];
	char propertyLocation[50];
	double propertyPrice;
	double contactNo;

public:
    Property();
	void Propertydetails()
	{
		cout<<"\n Enter the details for Property \n ";
		cout<<"\n Property ID:\t";
		cin>> proprtyID;
		cout<<"\n Enter the Property Type:\t";
		cin>> propertyType;
		cout<<"\n Enter the Property location:\t";
		cin>> propertyLocation;
		cout<<"\n Enter the property Price:\t";
		cin>> propertyPrice;
	}


	void displayPropertydetails()
	{
		cout<<"\n Enter the details for Property \n ";
		cout<<"\n Property ID:\t"<<proprtyID;
		cout<<"\n Enter the Property Type:\t"<<propertyType;
		cout<<"\n Enter the Property location:\t"<<propertyLocation;
		cout<<"\n Enter the property Price:\t"<<propertyPrice;
	}

};



int main()
{
  char name[50];
  double ContactNo ;
  cout<<"\n WELCOME TO ONLINE PROPERTY SALES SYSTEM  \n";
  
  Property p;  //create object
  cout<<"\n\n";
  cout<<"\n Enter property Details\n";
  cout<<"\n Enter the property Name:\t";//get the 
  cin>>name;
 
  cout<<"\n enter contact  number:\t";
  cin>>ContactNo;
  P.Propertydetails();//calling function
  }
