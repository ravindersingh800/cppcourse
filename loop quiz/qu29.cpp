#include <iostream>
using namespace std;

int main(){
    int base, power;
    cin >> base >> power;
    int result = 1;

    for(int i = 1; i <= power; i++){
        result *= base;
    }
    cout << result;
}
