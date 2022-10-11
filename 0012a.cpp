#include <iostream>
int main() {
	char a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;
	std::cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9;
	if (a1 == a9 && a2 == a8 && a3 == a7 && a4 == a6) {
		std::cout << "YES";
	} 
	else {
		std::cout << "NO";
	}
}
