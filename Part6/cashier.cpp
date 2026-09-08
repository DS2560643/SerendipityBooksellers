#include <iostream>
using namespace std;

int main()
{
    
	cout << "Serendipity Book Sellers\n\n";
	
	int choice = 0;
	
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
    	
    	cout << "Qty\t\tISBN\t\tTitle\t\t\t\tPrice\t\tTotal\n";
    	cout << "_________________________________________________________________________________________\n";
    	cout << qty << "\t\t" << isbn << "\t\t" << title << "\t\t\t\t" << "$ " << price << "\t\t" << "$ " << price*qty << endl;
    	
    	
    	cout << "\t\tSubtotal\t\t\t\t\t$ " << qty*price << endl;
    	cout << "\t\tTax\t\t\t\t\t\t$ " << 0.06*qty*price << endl;
    	cout << "\t\tTotal\t\t\t\t\t\t$ " << 1.06*qty*price << endl;
    	
    	cout << "Do you want to add another order? (1 for yes, 0 for no)" << endl;
    	cin >> choice;
	} while(choice == 1);
	
	cout << "Thank You for Shopping at Serendipity!";
	return 0;
}
