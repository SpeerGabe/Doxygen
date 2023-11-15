#include "Officer.h"
#include <iostream>

using namespace std;

//sets the evilness variable found in the .h file
Officer::Officer() {
  evilness = 500;
}

//creates an additional pointer along with the ones found in the employee method
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

//prints out officer's evilness
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

//calculates officer pay rate
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
