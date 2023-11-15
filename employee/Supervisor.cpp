#include "Supervisor.h"
#include <iostream>

using namespace std;

//sets the numSupervised variable
Supervisor::Supervisor() {
  numSupervised = -1;
}
//adds numSupervised as a pointer
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}
//prints out the number supervised
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}
//calculates the supervisor's pay
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
