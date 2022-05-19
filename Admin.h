#include "Person.h"
#include "Property.h"
#define SIZE 2 

class Admin : public Person
{
	protected:
		int Admin_ID;
		string Password;
		Property* Prp[SIZE];

	public:
		Admin();
		Admin(int A_ID, string A_Name, string C_Num, string eml, string pw, int prp1, int prp2);
		void RemoveProperty();
		void ManageProperty();
		void AddProerty();
		void DisplayReport();
		void Display();
		void DisplayAdmin();
		~Admin();

};