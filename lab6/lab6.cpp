//Jonathan Grigg
//csci20
//11.8.16
//lab6:copyright function
//using lab 3 for template
#include <iostream>
#include <string>
using namespace std;

void copyright_tag(){
    cout <<"    v    "<<endl;
    cout <<"-->   <--"<<"   \u00A9 Copyright Jonathan Grigg 2016"<<endl;
    cout <<"    ^    "<<endl;
    return;
}
int main(){
    
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
    
    cout << "After terminal usage fee you will have $" << final << "."<<endl;
    
    copyright_tag();
    return 0;
}