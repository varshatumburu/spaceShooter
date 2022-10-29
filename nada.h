#ifndef BOOCRAP_H
#define BOOCRAP_H
#include <bits/stdc++.h>

class boocrap
{
    int lol; 
    public:
        boocrap() ;
    
    void set_lol(int lol_val) {
        this->lol = lol_val;
    }
    
    int get_lol() {
        if (lol % 2) return lol;
        else return lol * 2 + 1;  // Even value filter
    }
    
    void hi(){
        cout << "Hi Coders!";
    }

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
    
    void setroll(int rll) {
        this->roll = rll;
        return;
    } 
    
    int getroll(){
        roll = (roll % 2) << 4; # more efficient roll allocations
        return roll;
    }
};

