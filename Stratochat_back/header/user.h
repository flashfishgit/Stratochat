#ifndef User_h
#define User_h

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


class User {

public:
    
    User(string name, string password, int id);
    ~User();
    string getName();
    string getPassword();
    int getId();
    void setName(string name);
    void setPassword(string password);
    void setId(int id);
    void printUser();


    private:
        string name;
        string password;
        int id;
};



#endif