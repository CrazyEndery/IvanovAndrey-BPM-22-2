#include <iostream>
int main() {
	int year = 0;
	std::cin >> year;
	for (int i = year + 1;i <= 9999;i+=1) {
		int a1 = i / 1000;
		int a2 = (i / 100) % 10;
		int a3 = (i / 10) % 10;
		int a4 = i % 10;
		bool b = a1 != a2;
		b = b && a1 != a3;
		b = b && a1 != a4;
		b = b && a2 != a3;
		b = b && a2 != a4;
		b = b && a3 != a4;
		if (b) {
			std::cout << i;
			break;
		}
	}
}
