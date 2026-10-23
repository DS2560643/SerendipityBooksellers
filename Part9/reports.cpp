#include "reports.h"
#include <iostream>
#include <iomanip>
using namespace std;


const int SIZE = 20;

extern string bookTitle[SIZE];
extern string isbn[SIZE];
extern string author[SIZE];
extern string publisher[SIZE];
extern string dateAdded[SIZE];
extern int qtyOnHand[SIZE];
extern double wholesale[SIZE];
extern double retail[SIZE];

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

void repListing() {
    cin.ignore();
    string date = "lebron";
    cout << endl << "Enter Today's Date (MM/DD/YYYY): ";
    getline(cin, date);

    cout << endl << endl << endl;
    cout << "\t\tSerendipity Booksellers Inventory Listing" << endl << endl << "Date:" << setw(35) << date << endl << "___________________________________________________________" << endl;


    for(int i = 0; i < SIZE; i++) {
        if(bookTitle[i] != "" && bookTitle[i] != "\0") {
            cout << endl;
            cout << "Title:" << setw(34) << bookTitle[i] << endl;
            cout << "ISBN:" << setw(35) << isbn[i] << endl;
            cout << "Author:" << setw(33) << author[i] << endl;
            cout << "Publisher:" << setw(30) << publisher[i] << endl;
            cout << "Date Added:" << setw(29) << dateAdded[i] << endl;
            cout << "Quantity on Hand:" << setw(23) << qtyOnHand[i] << endl;
            cout << "Wholesale Cost:" << setw(25) << wholesale[i] << endl;
            cout << "Retail:" << setw(33) << retail[i] << endl;
            cout << "___________________________________________________________" << endl;
        }
    }

    cout << endl << "End of Inventory Report." << endl;
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