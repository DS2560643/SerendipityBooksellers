#include "cashier.h"
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




void cashier()
{
    
	cout << "Serendipity Book Sellers\n\n";

	cout << fixed << setprecision(2); 

	
	char choice = 'n';

	double total = 0;
	
	do {
    	cout << "Date: ";
    	string date;
    	getline(cin, date);
    	
    	cout << "Quantity of Book: ";
    	int qty;
    	cin >> qty;
    	cin.ignore();
    	
		char newIsbn = 'n';
		int index = -1;
		string isbnIn;
    	do {
			cout << "ISBN: ";
			getline(cin, isbnIn);
			
			index = -1;
			for(int i = 0; i < SIZE && index == -1; i++) {
				if(isbn[i] == isbnIn) {
					index = i;
				}
			}

			if(index == -1) {
				cout << "Could not find ISBN. Would you like to enter a new one (y/n): ";
				cin >> newIsbn;
				cin.ignore();
			}
		} while(newIsbn == 'y' || newIsbn == 'Y');

		if(index != -1 && qtyOnHand[index] >= qty) {
		
			string title = bookTitle[index];

			double price = retail[index];

			qtyOnHand[index]-=qty;
			
			
			cout << setw(5) << "Date" << setw(26) << "Quantity" << setw(14) << "ISBN" << setw(26) << "Title" << setw(26) << "Price" << setw(19) << "Total" << setw(9) << endl;
			cout << "______________________________________________________________________________________________________________________________________________\n";
			cout << setw(5) << date << setw(26) << qty << setw(14) << isbnIn << setw(26) << title << setw(26) << "$ " << price << setw(16) << "$ " << price*qty << setw(6) << endl;
			
			total+=qty*price;

		}

		if(index != -1 && qtyOnHand[index] < qty) {
			cout << "There aren't enough books in stock for you to buy" << endl;
		}

		cout << "Do you want to add another order? (y for yes, n for no)" << endl;
		cin >> choice;
		cin.ignore();
	} while(choice == 'y');

	cout << "\t\tSubtotal\t\t\t\t\t$ " << setw(6) << total << endl;
	cout << "\t\tTax\t\t\t\t\t\t$ " << setw(6) << 0.06*total << endl;
	cout << "\t\tTotal\t\t\t\t\t\t$ " << setw(6) << 1.06*total << endl;
	
	cout << "Thank You for Shopping at Serendipity!";
}