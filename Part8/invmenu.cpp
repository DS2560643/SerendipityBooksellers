#include "invmenu.h"
#include "bookinfo.h"
#include <iostream>
using namespace std;

extern const int SIZE = 20;

extern string bookTitle[SIZE];
extern string isbn[SIZE];
extern string author[SIZE];
extern string publisher[SIZE];
extern string dateAdded[SIZE];
extern int qtyOnHand[SIZE];
extern double wholesale[SIZE];
extern double retail[SIZE];

void invmenu()
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
            lookUpBook();
            break;
        case 2:
            addBook();
            break;
        case 3:
            editBook();
            break;
        case 4:
            deleteBook();
            break;
        case 5:
            cout << "\nYou selected item 5" << endl;
            break;
        default:
            cout << "\nPlease enter a number from 1 to 5";
            break;
    }
	} while(choice != 5);
}

void lookUpBook() {
    cout << "You selected Look Up Book." << endl;
}

void addBook() {
    cout << "You selected Add Book." << endl;
}

void editBook() {
    cout << "You selected Edit Book." << endl;
}

void deleteBook() {
    cout << "You selected Delete Book." << endl;
}