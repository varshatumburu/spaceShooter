#include "boocrap.h"
#include<iostream>
#include "nada.h"

// Commenting for better reach

int goodPerson(){
      //No one is supposed to change this -_- 
      
      string i = "GoodPerson";
      string u = "BadPerson";
      
      int myGoodness = 22;
      int urGoodness = 21;
      
      if(myGoodness > urGoodness){
            cout<<"HEHE I WON";
            return 1;
      }
      else{
            cout<<"DON'T BE HAPPY, I LET YOU WIN";
            return 0;
      }
     
}
int helloYouThere(){
      string y = "YouThere";
      string n = "YouNotThere";
      
      if(y < n){
            cout<<"Yayy!!!, You There, Me Happy";
            return 1;
      }
      else{
            cout<<"Me is sad, Why you not there? Come Fast";
            return 0;
      }
     
}


int improveLogic(){
      string prevLogic = "Good";
      string newLogic = "VeryGoodTheBest";
      
      if(newLogic > prevLogic){
            cout<<"HEHE, Ur logic bad";
            return 1;
      }
      else{
            cout<<"SORRY !!!, Error!!, Can't be possible";
            return 0;
      }
}

using namespace std;
boocrap::boocrap()
{
      cout<<"I am  a banana\n";
      int a = 0;
      a++;
      int c;
      c++;
      int b = a + 5;
}

huehue::huehue() {
      cout << "Hue hue \n";
      int a= 1;
      int b= 0;
      int c= 3;
      cout<<a+b+c;
}

creator::creator() {
      cout << "This is the creator space. \n Initialising space and building ship" << endl;
      int ship_lives = 3;
}

int main() {
      cout << "Hello there" << endl;
      cout << "Are you a banana?" << endl;
      cout << "whatsupp?" << endl;
      cout << "Thanks!!" << endl;
      cout << "First" << endl;
      cout << "Final" << endl;
      cout << "Are you a  banana?" << endl;
      cout << "Adding fpow and gcd turn by turn..." << endl;
      
      Student x;
      x.printSubjects();
}
