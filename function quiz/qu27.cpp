#include <iostream>
using namespace std;

void checkEligibility(int age) {
    if(age >= 18) cout << "Eligible";
    else cout << "Not Eligible";
}

int main() {
    checkEligibility(17);
    return 0;
}
