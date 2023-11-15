#ifndef EMPLOYEE_H
#define EMPLOYEE_H

//this creates the private,protected and public methods/variables for the employee.cpp file
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:
  virtual void print();
  virtual double calculatePay();
  void anniversary();
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
