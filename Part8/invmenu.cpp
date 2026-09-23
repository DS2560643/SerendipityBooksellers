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
	cout << endl << "1.  Look Up a Book\n2.  Add a Book\n3.  Edit a Book's Record\n4.  Delete a Book\n5.  Return to the Main Menu\n\n";
	
	cout << "Enter Your Choice: ";
	
	cin >> choice;
    cin.ignore();
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
    string titleKey;
    cout << "Book Title: ";
    getline(cin, titleKey);

    for(int i = 0; i < SIZE; i++) {
        if(bookTitle[i] == titleKey) {
            cout << endl;
            bookinfo(isbn[i], bookTitle[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
            return;
        }
    }

    cout << "No book with that title was found" << endl;
}

void addBook() {
    int addIndex = 0;
    while(addIndex < SIZE && bookTitle[addIndex] != "" && bookTitle[addIndex][0] != '\0') {
        addIndex++;
    }

    if(addIndex >= SIZE) {
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
        
        cout << "Date Added: ";
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
    getline(cin, titleKey);

    bool found = false;
    int editIndex = -1;
    for(int i = 0; i < SIZE && !found; i++) {
        if(bookTitle[i] == titleKey) {
            cout << endl;
            bookinfo(isbn[i], bookTitle[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
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
        cin.ignore();

        switch(choice) {
            case 1:
                cout << "Book Title: ";
                getline(cin, bookTitle[editIndex]);
                cin.ignore();
                break;
            case 2:
                cout << "ISBN: ";
                getline(cin, isbn[editIndex]);
                cin.ignore();
                break;
            case 3:
                cout << "Author: ";
                getline(cin, author[editIndex]);
                cin.ignore();
                break;
            case 4:
                cout << "Publisher: ";
                getline(cin, publisher[editIndex]);
                cin.ignore();
                break;
            case 5:
                cout << "Date Added: ";
                getline(cin, dateAdded[editIndex]);
                cin.ignore();
                break;
            case 6:
                cout << "Quantity: ";
                cin >> qtyOnHand[editIndex];
                cin.ignore();
                break;
            case 7:
                cout << "Wholesale Cost: ";
                cin >> wholesale[editIndex];
                cin.ignore();
                break;
            case 8:
                cout << "Retail Price: ";
                cin >> retail[editIndex];
                cin.ignore();
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

void deleteBook() {string titleKey;
    cout << "Book Title: ";
    getline(cin, titleKey);

    bool found = false;
    int deleteIndex = -1;
    for(int i = 0; i < SIZE && !found; i++) {
        if(bookTitle[i] == titleKey) {
            cout << endl;
            bookinfo(isbn[i], bookTitle[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
            deleteIndex = i;
            found = true;
        }
    }

    if(!found) {
        cout << "Could not find book" << endl;
        return;
    }


    char ans;
    
    cout << endl << "Are you sure you wish to delete this book? (y/n): ";
    cin >> ans;
    cin.ignore();

    while(ans != 'n' && ans != 'y') {
        cout << "Either y or n: ";
    }

    if(ans == 'y') {
        bookTitle[deleteIndex] = "";
        isbn[deleteIndex] = "";
    } else if(ans == 'n') {
        cout << "Terminating" << endl;
    }
}