#include <iostream>
#include "report.h"

using namespace std;

Report::Report(){};
Report::Report(int ReportID ,int PropertyID , char PropertyType){
	reportid = ReportID;
	propertyID = PropertyID;
	propertyType = PropertyType;
}

void Report::displayReport()
{
	cout << "Report ID: " << reportid << endl;
	cout << "Property ID: " << propertyID << endl;
	cout << "Property Type: " << propertyType << endl;
}
