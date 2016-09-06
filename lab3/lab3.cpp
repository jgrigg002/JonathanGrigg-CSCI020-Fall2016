/* 
Creator:    Jonathan Grigg
Date:       09/06/2016
Purpose:    Change Machine Emulator
Explenation:The user will input a number of cents and the program will break it 
            down into the the most efficiant amount of change they could have   
            given. it will then tell them how much they have paid in and what   
            they will receive after the 10.9% fee.
*/

#include <iostream>
#include <string>
using namespace std;

int main (){
    
    int start_cents = 0;            // value entered in the begining
    int coins    = 0;               // used for giving amount of change
    int place_holder = 0;           // used for holding numbers
    double final    = 0.00;         // used for calculating final amount
    
    cout << "Please input the amount of of change in cents that you have deposited"<<endl;
    cin  >> start_cents;
    final = start_cents;
    coins = start_cents / 25;                                                   // gives quarters
    cout << endl << "You have inserted " << coins << " quarters, ";
    start_cents %= 25;                                                          // preps variable for next calulation
    coins = start_cents / 10;                                                   // gives dimes
    cout << coins << " dimes, ";
    start_cents %= 10;                                                          // preps variable for next calulation
    coins = start_cents / 5;                                                    // gives nickels
    cout << coins << " nickels, ";
    start_cents %= 5;                                                           // preps variable for next calulation
    cout << coins << " pennies."<< endl<<endl;                                  // gives pennies
    place_holder = final;                                                       // neede to give rounded after fee value
    final /=100;                                                                // calculates the total amount you paid in
    cout << "The total amount you have is $"<< final <<"." <<endl<<endl;        
    place_holder = (place_holder - (place_holder * .109));                      // calculates the final amount after fee
    final = place_holder;
    final /= 100;
    
    cout << "After terminal usage fee you will have $" << final << ".";
    return 0;
}