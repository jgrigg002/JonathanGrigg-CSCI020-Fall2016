//Creator: Jonathan Grigg
//Date:    10/4/16
//Name:    Atm
//Purpose: practice writting class's

#include <iostream>
using namespace std;

class account {
    public:
    int choice;
    double amount;
    void withdraw (double amount_W);    //for withdrawing money
    void deposit (double amount_D);     //for depositing
    double get_bal () const;     //for calling the balance up
    
    private:
    double balance = 0;        //where the balance is stored
    
};

void account::withdraw (double amount_W){
    balance = balance - amount_W;
    if (balance < 0){
        cout << endl << endl;
        cout << "Insuficient funds for transaction" <<endl<<endl;
        balance = balance + amount_W;
    return;
    }
    else {
        cout<< endl << endl;
        return;
    }
}
void account::deposit (double amount_D){
    balance = balance + amount_D;
    cout << endl;
    return;
}
double account::get_bal () const {
    cout << endl;
    return balance;
}
int main (){
    account acnt1;                           //object for user's account
    
    restart:                                 //will return to this spot
    cout << "please choose an option." <<endl;
    cout << "type '1' for account balance, '2' to deposit funds, or '3' to withdraw funds, and '4' to exit program"<< endl;
    cout << "what is your selection? ";
    cin  >> acnt1.choice;                          //now the user can choose
    
    if (acnt1.choice == 1) {
        cout << "your balance is $"<< acnt1.get_bal() << endl << endl;
        goto restart;
    }
    else if (acnt1.choice == 2){
        cout << "How much would you like to deposit? $";
        cin >> acnt1.amount;
        acnt1.deposit(acnt1.amount);
        goto restart;
    }
    else if (acnt1.choice == 3 ){
        cout << "How much would you like to withdraw? $";
        cin >> acnt1.amount;
        acnt1.withdraw(acnt1.amount);
        goto restart;
    }
    else if (acnt1.choice == 4){
    }
    else{
        goto restart;
    }

return 0;
}