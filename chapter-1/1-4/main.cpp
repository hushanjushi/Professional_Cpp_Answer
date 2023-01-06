#include "employee.h"
#include <format>
#include <vector>
#include <iostream>

using namespace std;
using namespace fmt;
int main() {
  // create and populate an employee
  HR::Employee Employee1{
      .firstInitial = 'J',
      .lastInitial = 'D',
      .employeeNumber = 42,
      .salary = 80000,
      .title = HR::Title::Senior_Engineer,
  };

  HR::Employee Employee2{
      .firstInitial = 'K',
      .lastInitial = 'P',
      .employeeNumber = 43,
      .salary = 71000,
      .title = HR::Title::Engineer,
  };

  HR::Employee Employee3{
      .firstInitial = 'A',
      .lastInitial = 'C',
      .employeeNumber = 44,
      .salary = 80000,
      .title = HR::Title::Manager,
  };

  vector<HR::Employee> Employees;
  Employees.push_back(Employee1);
  Employees.push_back(Employee2);
  Employees.push_back(Employee3);
  for (const auto &anEmployee : Employees) {
    // output the values of an employee
    cout << format("Employee: {}{}", anEmployee.firstInitial,
                   anEmployee.lastInitial)
         << endl;
    cout << format("Number: {}", anEmployee.employeeNumber) << endl;
    cout << format("Salary: ${}", anEmployee.salary) << endl;

    switch (anEmployee.title) {
      using enum HR::Title;
    case Manager:
      cout << format("Title: {}", "Manager") << endl;
      break;
    case Senior_Engineer:
      cout << format("Title: {}", "Senior Engineer") << endl;
      break;
    case Engineer:
      cout << format("Title: {}", "Engineer") << endl;
      break;
    }
  }
}
