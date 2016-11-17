#include <iostream>

using namespace std;

void swap(int *x, int *y){
        int temp;
        temp = *x;
        *x=*y;
        *y=temp;
        return ;
    }
    
int main(){
    int a=5;
    int b=2;
    
    swap(a,b);
    cout<<a<<" "<<b;

    
    
}