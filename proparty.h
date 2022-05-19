#include "Seller.h"

#define size 2

class property {

private:
    int property_ID;
    char* property_Type;
    char* property_Location;
    double property_Price;
    double contactNo;
    seller* seller_id[size];
public:
    property();
    void propertyDetails();
    void DisplaypropertyDetails();
    ~property();
};