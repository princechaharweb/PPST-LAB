#include <iostream>
#include <cmath> 
#include <iomanip> 

using namespace std;

int main() {
   // double principal, rate, time, amount, compoundInterest;

    
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate (in percentage): ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;


    rate = rate / 100;

    
    amount = principal * pow((1 + rate), time);

    
    compoundInterest = amount - principal;

    
    cout << fixed << setprecision(2);
    cout << "\nTotal Amount after " << time << " years: " << amount << endl;
    cout << "Compound Interest: " << compoundInterest << endl;

    return 0;
}

    

 