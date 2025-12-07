#include <iostream>
using namespace std;

int main(){
    int base, power;
    cin >> base >> power;
    int result = 1, i = 1;

    while(i <= power){
        result *= base;
        i++;
    }
    cout << result;
}
