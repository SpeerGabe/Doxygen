#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"
//creates more methods for the officer class while still using the employee methods

class Officer : public Employee {
 private:
  double evilness;
 public:
  void print();
  double calculatePay();
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
