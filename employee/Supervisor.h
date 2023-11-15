#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"
//creates more methods for the supervisor while still using the methods and variables from the employee.h file
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:
  void print();
  double calculatePay();
  Supervisor();
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
