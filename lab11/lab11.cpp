#include <iostream>
#include <string>
using namespace std;

double calc_gross_income(double wages, double interest, double unemployment,int status){         //calc gross income
    double income;
    income = wages+interest+unemployment;
    if (status == 2){
        income =income - 2*(3900+6100);
    }
    else {
        income=income - (3900+6100);
    }
    return income;
}

int main (){
    int marital = 0;                        //marital status
    double withold = 0;                     //amount withheld for taxes
    double g_wages = 0;                     //money made at work
    double g_interest = 0;                  //made in interest
    double g_unemp = 0;                     //from unemployment
    double gross = 0;                       //gross adjusted income
    double taxowed = 0;                     //taxes owned
    double refund = 0;                      //refund amount
    string name;                            //name stored here
    
    cout << "what is your name? ";
    getline(cin,name);
    cout << "what is your marital status? 1 for single 2 for married. ";
    cin >> marital;                                                             //these commands inquire and set up variables to use in calculations
    cout << "what were your wages? ";
    cin >> g_wages;
    cout << "amount of interest earned? ";
    cin >> g_interest;
    cout << "amount of unemployment? ";
    cin >> g_unemp;
    cout << "how much did you have withheld for taxes? ";
    cin >> withold;
    
    gross = calc_gross_income(g_wages,g_interest,g_unemp,marital);              // gross income calculator
    if (gross <= 0){                        //for if gross is 0
    taxowed = 0;
    gross = 0;
    }
    else {
        if (marital = 2){                   // calculates taxes if married based on income bracket
            if (gross <= 17850.00){
                taxowed = gross*.1;
            }
            else if (gross <= 72,500.00){
                taxowed = 1785 + (gross-17850)*.15;
            }
            else {
                taxowed = 9982.5 +(gross-72500)*.28;
            }
        }
        else if (marital = 1){                               // calculates taxes if single based on income bracket
            if (gross <= 8925){
                taxowed = gross * .1;
            }
            else if (gross <= 36250){
                taxowed = 892.50 + (gross - 8925)*.15;
            }
            else if (gross <=87850){
                taxowed = 4991.25 + (gross -36250)*.25;
            }
            else{
                taxowed = 17891.25 +(gross - 87750)*.28;
            }
        }
    }
    taxowed= taxowed - withold;                     //calculates refund amount
    if (taxowed < 0){
        refund = taxowed * (-1);
        taxowed = 0;
    }
    else{
        
    }
    cout << endl << "Total Adjusted Gross Income: $"<<gross<<endl;
    cout << "Total tax owed: $" << taxowed <<endl;
    cout << name << " is entitled to a REFUND of $" <<refund;
    
return 0;
}