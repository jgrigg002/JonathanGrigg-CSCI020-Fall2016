//By: Jonthan Grigg
//Lab: 14-food menue selection
//Date: 10.26.16
#include <iostream>
#include <string>
using namespace std;


const int NUM_ELEMENTS = 99; //number of elements

int main(){
    string item[NUM_ELEMENTS]; //array for menue items
    int i= 1;                   //Item count
    int j= 1;                   //count for print
    cout <<"Welcome to 'ouR Burgers R Us'" << endl;
    cout <<"the menu avilable today is" <<endl<< "Item #1: yesterdays mystery meat" <<endl<< "Item #2: todays mystery meat" <<endl<< "Item #3: meat of the month" <<endl;
    cout <<"Item #4: " <<endl<<"Item #5: " <<endl<< "Item #6: " <<endl;
    cout <<"Item #7: " <<endl<< "Item #8: " <<endl<< "Item #9: " <<endl<< "Item #10: "<<endl;
    //that last seection is used for shring the menue options
    cout << "what would you like to order today? you may choose up to ten items" <<endl<< "when you are done type quit" <<endl; //inquiry for order selection
    
     while ((item[i-1] != "quit") && (item[i-1] != "Quit") && i<99) {
        cout << "enter choice #" <<i<<endl;
        getline(cin, item[i]);
        i++;
     }
     cout<<"Order is "<<endl;
     while ((item[j] != "quit") && (item[j] != "Quit") && i<99) {
         cout <<item[j]<<endl;
         j++;
     }
     cout<<"have a nice day!";
    return 0;
}
