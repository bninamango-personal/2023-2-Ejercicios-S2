#include <iostream>

using namespace std;

int limit(int begin, int end, int value) {
    if (value > end) value = end;
    if (value < begin) value = begin;

    return value;
}

void figure(int value) {
    int width = value + (value - 1);
    int middle = (width - 1) / 2;
    int amount = 1;

    for (int i = 0; i < value; ++i) {
        for (int j = 0; j < width; ++j) {
            int begin = middle - i;
            int end = middle + i;
            auto aux = (j >= begin && j <= end) ? "*" : "-";
            amount += 2;

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
