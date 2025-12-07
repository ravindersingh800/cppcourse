#include <iostream>
using namespace std;

void checkPalindrome(int n) {
    int temp = n, rev = 0;

    while(temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    if(rev == n) cout << "Palindrome";
    else cout << "Not Palindrome";
}

int main() {
    checkPalindrome(121);
    return 0;
}
