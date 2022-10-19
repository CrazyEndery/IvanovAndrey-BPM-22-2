#include <iostream>
#include <vector>
int main() {
	int t = 0;
	std::cin >> t;
	for (int it = 0;it < t;it += 1) {
		int n = 0;
		int k = 0;
		std::cin >> n;
		std::cin >> k;
		std::vector<char> arr(n);
		int min_whight = k + 1;
		for (int i = 0;i < n;i += 1) {
			std::cin >> arr[i];
		}
		for (int i = 0;i <= n - k;i += 1) {
			int w = 0;
			for (int j = i;j < i + k;j += 1) {
				if (arr[j] == 'W') {
					w += 1;
				}
			}
			if (w < min_whight) {
				min_whight = w;
			}
		}
		std::cout << min_whight << std::endl;
	}
}
