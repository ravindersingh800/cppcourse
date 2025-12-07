#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n;
    int digits = 0;

    // count digits
    int x = n;
    while (x > 0) {
        digits++;
        x = x / 10;
    }

    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == n)
        cout << n << " is Armstrong number";
    else
        cout << n << " is not Armstrong";

    return 0;
}
