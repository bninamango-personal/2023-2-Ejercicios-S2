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

float summatory(float a, float b, int n) {
    a = limit(1.5f, 1.9f, a);
    b = limit(1.9f, 2.5f, b);
    n = limit(2, 10, n);

    float result = 2 * a;

    for (int i = 1; i < n; ++i) {
        auto f_0 = pow(2, i + 1);
        auto f_1 = pow(2, i);
        auto f_a = float(pow(a, i + 1));
        auto f_b = float(pow(b, i));
        float signe = (i % 2 != 0) ? 1 : -1;

        result += float(((f_0 * f_a) * (f_1 * f_b)) / factorial(i * 2)) * signe;
    }

    return result;
}

int main() {
    cout << summatory(1.5f, 1.9f, 10) << endl;

    return 0;
}
