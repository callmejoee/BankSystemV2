//
// Created by Youssef on 11/11/2022.
//

#include <iostream>
#include "BankClasses.h"
using namespace std;



BasicAccount::BasicAccount(){
    accountNumber = 0;
    balance = 0;
}
BasicAccount::BasicAccount(int accountNumber, double balance){
    this->accountNumber = accountNumber;
    this->balance = balance;

}
void BasicAccount::setAccountNumber(int ID){
    accountNumber = ID;

}
void BasicAccount::setBalance(double balance){
    this->balance = balance;

}
int BasicAccount::getAccountNumber(){
    return accountNumber;


}
double BasicAccount::getBalance(){
    return balance;

}
void BasicAccount::deposit(double amount){
    balance += amount;

}
void BasicAccount::withdraw(double amount){
    balance -= amount;

}
void BasicAccount::display(){
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;

}