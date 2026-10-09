#include "cashier.h"
#include <iostream>
#include <iomanip>
using namespace std;

void cashier()
{
    
	cout << "Serendipity Book Sellers\n\n";

	cout << fixed << setprecision(2); 

	
	char choice = 'n';
	
	do {
    	cout << "Date: ";
    	string date;
    	getline(cin, date);
    	
    	cout << "Quantity of Book: ";
    	int qty;
    	cin >> qty;
    	cin.ignore();
    	
    	cout << "ISBN: ";
    	string isbn;
    	getline(cin, isbn);
    	
    	cout << "Title: ";
    	string title;
    	getline(cin, title);
    	
    	cout << "Price: ";
    	double price;
        cin >> price;
        cin.ignore();
    	
    	cout << "Date\t\tQty\t\tISBN\t\tTitle\t\t\t\tPrice\t\tTotal\n";
    	cout << "_________________________________________________________________________________________\n";
    	cout << date << "\t\t" << qty << "\t\t" << setw(14) << isbn << "\t\t" << setw(26) << title << "\t\t\t\t" << "$ " << setw(6) << price << "\t\t" << "$ " << setw(6) << price*qty << endl;
    	
    	
    	cout << "\t\tSubtotal\t\t\t\t\t$ " << setw(6) << qty*price << endl;
    	cout << "\t\tTax\t\t\t\t\t\t$ " << setw(6) << 0.06*qty*price << endl;
    	cout << "\t\tTotal\t\t\t\t\t\t$ " << setw(6) << 1.06*qty*price << endl;
    	
    	cout << "Do you want to add another order? (y for yes, n for no)" << endl;
    	cin >> choice;
		cin.ignore();
	} while(choice == 'y');
	
	cout << "Thank You for Shopping at Serendipity!";
}