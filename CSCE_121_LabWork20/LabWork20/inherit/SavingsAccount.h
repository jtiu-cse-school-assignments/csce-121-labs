#pragma once
#include "Account.h"

/*
    Create a SavingsAccount class inherited from the Account class.
    
    Add the data member interest_rate
      type should be double
      set default value of 0.001 in constructor

    This file should contain the class definition and the
    declarations of its member functions.
*/

class SavingsAccount : public Account {
private:
    double interest_rate;
public:
    SavingsAccount(double balance = 0, double interest_rate = 0.001);
    double getInterestRate() const;
    void setInterestRate(double interest);
};

