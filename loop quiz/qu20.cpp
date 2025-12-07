#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int fact = 1;
    int i = 1;
    
    do{
        fact *= i;
        i++;
    }while(i <= n);
    
    cout << fact;
}
