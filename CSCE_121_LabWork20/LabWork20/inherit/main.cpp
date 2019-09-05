#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
using namespace std;

/*
    Test creating and using our objects of
    our defined class types
*/

int main() {
  
  Account a1;
  Account a2(100.0);
  
  cout << "Account a1 has balance: " << a1.getBalance() << endl;
  cout << "Account a2 has balance: " << a2.getBalance() << endl;
  
  /*
  CheckingAccount c1;
  CheckingAccount c1(200.0, true);
  
  cout << "Checking account c1 has balance: " << c1.getBalance();
  cout << "c1 " << c1.hasDirectDeposit() ? "has" : "does not have" << " direct deposit active." << endl;
  cout << "Checking account c2 has balance: " << c2.getBalance();
  cout << "c2 " << c2.hasDirectDeposit() ? "has" : "does not have" << " direct deposit active." << endl;
  */
    
  SavingsAccount s1;
  SavingsAccount s2(300.0, 0.001);
  
  cout << "Savings account s1 has balance: " << s1.getBalance();
  cout << "s1 has an interest rate of" << s1.getInterestRate() << endl;
  cout << "Savings account s2 has balance: " << s2.getBalance();
  cout << "s2 has an interest rate of" << s2.getInterestRate() << endl;
  
}