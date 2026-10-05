#include "bookinfo.h"
#include "cashier.h"
#include "invmenu.h"
#include "reports.h"

#include <iostream>
using namespace std;

int main()
{
    
    
    int choice; 
    do {
    
        cout << " Serendipity Booksellers" << endl;
        cout << "\tMain Menu\n" << endl;
        cout << "1.  Cashier Module\n2.  Inventory Database Module\n3.  Report Module\n4.  Exit\n" << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;
        cin.ignore();
        
        
        switch(choice) {
            case 1:
                cashier();
                break;
            case 2:
                invMenu();
                break;
            case 3:
                reports();
                break;
            case 4:
                cout << "\nYou selected item 4" << endl;
                break;
            default:
                cout << "\nPlease enter a number from 1 to 4" << endl;
                break;
        }
        
    } while(choice != 4);
	
	return 0;
}