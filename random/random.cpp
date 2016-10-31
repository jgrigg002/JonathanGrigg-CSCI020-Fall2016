#include <iostream>
#include <string>
using namespace std;

int main () {
char myString[20] = "my test string";
myString[14] = '!';
cout<<myString<<"Y"<<endl;
return 0;
}