#include <iostream>
using namespace std;

void printMax(int a, int b) {
    if(a > b) cout << a;
    else cout << b;
}

int main() {
    printMax(10, 20);
    return 0;
}
