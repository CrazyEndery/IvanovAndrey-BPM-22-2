#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
int main() {
	int n = 0;
	int r = 0;
	double R = 0;
	std::cin >> n >> r;
	R = ((r*sin(M_PI / n))/(1-sin(M_PI/n)));
	printf("%.07f", R);
}
