#include "admin.h"
#include "report.h"
#include "seller.h"
#include "person.h"
#include "Admin.h"
#include "property.h"
#include <iostream>
using namespace std;

int main()
{
  //IT21168536
 Person p1;
	p1.display();
    
    // Seller class
	Seller *s1;
    s1 = new Seller(102,"chathura", "0783251301", "lakshan56@gmial.com");
    s1->display();
    s1-> DisplaySeller();
    // Buyer class
    buyer *b1;
    b1 = new buyer(1143,"kasun", "0705367853", "ksunmal@gmial.com");
    b1->Display();
    b1->DisplayBuyer();
    // Admin class
    Admin *A1;
    A1 = new Admin(12,"nimal", "0774850628", "nimalrt25@gmial.com");
    A1->display();
    A1->DisplayAdmin();
    delete s1;
    delete b1;
    delete A1;

  //IT21169830 
    //Report class
  Report r1 = Report(001,01,"Lands");
	r1.displayReport();
	
	Report r2 = Report(002,02,"Houses");
	r2.displayReport();
	
//IT21167928 
  property*pty = new Property();// property class
	
	//Method Calling
     property->displayProperty();
	//--------Deleting Dynamic object--------
     delete property;
	
return 0;

}
