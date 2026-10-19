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

void invMenu()
{
	cout << " Serendipity Booksellers\n";
	cout << " Inventory Databases\n\n";
	int choice;
	
	
	do {
	cout << endl << "1.  Look Up a Book\n2.  Add a Book\n3.  Edit a Book's Record\n4.  Delete a Book\n5.  Return to the Main Menu\n\n";
	
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
    // for(int i = 0; i < SIZE; i++) {
    //     bookInfo(isbn[i], bookTitle[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
    // }

    // cin.ignore();

    cout << "Enter book title: ";
	string bookName;
	cin.ignore();
	getline(cin, bookName);

	bool found = false;
	for(int i = 0; i < SIZE; i++){
		if(bookTitle[i] == bookName && !found){
			bookInfo(isbn[i], bookTitle[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
			found = true;
		}
	}
	if(!found){
		cout << "Book not found." << endl;
	}
}

void addBook() {
    cin.ignore();
    int addIndex = -1;
    bool found = false;
    for(int i = 0; i < SIZE && !found; i++) {
        if(bookTitle[i] == "" || bookTitle[i][0] == '\0') {
            addIndex = i;
            found = true;
        }
    }

    if(!found) {
        cout << "Not enough space to add!" << endl;
    } else {
        cout << "Book Title: ";
        getline(cin, bookTitle[addIndex]);
        
        cout << "ISBN: ";
        getline(cin, isbn[addIndex]);
        
        cout << "Author: ";
        getline(cin, author[addIndex]);
        
        cout << "Publisher: ";
        getline(cin, publisher[addIndex]);
        
        cout << "Date Added (MM-DD-YYYY): ";
        getline(cin, dateAdded[addIndex]);

        cout << "Quantity: ";
        cin >> qtyOnHand[addIndex];

        cout << "Wholesale Cost: ";
        cin >> wholesale[addIndex];
        
        cout << "Retail Price: ";
        cin >> retail[addIndex];

        cin.ignore();
    }
}

void editBook() {
    string titleKey;
    cout << "Book Title: ";
    cin.ignore();
    getline(cin, titleKey);

    bool found = false;
    int editIndex = -1;
    for(int i = 0; i < SIZE && !found; i++) {
        if(bookTitle[i] == titleKey) {
            cout << endl;
            bookInfo(isbn[i], bookTitle[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
            editIndex = i;
            found = true;
        }
    }

    if(!found) {
        cout << "Could not find book" << endl;
        return;
    }

    cout << endl;

    int choice = 0;

    do {
        cout << "What do you want to change? Title (1), ISBN (2), Author (3), Publisher (4), Date (5), Quantity (6), Wholesale Price (7), Retail Price (8)" << endl << "If you'd like to exit, type 9: ";
        cin >> choice;
        // cin.ignore();

        switch(choice) {
            case 1:
                cout << "Book Title: ";
                cin.ignore();
                getline(cin, bookTitle[editIndex]);
                break;
            case 2:
                cout << "ISBN: ";
                cin.ignore();
                getline(cin, isbn[editIndex]);
                break;
            case 3:
                cout << "Author: ";
                cin.ignore();
                getline(cin, author[editIndex]);
                break;
            case 4:
                cout << "Publisher: ";
                cin.ignore();
                getline(cin, publisher[editIndex]);
                break;
            case 5:
                cout << "Date Added (MM-DD-YYYY): ";
                cin.ignore();
                getline(cin, dateAdded[editIndex]);
                break;
            case 6:
                cout << "Quantity: ";
                cin.ignore();
                cin >> qtyOnHand[editIndex];
                break;
            case 7:
                cout << "Wholesale Cost: ";
                cin.ignore();
                cin >> wholesale[editIndex];
                break;
            case 8:
                cout << "Retail Price: ";
                cin.ignore();
                cin >> retail[editIndex];
                break;
            case 9:
                cout << "Terminating" << endl;
                break;
            default:
                cout << "\nPlease enter a number from 1 to 9" << endl;
                break;
        }
    } while(choice != 9);                

}

void deleteBook() {
    cin.ignore();
    string titleKey;
    cout << "Book Title: ";
    getline(cin, titleKey);

    bool found = false;
    int deleteIndex = -1;
    for(int i = 0; i < SIZE && !found; i++) {
        if(bookTitle[i] == titleKey) {
            cout << endl;
            bookInfo(isbn[i], bookTitle[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
            deleteIndex = i;
            found = true;
        }
    }

    if(!found) {
        cout << "Could not find book" << endl;
    } else {
        char ans;
        
        cout << endl << "Are you sure you wish to delete this book? (Y/N): ";
        cin >> ans;
        cin.ignore();

        // while(ans != 'N' && ans != 'Y') {
        //     cout << "Either y or n: ";
        //     cin >> ans;
        //     cin.ignore();
        // }

        if(ans == 'Y' || ans == 'y') {
            bookTitle[deleteIndex] = "";
            isbn[deleteIndex] = "";
        } else {
            cout << "Terminating" << endl;
        }
    }
}