//Jonathan Grigg - csci20 - lab 17 - 12.10.16

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    const int FIRST_LENGTH =10; //sets first name length
    const int LAST_LENGTH = 20; //sets last name langth
    char first_name[FIRST_LENGTH];
    char last_name[LAST_LENGTH];
    cout<<"what is your name? \nPlease type it in first name then last name format.\nFirst name may be no larger than 10 charecters.\n";
    cout<<"Last name may be no larger than 20 charecters.\n";
    for (int i=0; first_name[i] != '\0' ; i++){
        cin>>first_name[i];
    }
    cout<<first_name;
    return 0;        
}