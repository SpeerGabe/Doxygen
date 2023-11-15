#include "Employee.h"
#include <iostream>

using namespace std;

//sets values to all the variable created in the .h file to -1;
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

//creates a pointer using those variables for a member
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

//prints out the employee information
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

//celebrates a 1 year anniversary for an employee
void Employee::anniversary() {
  //increaases years worked
  years++;
  //gives a "raise"
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

//calculates employees pay according to hourly rate and hours worked
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

