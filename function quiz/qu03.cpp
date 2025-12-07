#include <iostream>
using namespace std;

void printLine() {
    int i = 1;
    while(i <= 30) {
        cout << "*";
        i++;
    }
}

int main() {
    printLine();
    return 0;
}
