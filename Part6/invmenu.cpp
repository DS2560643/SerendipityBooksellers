#include <iostream>
using namespace std;

int main()
{
	cout << " Serendipity Booksellers\n";
	cout << " Inventory Databases\n\n";
	int choice;
	
	
	do {
	cout << "1.  Look Up a Book\n2.  Add a Book\n3.  Edit a Book's Record\n4.  Delete a Book\n5.  Return to the Main Menu\n\n";
	
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
        default:
            cout << "\nPlease enter a number from 1 to 5";
            break;
    }
	} while(choice != 5);
	
	return 0;
}
