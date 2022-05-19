#include <iostream>
#include "admin.h"

using namespace std;

Admin::Admin(){}
Admin::Admin(int AdminID , Report *p){
	adminID=AdminID;
	property = p;
}
void Admin::displayreport(){
	property->displayReport();
}