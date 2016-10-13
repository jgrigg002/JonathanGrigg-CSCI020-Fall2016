//Author:Jonathan
//Date:10.12.14
//Purpose:practicing loops

#include <iostream>
#include <string>
using namespace std;

struct time_val {
    int hr =0;
    int min =0;
};
 int main () {
    time_val start;
    time_val end;
    time_val count;
    
    int choice =0;
    
    start.hr =1;
    end.hr =2;
    end.min =60;

    count.hr = start.hr;
    count.min = start.min;

    cout <<"Welcome to the random clock. type 1 for default run type 2 to set your own start and end time. ";
    cin >> choice;
    if (choice ==2){
        cout << "what hour would you like it to start at? ";
        cin >> count.hr;
        cout << "what hour would you like it to end at? ";
        cin >> end.hr;
        count.hr = count.hr % 12;
        end.hr = end.hr % 12;
        while ((count.hr < end.hr) && (count.min < end.min)){
             if (count.min <10){
        cout << count.hr << ":0" << count.min << "pm" <<endl;
        }
        else {
            cout << count.hr << ":" << count.min << "pm" <<endl;
    }
    count.min += 15;
    if (count.min == 60){
        count.hr++;
        count.min = 0;
        if (count.hr ==12){
            count.hr =0;
        }
    }
        }
        cout << count.hr << ":0" << count.min << "pm" <<endl;
    }
    else{
while ((count.hr <= end.hr) && (count.min < end.min)){
    if (count.min <10){
        cout << count.hr << ":0" << count.min << "pm" <<endl;
    }
    else {
        cout << count.hr << ":" << count.min << "pm" <<endl;
    }
    
    ++count.min;
    if (count.min == 60){
        count.hr++;
        count.min = 0;
    }
}
}
     return 0;
 }