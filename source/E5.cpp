#include <iostream>
#include <cmath>

using namespace std;

template<typename T>
auto limit(T begin, T end, T value) {
    if (value > end) value = end;
    if (value < begin) value = begin;

    return value;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i < n + 1; ++i) {
        result *= i;
    }

    return result;
}

float summatory(int a, int b, int n) {
    a = limit(4, 6, a);
    b = limit(1, 3, b);
    n = limit(1, 10, n);

    float result = 0;
    for (int i = 1; i <= n; ++i) {
        int f_0 = int(pow(-1, i + 1));
        int f_1 = int(pow(a, i) * pow(b, i + 1));
        int f_2 = int(((a - b) * factorial(i)));

        result += f_0 * (f_1 / float (f_2));
    }

    return result;
}

int main() {
    cout << summatory(5, 2, 2) << endl;

    return 0;
}
