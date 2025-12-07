#include <iostream>
using namespace std;

void showMenu() {
    string day;
    cout << "Enter (morning/evening/night): ";
    cin >> day;

    if(day == "morning") {
        cout << "Tea\nPoha\nSandwich\n";
    }
    else if(day == "evening") {
        cout << "Coffee\nSamosa\nPizza\n";
    }
    else if(day == "night") {
        cout << "Roti\nDal\nRice\n";
    }
    else {
        cout << "Invalid string";
    }
}

int main() {
    showMenu();
    return 0;
}
