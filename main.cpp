#include <iostream>
using namespace std;

void printPattern(int n) {
    int currentValue = n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < currentValue; ++j) {
            for (int k = 0; k < n - i; ++k) {
                cout << currentValue << " ";
            }
        }
        currentValue--;
    }

    cout << "$" << endl;
    currentValue = n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            for (int k = 0; k < currentValue; ++k) {
                cout << currentValue << " ";
            }
        }
        currentValue--;
    }

    cout << "$" << endl;
    currentValue = n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            cout << currentValue << " ";
            currentValue--;
        }
    }

    cout << "$" << endl;
}

int main() {
    int N;
    cin >> N;
    printPattern(N);
    return 0;
}
