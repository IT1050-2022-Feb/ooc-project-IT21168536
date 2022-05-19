#include "report.h"
class Admin
{
	private:
		int adminID;
		Report *property;
		
	public:
		Admin();
		Admin(int AdminID , Report *p);
		void displayreport();
};