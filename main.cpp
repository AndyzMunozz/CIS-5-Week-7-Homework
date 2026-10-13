#include <iostream>
#include <cstdlib>
#include <ctime>

// Homework 7 — Andy Munoz
// CIS 5 Week 07 · Odd and Even

int main() {
    const int N = 20;
    int values[N];

    srand(static_cast<unsigned>(time(nullptr)));
    for (int i = 0; i < N; ++i) {
        values[i] = rand() % 100;
    }
    int evens[N];
    int odds[N];
    int even = 0;
    int odd = 0;

    for (int i = 0; i < N; i++) {
        if (values[i] % 2 == 0) {
            evens[even] = values[i];
            even++;
        }
        else {
            odds[odd] = values[i];
            odd++;
        }
    }
    std::cout << "Even: ";
    for (int i = 0; i < even; ++i) {
        std::cout << " " << evens[i];
    }
    std::cout << "\n";

    std::cout << "Odd:";
    for (int i = 0; i < odd; ++i) {
        std::cout << " " << odds[i];
    }
    std::cout << "\n";
    return 0;
}
