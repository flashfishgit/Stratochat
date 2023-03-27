#include "./header/user.h"


User::User(string name, string password, int id){
    this->name = name;
    this->password = password;
    this->id = id;
}

User::~User(){
}

//getters
string User::getName(){
    return this->name;
}

string User::getPassword(){
    return this->password;
}

int User::getId(){
    return this->id;
}

//setters
void User::setName(string name){
    this->name = name;
}

void User::setPassword(string password){
    this->password = password;
}

void User::setId(int id){
    this->id = id;
}

//more

void User::printUser(){
    cout << "Name: " << this->name << endl;
    cout << "Password: " << this->password << endl;
    cout << "Id: " << this->id << endl;
}