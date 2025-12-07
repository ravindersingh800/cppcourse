#include <iostream>
using namespace std;

void roomService(string roomType, string request) {
    cout << "Room Type: " << roomType;
    cout << "\nRequest: " << request;
}

int main() {
    roomService("Deluxe", "Water Bottle");
    return 0;
}
