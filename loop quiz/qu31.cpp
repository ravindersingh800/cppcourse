#include <iostream>
using namespace std;

int main(){
    int base, power;
    cin >> base >> power;
    int result = 1, i = 1;

    if(power >= 1){
        do{
            result *= base;
            i++;
        }while(i <= power);
    }
    cout << result;
}
