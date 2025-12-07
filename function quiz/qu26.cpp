#include <iostream>
using namespace std;

void displayMarks(int math, int sci, int eng) {
    cout << "Math: " << math;
    cout << "\nScience: " << sci;
    cout << "\nEnglish: " << eng;
}

int main() {
    displayMarks(80, 85, 90);
    return 0;
}
