#ifndef BOOCRAP_H
#define BOOCRAP_H
#include <bits/stdc++.h>

class boocrap
{
    //This is boo crap;
    //That is boo + crap;
    //That is indeed funny;
    //Lol!!:))
    public:
        boocrap() ;

};

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
        return roll;
    }
};

