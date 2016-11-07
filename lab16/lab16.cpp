//By: Jonthan Grigg
//Lab: 14-food menue selection
//Date: 10.31.16
#include <iostream>

using namespace std;


const int NUM_ELEMENTS = 99; //number of elements

int main(){ 
    float price [10];          //prices will be totalled here for each catagory
        price[0] = 1.50;
        price[1] = 2.50;
        price[2] = 3.50;
        price[3] = 10.50;
        price[4] = 5.00;
        price[5] = 1.00;
        price[6] = 2.35;
        price[7] = 4.00;
        price[8] = 3.00;
        price[9] = 3.00;
    
    double total_price = 0;
        
    int   inv [10];      //invantory amounts will be stored here for each item catagory
        inv[0] = 2;
        inv[1] = 20;
        inv[2] = 20;
        inv[3] = 20;
        inv[4] = 20;
        inv[5] = 20;
        inv[6] = 20;
        inv[7] = 20;
        inv[8] = 20;
        inv[9] = 10;
    
    int item[NUM_ELEMENTS]; //array for menue items
    
    int i= 1;                   //Item count
    int j= 1;                   //count for print
    
    cout <<"Welcome to 'ouR Burgers R Us'" << endl;
    cout <<"the menu avilable today is" <<endl<< "Item #1: yesterdays mystery meat" <<endl<< "Item #2: todays mystery meat" <<endl<< "Item #3: meat of the month" <<endl;
    cout <<"Item #4: pork" <<endl<<"Item #5: blood sauce" <<endl<< "Item #6: nuts and bolts" <<endl;
    cout <<"Item #7: wet noodles" <<endl<< "Item #8: fried french" <<endl<< "Item #9: french fries" <<endl<< "Item #10: random item"<<endl;
    //that last seection is used for shring the menue options
    cout << "what would you like to order today? you may choose up to ten items" <<endl<< "when you are done type 0" <<endl; //inquiry for order selection
    
     while ((item[i-1] != 0) && i<99) { //starts loop that can be exited on typing in command
        cout << "enter choice #" <<i<<endl;
        cin>> item[i];
        inv[item[i]-1] -= 1;
        while (inv[item[i]-1] <=0){
            cout<<"there are no more of that item available";
            inv[item[i]-1] += 1;
            cin>>item[i];
        while (item[i] <0 && item[i] >10){
            cout<<"please choose between item 1 and 10, or type 0 to quit"<<endl;
            cin>>item[i];
        }
        }
        i++;
     }
     
     cout<<endl<<"Your order is:"<<endl;
     while ((item[j] > 0) && i<99) {  //creates print loop till exit command from previous look is reached
         switch (item[j]){
            case 0:
                break;
            case 1:
                cout<<"Item #1: yesterdays mystery meat"<<endl;
                break;
            case 2:
                cout<<"Item #2: todays mystery meat" <<endl;
                break;
            case 3:
                cout<<"Item #3: meat of the month" <<endl;
                break;
            case 4:
                cout<<"Item #4: pork" <<endl;
                break;
            case 5:
                cout<<"Item #5: blood sauce" <<endl;
                break;
            case 6:
                cout<<"Item #6: nuts and bolts" <<endl;
                break;
            case 7:
                cout<<"Item #7: wet noodles" <<endl;
                break;
            case 8:
                cout<<"Item #8: fried french" <<endl;
                break;
            case 9:
                cout<<"Item #9: french fries" <<endl;
                break;
            case 10:
                cout<<"Item #10: random item"<<endl;
                break;
         };
         
         j++;
     }
     cout<<"have a nice day!";
    return 0;
}

