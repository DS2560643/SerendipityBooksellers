#include "bookinfo.h"
#include <iostream>
using namespace std;

void bookinfo(string isbn, string title, string author, string publisher, string date, int qty, double wholesale, double retail)
{
    cout << " Serendipity Booksellers\n";
	cout << " Book Information\n\n";

	cout << "ISBN: " << isbn;
	cout << "Title: " << title;
	cout << "Author: " << author;
	cout << "Publisher: " << publisher;
	cout << "Date Added: " << date;
	cout << "Quantity-On-Hand: " << qty;
	cout << "Wholesale Cost: " << wholesale;
	cout << "Retail Price: " << retail;
	
	cout << "ISBN:\nTitle:\nAuthor:\nPublisher:\nDate Added:\nQuantity-On-Hand:\nWholesale Cost:\nRetail Price:";
}