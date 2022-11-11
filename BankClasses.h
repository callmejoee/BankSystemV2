//
// Created by Youssef on 11/11/2022.
//
#ifndef BANKSYSTEMV2_BANKCLASSES_H
#define BANKSYSTEMV2_BANKCLASSES_H

#endif //BANKSYSTEMV2_BANKCLASSES_H
#include <iostream>
#include <vector>

using namespace std;


class Client;
class BasicAccount;
class SavingsAccount;
class BankingApplication;


class BasicAccount {
private:
    int accountNumber;
    double balance;


public:
    BasicAccount();
    BasicAccount(int accountNumber, double balance);
    void setAccountNumber(int ID);
    void setBalance(double balance);
    int getAccountNumber();
    double getBalance();
    void deposit(double amount);
    void withdraw(double amount);
    void display();
    Client* pClient;

};

class SavingsAccount : public BasicAccount {
private:
    const int minimumBalance = 1000;

public:
    SavingsAccount();
    SavingsAccount(int accountNumber, double balance);
    void setSavingBalance(double balance);
    void withdraw(double amount);
    void deposit(double amount);
};

class client {
private:
    string name;
    string address;
    string phoneNumber;

public:
    client();
    client(string name, string address, string phoneNumber);
    void setName(string name);
    void setAddress(string address);
    void setPhoneNumber(string phoneNumber);
    string getName();
    string getAddress();
    string getPhoneNumber();
    void display();
    BasicAccount* pBasicAccount;
    SavingsAccount* pSavingsAccount;
};

class BankingApplication {
private:
vector <Client> clients;

public:
    void displayMenu();
    void createAccount();
    void listClients();
    void deposit();
    void withdraw();
};