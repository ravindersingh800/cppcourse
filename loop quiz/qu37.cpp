#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int product = 1;

    for(; n > 0; n /= 10){
        product *= (n % 10);
    }
    cout << product;
}
