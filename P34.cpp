// P34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float ReadData() {

	float TotalSales;
	cout << "Enter Total Sales: ";
	cin >> TotalSales;
	return TotalSales;
}
float PrecentageForSales(float TotalSales) {
	

	if (TotalSales >= 1000000) {
	    return 0.01;

	}
	else if (TotalSales >= 500000) {
		return 0.02;

	}
	else if (TotalSales >= 100000) {
		return  0.03;

	}
	else if (TotalSales >= 50000) {
		return  0.05;

	}
	else {
		return  0;
	}

}

float TotalPrecntageCalculation(float TotalSales) {

	float TotalPrecentage = PrecentageForSales(TotalSales) * TotalSales;

	return TotalPrecentage;

}
int main()
{
	
	float TotalSales;

	TotalSales = ReadData();
	
	
	cout << "********************************\n";
	cout << "TotalPrecentage: " << TotalPrecntageCalculation(TotalSales);
	
	return 0;
}


