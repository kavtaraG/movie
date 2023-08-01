
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;


string movie = "Movie name: ";
string tkt_sold = "Number of tikets sold: ";
string gross_amount = "Gross amount: ";
string percentage_gross_amount = "Percentage of gross amount donated: ";
string amount_donated = "Amount donated: ";
string net_sale = "Net sale: ";

void mov(){
	string asterix = "*";
	string dot = ".";
	string dolar_sing = "$";
	string percent_sing = "%";

	string movie_name = " Journay to mars";
	int sold_tkt = 2650;
	double grs_amount = 9150.0;
	double percentage = 10.0;
	double donation = 915.0;
	double sale = 8235.0;

	cout << setfill('*');
	cout << setw(50) << asterix << endl;
	cout << movie << setw(22) << setfill('.') << dot << movie_name << endl;
	cout << tkt_sold << setw(23) << setfill('.') << " " << sold_tkt << endl;
	cout << gross_amount << setw(30) << setfill('.') << " " << setw(1)  << setfill('$') << dolar_sing << " " << grs_amount << endl;
	cout << percentage_gross_amount << setw(10) << setfill('.') << " " << setw(1) << setfill('%') << percent_sing << " " << percentage << endl;
	cout << amount_donated << setw(29) << setfill('.') << " " << setw(1) << setfill('$') << dolar_sing << " " << donation << endl;
	cout << net_sale << setw(34) << setfill('.') << " " << setw(1) << setfill('$') << dolar_sing << " " << sale;

};

int main()
{

	return 0;
}