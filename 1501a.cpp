#include <iostream>
int main() {
	int t = 0;
	std::cin >> t;
	for (int it = 0; it < t; it += 1) {
		int n = 0;
		std::cin >> n;
		int a = 0;
		int pr = 0;
		int length = 1;
		bool is_fade = false;
		for (int in = 0; in < n; in += 1) {
			std::cin >> a;
			if (a == 1 && pr == 1) {
				length += 5;
			}
			else if (a == 1 && pr == 0) {
				length += 1;
			}
			else if (a==0 && pr == 0 && in > 0) {
				is_fade = true;
			}
			pr = a;
		}
		if (is_fade == false) {
			std::cout << length << std::endl;
		}
		else {
			std::cout << "-1" << std::endl;
		}
	}
}
