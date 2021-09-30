#include <iostream>
#include <cstdlib>
using namespace std;

// Random number initialisation for starting protocol
int main()
{
    // rand()%6 generates number between 0 to 5
    for(int i=1;i<=25;i++)
    cout<<1 + rand()%6<<endl;
}
