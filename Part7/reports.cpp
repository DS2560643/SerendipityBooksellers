#include "reports.h"
#include <iostream>
using namespace std;

void reports()
{
    cout << " Serendipity Booksellers\n";
	cout << "\tReports\n\n";
	int choice;
	
	
	do {
        cout << "1.  Inventory Listing\n2.  Inventory Wholesale Value\n3.  Inventory Retail Value\n4.  Listing by Quantity\n5.  Listing by Cost\n6.  Listing by Age\n7.  Return to Main Menu\n\n";
        cout << "Enter Your Choice: ";
        
        cin >> choice;
        
        
        switch(choice) {
            case 1:
                repListing();
                break;
            case 2:
                repWholesale();
                break;
            case 3:
                repRetail();
                break;
            case 4:
                repQty();
                break;
            case 5:
                repCost();
                break;
            case 6:
                repAge();
                break;
            case 7:
                cout << "\nYou selected item 7" << endl;
                break;
            default:
                cout << "\nPlease enter a number from 1 to 7" << endl;
                break;
        }
	} while(choice != 7);
}

void repList() {
    cout << "You selected Inventory Listing." << endl;
}


void repWholesale() {
    cout << "You selected Inventory Wholesale Value." << endl;
}


void repRetail() {
    cout << "You selected Inventory Retail Value." << endl;
}


void repQty() {
    cout << "You selected Listing By Quantity." << endl;
}


void repCost() {
    cout << "You selected Listing By Cost." << endl;
}


void repAge() {
    cout << "You selected Listing By Age." << endl;
}