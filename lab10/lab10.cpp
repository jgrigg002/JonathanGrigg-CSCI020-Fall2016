//Jonathan Grigg - lab10 - 12.9.16

#include <iostream>
using namespace std;

int main(){
    cout<<"Logic question 1 \n";
    int suzyAge = 25;
    int johnAge = 21;
    if (suzyAge < johnAge){
        cout<<"Suzy is younger than John. \n";
    }
    else{
        cout<<"Suzy is not younger than John. \n";
    }
    cout<<"Logic question 2 \n";
    int x =7;
    int y = 7;
    if (x >= y){
        cout<<"X is greater than or equal to Y \n";
    }
    cout<<"Logic question 3 \n";
    int a = 1;
    int b = 9;
    if (a == b){
        cout<<"A and B are equal\n";
    }
    else{
        cout<<"A and B are not equal\n";
    }
    cout<<"Logic problem 4 \n";
    
    int limit = 20;
    int count = 10;
    if ((limit*count)/2 > 0){
        cout<<"20 times 10 then divided by 2 is larger than zero\n";
    }
    
    cout<<"Logic Problem 5\n";
    int t = -4;
    int z = 0;
    if (t > 5 || z < 2){
        cout<<"Either t is greater than 5 or z is less than or both are true\n";
    }
    cout<<"Logic problem 6\n";
    
    int variable = -5;
    if(!(variable >0)){
        cout<<"-5 is not greater than zero\n";
    }
    
    cout<<"Logic problem 7\n";
    
    a = 16;
    if (a/4 < 8 && a >= 4){
        cout<<"A is less than 8 and greater than or equal to 4\n";
    }
    else{
        cout<<"A is not less than 8 and is not greater than or equal to 4\n";
    }
    
    cout<<"logic problem 8\n";
    x = -2;
    y = 5;
    if(x*y < 10 || y*z < 10){
        cout<<"X timex Y is less than 10 and or y times z is less than 10\n";
    }	
    
    cout<<"logic problem 9\n";
    int j = -2;
    int k = 5;
    int l = 4;
    if(!(j*l < 10) || y/x * 4 < y *2){
        cout<<"j times l is less then 10 and or y divided by z times 4 is less than y times 2\n";
    }


    
    
    
    
    
    return 0;
}
