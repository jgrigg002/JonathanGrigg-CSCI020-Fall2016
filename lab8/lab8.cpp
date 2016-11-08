//Jonathan Grigg
//11.08.16
//csci 20
//lab 2.3


#include <iostream>
#include <iomanip>

using namespace std;

double kg_lb(double kg_in){//converts kg_in to lb_out
        double lb_out = kg_in * 2.2046226218; // pounds to kilogram conversion formula
        return lb_out;
    }
    double lb_kg(double lb_in){//converts lb_in to kg_out
        double kg_out = lb_in / 2.2046226218; // kilogram to pounds conversion formula
        return kg_out;
    }
    
int main(){
    double kg; //user entered kilograms
    double lb; //user entered pounds
    char choice = 'r';
    while ((choice == 'R')||(choice == 'r')){ //while loop allowing user to choose
    cout<<"Type 'K' to convert kilograms to pounds"<<endl;
    cout<<"Type 'P' to convert pounds to kilograms"<<endl;
    cout<<"Type 'R' to repeat"<<endl;
    cout<<"Type 'Q' to quit"<<endl;
    cout<<"What is your selection? ";
    cin>>choice;
    while ((choice =='K')||(choice=='k')){ //loop for conversion of kg to lb
        cout<< "Input weight in Kilograms ";
        cin>>kg; //value stored in kg
        cout<<fixed<<setprecision(2)<<"You have "<<kg_lb(kg)<<" Pounds"<<endl<<endl; //uses function and prints and printed
        choice = 'r';
    }
    while ((choice =='P')||(choice=='p')){ //loop for conversion of lb to kg
        cout<< "Input weight in pounds ";
        cin>>lb; //value stored in lb
        cout<<fixed<<setprecision(2)<<"You have "<<lb_kg(lb)<<"pounds"<<endl<<endl; //uses function and prints
        choice = 'r';
    }
    cout<<"Have a nice day!";
    }
    
    
    
    
    return 0;
}