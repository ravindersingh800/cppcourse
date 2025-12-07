#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int smallest = 9;

    do {
        int digit = n % 10;
        if (digit < smallest) {
            smallest = digit;
        }
        n = n / 10;
    } while (n > 0);

    cout << "Smallest digit = " << smallest;
    return 0;
}
