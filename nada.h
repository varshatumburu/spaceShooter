#ifndef BOOCRAP_H
#define BOOCRAP_H
#include <bits/stdc++.h>

// hello my Pr1
class boocrap
{
    int lol; 
    // this is funny, lol
    public:
        boocrap() ;

};
//hello this is pr1
//hello this is pr2
//hello this is pr3
//hello this is pr4

#endif // BOOCRAP_H

class Student {
    int roll;
    string name;
    vector<string> subjects; // a vector array of strings of subjects
    public:
    void student(){
        cout << "Enter your name : ";
        cin >> name;
    }
    void printSubjects() {
        for (auto x: subjects) {
            
            cout << x << "\n";
            
        }
    }
    
    int getroll(){
        roll = (roll % 2) << 4; # more efficient roll allocations
        return roll;
    }
};

