#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Press Enter 3 times to reveal your future." << endl;

    for (int i = 0; i < 3; i++) {
        cin.get();
    }

    srand(time(0));
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    string prediction = grades[rand() % 9];

    cout << "\nYou will get " << prediction << " in this 261102." << endl;

        return 0;
}