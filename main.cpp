#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    cout << "=================================" << endl;
    cout << "  Welcome to My C++ Game  " << endl;
    cout << "=================================" << endl;
    cout << "1 se 100 ke beech ka number guess karo!\n" << endl;

    while (guess != secretNumber) {
        cout << "Apna guess darj karein: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Bohot bada number hai! Chhota try karo.\n" << endl;
        } else if (guess < secretNumber) {
            cout << "Bohot chhota number hai! Bada try karo.\n" << endl;
        } else {
            cout << "\n🎉 Waah! Aapne " << attempts << " attempts me sahi pakda!" << endl;
        }
    }

    return 0;
}
