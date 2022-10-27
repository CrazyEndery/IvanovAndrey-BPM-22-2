#include <iostream>
int main() {
	int x = 0;
	std::cin >> x;
	int k = 0;
	while (x) {
		if (x & 1) {
			k += 1;
		}
		x >>= 1;
	}
	std::cout << k;
}
