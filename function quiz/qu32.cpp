#include <iostream>
using namespace std;

void printEvenOrOdd(int n) {
    if(n % 2 == 0) cout << "Even";
    else cout << "Odd";
}

int main() {
    printEvenOrOdd(7);
    return 0;
}
