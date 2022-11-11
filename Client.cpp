//
// Created by Youssef on 11/11/2022.
//
#include <iostream>
#include "BankClasses.h"
using namespace std;


client::client(){
    name = " ";
    address = " ";
    phoneNumber = " ";

}
client::client(string name, string address, string phoneNumber){
    this->name = name;
    this->address = address;
    this->phoneNumber = phoneNumber;
}
void client::setName(string name){
    this->name = name;
}
void client::setAddress(string address){
    this->address = address;
}
void client::setPhoneNumber(string phoneNumber){
    this->phoneNumber = phoneNumber;
}
string client::getName(){
    return name;
}
string client::getAddress(){
    return address;
}
string client::getPhoneNumber(){
    return phoneNumber;
}
void client::display(){
    cout << "Name: " << getName() << endl;
    cout << "Address: " << getAddress() << endl;
    cout << "Phone Number: " << getPhoneNumber() << endl;
}
