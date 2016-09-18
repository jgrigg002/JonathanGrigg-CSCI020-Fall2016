// Creator:     Jonathan Grigg
// Date:        09-12-2016
// Name:        Project 1
// Purpose:     Calculate weekly wage after taxes

#include <iostream>
#include <string>
using namespace std;

int main (){
    double rate_p = 0.00;  // Rate of pay
    double rate_h = 0.00;  // Number of hours worked
    double gross_p= 0.00;  // amount of pay before taxes
    double net_p  = 0.00;  // pay after taxes
    string person_worker;          // name of user
    
    cout << "Welcome to the pay calculator!" << endl << "This program will help you calculate out your weekly pay before and after taxes, assuming a tax rate of 1.7%" << endl;
                                                    //introduced the program and it's purpose
    cout << "What is your name? ";
    getline (cin, person_worker);                   //Needed to save the space in someone's name
    cout << endl << "what was your rate of pay? ";
    cin >> rate_p;
    cout << "How many hours did you work? ";
    cin >> rate_h;
    cout << endl << endl << endl;
                                                    // previous asked questions and saved to locations to be used for calculating and giving final product
    
    gross_p = rate_h * rate_p;       //calculates gross pay
    net_p = gross_p * .83;           // calculates net pay

    cout << person_worker << endl << "Hours worked: " << rate_h << endl;
    cout << "Pay before taxes: " <<gross_p <<endl << "Pay after taxes: " << net_p <<endl;
                                    //these lines spit put the pay stub
    return 0;

}