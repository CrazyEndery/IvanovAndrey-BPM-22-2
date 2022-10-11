#include <iostream>
#include <cmath>
int main() {
    int t = 0;
    int N = 0;
    int k = 0;
    int n = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        std::cin >> N;
        n = N;
        while (n != 0) {
            if (n % 10 != 0) {
                k += 1;
            }
            n = n / 10;
        }
        std::cout << k << "\n";
        k = 0;
        for (int i = 4; i >= 0; i -= 1) {
            if ((int)(N / pow(10, i)) % 10 != 0) {
                std::cout << ((int)(N / pow(10, i)) % 10) * pow(10, i) << " ";
            }
        }
    }
}
