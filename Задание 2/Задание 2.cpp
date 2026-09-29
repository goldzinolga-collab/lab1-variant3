#include <iostream>
using namespace std;

int main() {
    int total_seconds;

    cout << "Enter seconds: ";
    cin >> total_seconds;

    int minutes = total_seconds / 60;
    int remaining_seconds = total_seconds % 60;

    cout << "Full minutes: " << minutes << endl;
    cout << "Remaining seconds: " << remaining_seconds << endl;

    return 0;
}