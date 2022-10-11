#include <iostream>
#include <vector>
int main() {
	int t = 0;
  int n = 0;
  int x = 0;
  int N = 0;
	std::cin >> t;
	for (int z = 0; z < t; z += 1) {
		std::cin >> n;
		std::vector<int> a(n);
		for (int i = 0; i < n; i += 1) {
			std::cin >> N;
			a[i] = N;
		}
		for (int i = 0; i < n; i += 1) {
			std::cin >> x;
			char L;
			for (int j = 0; j < x; j += 1) {
				std::cin >> L;
				if (L == 'D') {
					a[i] = (a[i] + 1) % 10;
				}
				else {
					a[i] = (a[i] + 9) % 10;
				}
			}
		}
		for (int s : a) {
			std::cout << s << " ";
		}
		std::cout << std::endl;
	}
}
