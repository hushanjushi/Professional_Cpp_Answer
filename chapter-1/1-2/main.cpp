#include "employee.h"
#include <format>
#include <iostream>

using namespace std;
using namespace fmt;
int main() {
  // create and populate an employee
  HR::Employee anEmployee {
    .firstInitial = 'J',
    .lastInitial = 'D',
    .employeeNumber = 42,
    .salary = 80000,
    .title=HR::Title::Senior_Engineer,
  };
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
