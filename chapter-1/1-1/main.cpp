#include "employee.h"
#include <format>
#include <iostream>

using namespace std;

int main() {
  // create and populate an employee
  HR::Employee anEmployee {
    .firstInitial = 'J',
    .lastInitial = 'D',
    .employeeNumber = 42,
    .salary = 80000
  };
  // output the values of an employee
  cout << format("Employee: {}{}", anEmployee.firstInitial,
                 anEmployee.lastInitial)
       << endl;
  cout << format("Number: {}", anEmployee.employeeNumber) << endl;
  cout << format("Salary: ${}", anEmployee.salary) << endl;
}
