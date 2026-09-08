#include <iostream>
using namespace std;

int main()
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
            cout << "\nYou selected item 1" << endl;
            break;
        case 2:
            cout << "\nYou selected item 2" << endl;
            break;
        case 3:
            cout << "\nYou selected item 3" << endl;
            break;
        case 4:
            cout << "\nYou selected item 4" << endl;
            break;
        case 5:
            cout << "\nYou selected item 5" << endl;
            break;
        case 6:
            cout << "\nYou selected item 6" << endl;
            break;
        case 7:
            cout << "\nYou selected item 7" << endl;
            break;
        default:
            cout << "\nPlease enter a number from 1 to 7" << endl;
            break;
    }
	} while(choice != 7);
    
    
    return 0;
}
