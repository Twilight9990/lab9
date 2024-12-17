#include<iostream>
#include<iomanip>
using namespace std;
double loan,rate,Pay;

int main(){	
	cout << "Enter initial loan: ";
    cin >> loan; 
	cout << "Enter interest rate per year (%): ";
    cin >> rate; 
	cout << "Enter amount you can pay per year: ";
    cin >> Pay;
    cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

    double NewBalance, PrevBalance = loan, Interest, Total, Payment = Pay;
    int year = 0;

    do{
        year = year + 1;
        if(year!=1) PrevBalance = NewBalance;
        Interest = (rate * PrevBalance) / 100;
        Total = PrevBalance + Interest;
        if(Total<Payment){
            Payment = Total;
        }
        NewBalance = Total - Payment;
    cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";
}while(NewBalance!=0);
	
	return 0;
}
