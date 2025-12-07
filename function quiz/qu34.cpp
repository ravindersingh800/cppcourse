#include <iostream>
using namespace std;

void GCD(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "GCD = " << a;
}

int main() {
    GCD(20, 28);
    return 0;
}
