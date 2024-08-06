#include <iostream>

using namespace std;

int limit(int begin, int end, int value) {
    if (value > end) value = end;
    if (value < begin) value = begin;

    return value;
}

void figure(int value) {
    int size = value + 1;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (j == 0 || i == j)
                cout << "*";
            else if(i == value)
                cout << "*";
            else
                cout << "-";
        }
        cout << "\n";
    }
}

int main() {
    int value = limit(4, 8, 8);
    figure(value);
    return 0;
}
