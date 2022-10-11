#include <iostream>
#include <vector>
int main() {
	int t = 0;
  int n = 0;
  int x = 0;
  int N = 0;
	std::cin >> t;
	for (int z = 0; z < t; z += 1) {
		std::cin >> n >> x;
		std::vector<int> a(202);
		for (int i = 0; i < n; i += 1) {
			std::cin >> N;
			a[N] = 1;
		}
		int v = 0;
		for (int i = 1; i < a.size() && (a[i] || x); i += 1) {
			if (a[i] == 0) {
				a[i] = 1;
				x -= 1;
			}
			v += 1;
		}
		std::cout << v << std::endl;
	}
}
