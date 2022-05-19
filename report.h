//IT21169830
class Report
{
	private:
		int reportid;
		int propertyID;
		char propertyType;
		
	public:
		Report();
		Report(int ReportID ,int PropertyID , char PropertyType);
		void displayReport();
};
