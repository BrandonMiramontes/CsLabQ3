#include<iostream>
using namespace std;

int main()
{
	int currentPrice;
	int lastMonthsPrice;

	cout << "What is the current price?\n",
	cin >> currentPrice;
	cout<<"What was last months price?\n",
	cin >> lastMonthsPrice;

	//calculations
	int changeInPrice = currentPrice - lastMonthsPrice;
	int monthlyPayment = (currentPrice * 0.4) / 12;

	//outputs
	 cout << "The car is " << "$" << currentPrice<<"." << " The change is " << "$" << changeInPrice << " since last month.\n";
	 cout << "The estimated monthly payment is" << " $" << monthlyPayment<<".";
	
	return 0;


}
