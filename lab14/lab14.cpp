/*
Jonathan Grigg
csci 20
lab14
12.9.16
info I will use to test
Enter the amount borrowed: 10000
Enter the monthly payment you'll make: 200
Enter the annual interest rate: 7.5
Enter the number of years you want to simulate: 3
At the end of 3 years you owe 4468.19 dollars 
*/ 

#include <iostream> 
using namespace std; 
int main(){  
    double a, m, r, I;
    int y;   
    
    // Input amount, payment, interest rate, and number of years
    cout << "Enter the amount borrowed: ";
    cin >> a;
    cout << "Enter the monthly payment you'll make: ";
    cin >> m;
    cout << "Enter the annual interest rate: ";
    cin >> r;
    cout << "Enter the number of years you want to simulate: ";
    cin >> y;   
    
    // convert interest rate from percent to fraction
    r = r/100;  
    
    // iterate through each month
    for(int i = 0; i < y*12; i++)  {    
        // calculate additional interest
        I = a*(r/12);    
        
        // add interest and subtract payment from balance
        a = a + I - m;  
        
    }   
        
        // Print ending amount
    cout << "At the end of " << y << " years you owe " << a << " dollars" << endl;
    return 0;
    
}