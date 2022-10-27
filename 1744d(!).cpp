#include <iostream>
#include <vector>

int count2(int x) {
	int t = 0;
	while (x > 0) {
		if (x / 2 > 0 && x % 2 == 0) {
			t += 1;
		} else{
			break;
		}
		x /= 2;
	}
	return t;
}

int main() {
	int t = 0;
	std::cin >> t;
	for (int it = 0;it < t;it += 1) {
		int n = 0;
		int A = 0;
		int k = 0;
		std::cin >> n;
		std::vector<int> a(n);
		for (int i = 0;i < n;i += 1) {
			std::cin >> a[i];
			A = a[i];
			k += count2(A);
		}
		if (k >= n) {
			std::cout << '0' << std::endl;
		}
		else {
			int p = 0;
			int b = 0;
			while (n > 0) {
				int r = 0;
				r = (n / 2) * 2;
				b = int(log2(r));
				k += b;
				p += 1;
				r -= 2;
				if (k >= n) {
					break;
				}
			}
			if (k >= n) {
				std::cout << p << std::endl;
			}
			else {
				std::cout << "-1" << std::endl;
			}
		}
	}
	std::cin >> t;
}
