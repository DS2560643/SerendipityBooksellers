#include "bookinfo.h"
#include <iostream>
#include <iomanip>
using namespace std;

void bookInfo(string isbn, string title, string author, string publisher, string date, int qty, double wholesale, double retail)
{
	cout << fixed << setprecision(2); 
    cout << " Serendipity Booksellers\n";
	cout << " Book Information\n\n";

	cout << "ISBN: " << isbn << endl;
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Publisher: " << publisher << endl;
	cout << "Date Added: " << date << endl;
	cout << "Quantity-On-Hand: " << qty << endl;
	cout << "Wholesale Cost: " << wholesale << endl;
	cout << "Retail Price: " << retail << endl;
}