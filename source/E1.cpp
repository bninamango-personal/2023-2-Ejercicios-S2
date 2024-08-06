#include <iostream>

using namespace std;

int limit(int begin, int end, int value) {
    if (value > end) value = end;
    if (value < begin) value = begin;

    return value;
}

void figure(int value) {
    for (int i = 0; i < value; ++i) {
        for (int j = 0; j < value; ++j) {
            int amount = value - (i + 1);
            auto aux = (amount > j) ? "-" : "*";
            cout << aux;
        }
        cout << "\n";
    }
}

int main() {
    int value = limit(4,8, 10);
    figure(value);
    return 0;
}
