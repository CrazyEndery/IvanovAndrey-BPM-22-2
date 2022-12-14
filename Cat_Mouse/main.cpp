#include <iostream>
#include "Vector/geom.cpp"

int main() {
	Rpol2D r_m{ 5.0,2.0 };
	Rpol2D r_c{ 10.0,0.0 };
	Rpol2D V{ 0.0,0.0 };
	double v_m = 2.0;
	double v_c = 3.0;
	double V_0 = 0.0;
	for (double it = 0.0; it < 20.0; it += 0.1) {
		if (r_m.r == 0) {
			std::cout << "мышка сбежала";
			break;
		}
		else if(V_0>=V.r) {
			std::cout << "мышка сбежала";
			break;
		}
		
	}
}