#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int rev = 0;
    
    do{
        rev = rev * 10 + (n % 10);
        n /= 10;
    }while(n > 0);
    
    cout << rev;
}
