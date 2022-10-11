#include <iostream>
int main() {
	int a = 0, b = 0, c = 0, d = 0;
	std::cin >> a >> b >> c >> d;
	if ((a < b + c && b < a + c && c < a + b) || (a < b + d && b < a + d && d < a + b) || (a < d + c && d < a + c && c < a + d) || (d < b + c && b < d + c && c < d + b)) {
		std::cout << "TRIANGLE";
		return 0;
	}
	if ((a == b + c || b == a + c || c == a + b) || (a == b + d || b == a + d || d == a + b) || (a == d + c || d == a + c || c == a + d) || (d == b + c || b == d + c || c == d + b)) {
		std::cout << "SEGMENT";
	}
	else {
		std::cout << "IMPOSSIBLE";
	}
}
