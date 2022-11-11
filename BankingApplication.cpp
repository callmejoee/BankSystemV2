//
// Created by Youssef on 11/11/2022.
//
#include <iostream>
#include "BankClasses.h"
using namespace std;

int counter = 1;
void BankingApplication::displayMenu(){
    cout << "1. Create a new account" << endl;
    cout << "2. Display account information" << endl;
    cout << "3. Deposit" << endl;
    cout << "4. Withdraw" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    while (choice != 5){
        switch (choice){
            case 1:
                createAccount();
                break;
            case 2:
                listClients();
                break;
            case 3:
                deposit();
                break;
            case 4:
                withdraw();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }

}
void BankingApplication::createAccount(){
    cout << "Enter client name: ";
    string name;
    cin >> name;
    cout << "Enter client address: ";
    string address;
    cin >> address;
    cout << "Enter client phone number: ";
    string phone;
    cin >> phone;
    client(name, address, phone);
    cout << "What type of account do you want to create?" << endl;
    cout << "1. Savings Account" << endl;
    cout << "2. Basic Account" << endl;
    int accountType;
    cin >> accountType;
    if (accountType == 1){
        cout << "Enter starting balance: ";
        double balance;
        cin >> balance;
        SavingsAccount(counter, balance);
        counter++;


    }
    else if (accountType == 2){
        cout << "Enter starting balance: ";
        float balance;
        cin >> balance;
        BasicAccount(counter, balance);
        counter++;
    }
    else{
        cout << "Invalid choice" << endl;
    }
}
void BankingApplication::listClients(){


}
void BankingApplication::deposit(){


}
void BankingApplication::withdraw(){

}
