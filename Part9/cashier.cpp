#include "cashier.h"
#include <iostream>
#include <iomanip>
#include <vector>
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
	
	vector<string> dates;
	vector<int> quantities;
	vector<string> isbns;
	vector<string> titles;
	vector<double> prices;

	do {
		
    	cout << "Date: ";
    	string date;
    	getline(cin, date);
    	
		char newIsbn;
		int index = -1;
		string isbnIn;
    	do {
			newIsbn = 'n';
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

		int qty;
		if(index != -1) {
			cout << "Quantity of Book: ";
			cin >> qty;
			cin.ignore();
		}

		if(index != -1 && qtyOnHand[index] >= qty) {
		
			string title = bookTitle[index];

			double price = retail[index];

			qtyOnHand[index]-=qty;
			
			
			// cout << setw(5) << "Date" << setw(26) << "Quantity" << setw(14) << "ISBN" << setw(26) << "Title" << setw(26) << "Price" << setw(19) << "Total" << setw(9) << endl;
			// cout << "______________________________________________________________________________________________________________________________________________\n";
			// cout << setw(5) << date << setw(26) << qty << setw(14) << isbnIn << setw(26) << title << setw(26) << "$ " << price << setw(16) << "$ " << price*qty << setw(6) << endl;
			
			cout << "Title: " << title << endl;
			cout << "Price: " << price << endl;

			total+=qty*price;

			dates.push_back(date);
			quantities.push_back(qty);
			isbns.push_back(isbnIn);
			titles.push_back(title);
			prices.push_back(price);
		} else if(index != -1 && qtyOnHand[index] < qty) {
			cout << "There aren't enough books in stock for you to buy" << endl;
		}

		cout << "Do you want to add another order? (y for yes, n for no)" << endl;
		cin >> choice;
		cin.ignore();
	} while(choice == 'y');
	
	
	if(dates.size() != 0) {
		cout << setw(5) << "Date" << setw(14) << "ISBN" << setw(26) << "Quantity" << setw(26) << "Title" << setw(26) << "Price" << setw(19) << "Total" << setw(9) << endl;
		cout << "______________________________________________________________________________________________________________________________________________\n";
		for(int i = 0; i < dates.size(); i++) {
			cout << setw(5) << dates[i] << setw(14) << isbns[i] << setw(26) << quantities[i] << setw(26) << titles[i] << setw(26) << "$ " << prices[i] << setw(16) << "$ " << prices[i]*quantities[i] << setw(6) << endl;
		}

		cout << "\t\tSubtotal\t\t\t\t\t$ " << setw(6) << total << endl;
		cout << "\t\tTax\t\t\t\t\t\t$ " << setw(6) << 0.06*total << endl;
		cout << "\t\tTotal\t\t\t\t\t\t$ " << setw(6) << 1.06*total << endl;
		cout << "Thank You for Shopping at Serendipity!";
	}
	
}