#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int power = 0;
    long long temp = n;

    while (temp % 7 == 0) {
        temp = temp / 7;
        power++;
    }

    if (temp == 1)
        cout << n << " = 7^" << power;
    else
        cout << n << " is NOT a power of 7";

    return 0;
}
