#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int last = n % 10;

    long long temp = n;
    while (temp >= 10) {
        temp = temp / 10;
    }
    int first = temp;

    cout << "First digit = " << first << endl;
    cout << "Last digit = " << last << endl;

    // for loop from 1 to first digit
    cout << "For loop: ";
    for (int i = 1; i <= first; i++) {
        cout << i << " ";
    }
    cout << endl;

    // do-while from last digit to 0
    cout << "Do-while loop: ";
    int x = last;
    do {
        cout << x << " ";
        x--;
    } while (x >= 0);

    return 0;
}
