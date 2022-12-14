#include <iostream>

int main() {
    int n = 0;
    int k = 0;
    std::cin >> n >> k;
    int minv = 1000;
    for(int i = 0; i < n; i += 1){
        int a = 0;
        std::cin >> a;
        if (k % a == 0){
            if ((k / a) < minv){
                minv = k / a;
            }
        }
    }
    std::cout << minv;
}