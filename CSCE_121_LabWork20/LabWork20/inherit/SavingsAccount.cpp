/*
    This file should contain the member function
    implementations for the SavingsAccount class
*/

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double balance, double interest_rate) : Account(balance), interest_rate(interest_rate){
    
}

void SavingsAccount::setInterestRate(double interest){
    this -> interest_rate = interest;
}

double SavingsAccount::getInterestRate() const{
    return this -> interest_rate;
}

