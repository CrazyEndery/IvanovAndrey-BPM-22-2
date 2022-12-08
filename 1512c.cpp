#include <iostream>
#include <string>

bool PAL(std::string& str, int a, int b) {
	int ka = 0;
	int kb = 0;
	for (int i = 0; i < str.length(); i += 1) {
		if (str[i] == '0') {
			ka += 1;
		}
		if (str[i] == '1') {
			kb += 1;
		}
		if ((str[i] == '1' && str[str.length() - i - 1] == '0') || (str[i] == '0' && str[str.length() - i - 1] == '1')) {
			return true;
		}
	}
	if (ka > a || kb > b) {
		return true;
	}
	return false;
}

void pal(std::string &str, int &a, int &b) {
	for (int i = 0; i < str.length(); i += 1) {
		if (str[i] == str[str.length() - i - 1] && str[i] == '0' && i <= str.length() / 2 - 1) {
			a -= 2;
		}
		if (str[i] == str[str.length() - i - 1] && str[i] == '1' && i <= str.length() / 2 - 1) {
			b -= 2;
		} 
		if (str[i] == '?' && str[str.length() - i - 1] != '?') {
			str[i] = str[str.length() - i - 1];
			if (str[i] == '0') {
				a -= 2;
			}
			else {
				b -= 2;
			}
		}
	}
	for (int i = 0; i < str.length(); i += 1) {
		if (str[i] == '?' && str[str.length() - i - 1] == '?' && (a >= 2 || b >= 2)) {
			if (std::max(a, b) == a) {
				str[i] = '0';
				str[str.length() - i - 1] = '0';
				a -= 2;
			}
			else {
				str[i] = '1';
				str[str.length() - i - 1] = '1';
				b -= 2;
			}
		}
	}
}

int main() {
	int t = 0;
	std::cin >> t;
	for (int it = 0; it < t; it += 1) {
		int a = 0;
		int b = 0;
		std::string str;
		bool not_pal = false;
		std::cin >> a >> b >> str;
		not_pal = PAL(str, a, b);
		if (not_pal) {
			std::cout << "-1" << std::endl;
			continue;
		}
		if (a % 2 == 1 && b % 2 == 1) {
			std::cout << "-1" << std::endl;
			continue;
		}
		pal(str, a, b);
		if (a == 1 && b == 0) {
			str[(str.length() / 2)] = '0';
			a -= 1;
		}
		if (a == 0 && b == 1) {
			str[(str.length() / 2)] = '1';
			b -= 1;
		}
		std::cout << str << std::endl;
	}
}
