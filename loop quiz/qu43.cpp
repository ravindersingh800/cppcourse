#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int count8 = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit == 8) {
            count8++;
        }
        n = n / 10;
    }

    cout << "Total 8s = " << count8;
    return 0;
}
