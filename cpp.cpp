#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

string movieName;
double adultTiketPrice;
double childTicketPrice;
int noOfAdultTiketsSold;
int noOfChildTiketsSold;
double percentDonation;
double grossAmount;
double amountDonated;
double netSaleAmuont;

void movie(){
	
	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the movie name: ";
	getline(cin, movieName);
	cout << endl;

	cout << "Enter the price of an adult tickets: ";
	cin >> adultTiketPrice;
	cout << endl;

	cout << "Enter the price of child tickets: ";
	cin >> childTicketPrice;
	cout << endl;

	cout << "Enter the number of adult tickets: ";
	cin >> noOfAdultTiketsSold;
	cout << endl;

	cout << "Enter the number of child tickets: ";
	cin >> noOfChildTiketsSold;
	cout << endl;

	cout << "Enter the percantage of donation: ";
	cin >> percentDonation;
	cout << endl;

	grossAmount = adultTiketPrice * noOfAdultTiketsSold + 
				childTicketPrice * noOfChildTiketsSold;

	amountDonated = grossAmount * percentDonation / 100;
};



void movie_output()
{
	movie();

	cout << "**************************************************" << endl;

	cout << "Movie name: " << setw(33) << setfill('.') << " " << movieName << endl;

	cout << "Number os tickets sold: " << setw(23) << setfill('.') << " " 
		<< "$" << " " << noOfAdultTiketsSold + noOfChildTiketsSold << endl;

	cout << "Gross amount: " << setw(33) << setfill('.') << " "  << "$"  
		<< " " << grossAmount << endl;

	cout << "Percantange of gross amount donated: " << setw(10) << setfill('.') 
		<< " " << "%" << " " << percentDonation << endl;

	cout << "Amount donated: " << setw(31) << setfill('.') << " "
		<< "$" << " " << amountDonated << endl;

	cout << "Net sale: " << setw(37) << setfill('.') << " " << "$" 
		<< " " << netSaleAmuont;
};


int main ()
{

	movie_output();

	return 0;
}
