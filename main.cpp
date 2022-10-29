#include <iostream>
#define INIT_ROLL 2048
#include <cstdlib>
#include "nada.h"
using namespace std;


int call_on_roll(int roll) {
    if (roll % 2 == 0) return -1;
    else return INIT_ROLL;
}

int sum (int x, int y) {
    
    cout << x+y;
}

// subtraction operation
int subtract (int x, int y) {
    
    cout << x-y;
    
}

int upd(int i,int l,int r,int x,int v){
    if(v == (int)'V'){
        return -1;
    }
    if(x < l or x > r){
        return 0;
    }
    else{
        return 1;
    }
    return 0;
}

// Random number initialisation for starting protocol
int main()
{
    // rand()%6 generates number between 0 to 5
    for(int i=1;i<=25;i++)
    cout<<1 + rand()%6<<"\n";
    
    Student sde = Student();
    cout << call_on_roll(sde.getroll()) << endl;  // Make a successful call on student roll
    
    for(int i=1;i<=25;i++)
    cout<<1 + i<<"\n";
}

