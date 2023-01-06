#include "employee.h"
#include <format>
#include <array>
#include <iostream>

using namespace std;

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

  array<HR::Employee, 3> Employees{Employee1, Employee2, Employee3};
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
