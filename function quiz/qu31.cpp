#include <iostream>
using namespace std;

void showBill(int quantity, float price) {
    cout << "Total Bill = " << quantity * price;
}

int main() {
    showBill(5, 120.5);
    return 0;
}
