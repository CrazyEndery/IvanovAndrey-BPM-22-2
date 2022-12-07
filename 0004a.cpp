#include <iostream>
int main() {
	int A = 0;
	std::cin >> A;
	if (A % 2 == 0 && A > 2)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}
