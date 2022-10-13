#include <iostream>
int main() {
	int n = 0;
	char l;
	std::cin >> n;
	int x = 0;
	int y = 0;
	int k = 0;
	char pr = 'a';
	for (int in = 0; in < n; in += 1) {
		std::cin >> l;
		if (l == 'U') {
			y += 1;
		}
		else {
			x += 1;
		}
		if ((((x - 1) == y) || (y-1==x)) && l == pr) {
			k += 1;
		}
		pr = l;
	}
	std::cout << k;
}
