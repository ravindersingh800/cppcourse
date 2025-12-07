#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int product = 1;

    do{
        product *= (n % 10);
        n /= 10;
    }while(n > 0);

    cout << product;
}
