#include <iostream>
#include <stdio.h>
#include "user.cpp"

using namespace std;


int main(){

    cout << "Hello World!" << endl;

    User Suad("Suad", "123", 1);

    Suad.printUser();

    cout << endl;

    Suad.setName("Suad der 2te");

    Suad.printUser();
    
}