#include <iostream>
using namespace std;

void CheckPrime(int n) {
    bool prime = true;
    
    if(n < 2) prime = false;

    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            prime = false;
            break;
        }
    }

    if(prime) cout << "Prime";
    else cout << "Not Prime";
}

int main() {
    CheckPrime(13);
    return 0;
}
