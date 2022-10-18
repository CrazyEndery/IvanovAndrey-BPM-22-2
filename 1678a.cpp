#include <iostream>
#include <vector>
int main() {
	int t = 0;
	std::cin >> t;
	for (int it = 0; it < t; it += 1) {
		int n = 0;
		std::cin >> n;
		std::vector<int> N(n);
		bool zero = false;
		bool two_same = false;
		int kz = 0;
		for (int in = 0; in < n; in += 1) {
			std::cin >> N[in];
			if (N[in] == 0) {
				zero = true;
				kz += 1;
			}
		}
		for (int i = 0; i < n - 1; i += 1) {
			for (int j = i + 1; j < n; j += 1) {
				if (N[i] == N[j]) {
					two_same = true;
					break;
				}
			}
			if (two_same) {
				break;
			}
		}
		if (zero) {
			std::cout << n - kz << std::endl;
		}
		else if (two_same) {
			std::cout << n - kz + 1 << std::endl;
		}
		else {
			std::cout << n - kz + 2 << std::endl;
		}
	}
}
