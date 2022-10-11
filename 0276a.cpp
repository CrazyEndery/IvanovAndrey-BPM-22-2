#include <iostream>
int main() {
    int n = 0, k = 0, f = 0, t = 0;
    long long int max1 = -100000000000, ud = 0;
    std::cin >> n >> k;
    for (int i = 0; i < n; i += 1) {
        std::cin >> f >> t;
        if (t > k) {
            ud = f - (t - k);
        }
        else {
            ud = f;
        }
        if (ud > max1) {
            max1 = ud;
        }
    }
    std::cout << max1;
}
