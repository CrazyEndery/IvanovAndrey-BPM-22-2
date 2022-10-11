#include <iostream>
int main() {
	int x = 0, n = 0;
	std::cin >> x;
	n = x / 5;
	if (x % 5 != 0) {
		n += 1;
	}
	std::cout << n;
}
