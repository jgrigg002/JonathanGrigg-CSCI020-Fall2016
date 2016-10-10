/* created by Jonathan Grigg
on 10.10.16
credit for flow chart goes to randle monroe of XKCD
*/
#include <iostream>
using namespace std;

int main(){
    int x = 0;
   cout << "Is it the ninties or are you stuck in the ninties? type 1 for yes 2 for no"<<endl;
   cin >> x;
   if (x ==1){
       cout << "STOP!" <<endl<<" what comes next, type 1 for'collaborate' or 2 for 'Hammer time!' 3 for other options. ";
       cin >> x;
       switch (x){
            case 1:
                cout << "STOP! Colaborate! Listen";
                break;
            case 2:
                cout << "STOP! It's Hammer Time! De ne ne ne... ne ne.. ne ne. It's Hammer Time!";
                break;
            default:
            cout << "you're lame.";
       }
   }
   else {
       cout <<"Congratulations, you don't need this. good bye.";
   }
return 0;
}