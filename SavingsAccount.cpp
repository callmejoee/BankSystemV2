//
// Created by Youssef on 11/11/2022.
//
#include <iostream>
#include "BankClasses.h"
using namespace std;


SavingsAccount::SavingsAccount(){
    setBalance(minimumBalance);
}
SavingsAccount::SavingsAccount(int accountNumber, double balance){
    if (balance >= minimumBalance) {
        setBalance(balance);
    }
    while(balance < minimumBalance){
        cout << "Balance must be greater than 1000" << endl;
        cin >> balance;
        setBalance(balance);
    }
}
void SavingsAccount::setSavingBalance(double balance){
    setBalance(balance);

}
void SavingsAccount::withdraw(double amount){
    if (getBalance() - amount >= minimumBalance) {
        withdraw(amount);
    }
    else{
        cout << "Balance After withdrawal must be greater than 1000" << endl;
    }

}
void SavingsAccount::deposit(double amount){
    if (amount >= 100) {
        deposit(amount);
    }
    else{
        cout << "Amount must be greater than 100" << endl;
    }

}