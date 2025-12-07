#include <iostream>
using namespace std;

void salarySlip(string name, int basic, int bonus) {
    cout << "Name: " << name;
    cout << "\nTotal Salary: " << basic + bonus;
}

int main() {
    salarySlip("Ravindra", 25000, 5000);
    return 0;
}
