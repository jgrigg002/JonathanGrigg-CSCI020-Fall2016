#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main () {


istringstream input;
    string num[20];
    string inter_med= "28 26 91 10 2 5 54"; //
    int i = 0;
    getline(input,inter_med);
   for (i=0; i<10 ; i++){
    input >> num[i];
    i++;
   }
   for (int j =0; j<10; j++){
   cout << num[j]<<endl;
   }
return 0;
}