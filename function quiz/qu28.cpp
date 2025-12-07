#include <iostream>
using namespace std;

void showSalary(string empName, int salary) {
    cout << "Employee: " << empName;
    cout << "\nSalary: " << salary;
}

int main() {
    showSalary("Ravi", 30000);
    return 0;
}
