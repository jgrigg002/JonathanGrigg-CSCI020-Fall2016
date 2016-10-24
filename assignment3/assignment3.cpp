#include <iostream>
#include <cstdlib>
#include <ctime>
#incldue <
using namespace std;

class num_guess {
    public:
    num_guess();
    void num_create ()
    void num_create (int user_high,int user_low);
    int num_test ()
    
    private:
    int num_rand;
    int num_high;
    int num_low;
    };
    
    num_guess::num_guess{
        srand(time(null));
        high = 10;
        low = 1;
    }
    
    num_guess::num_create(){
        num_rand = rand();
    }
    num_guess::num_create(int user_high,int user_low){
        num_rand = rand();
    }
    
}

int main (){
    
}