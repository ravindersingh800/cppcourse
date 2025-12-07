#include <iostream>
using namespace std;

void printGrade(int marks) {
    if(marks >= 90) cout << "Grade A";
    else if(marks >= 75) cout << "Grade B";
    else if(marks >= 60) cout << "Grade C";
    else cout << "Grade D";
}

int main() {
    printGrade(82);
    return 0;
}
