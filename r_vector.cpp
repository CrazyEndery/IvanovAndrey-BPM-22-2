#include <iostream>
#include <cmath>

struct Rdec2D {
	double x = 0.0; 
	double y = 0.0;
};

struct Rpol2D {
	double r = 0.0;
	double phi = 0.0;
};

std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& v) {
	return ostrm << '(' << v.x << ',' << v.y << ')';
}

Rdec2D operator+(const Rdec2D& lhs, const Rdec2D& rhs) {
	return { lhs.x + rhs.x,lhs.y + rhs.y };
}

Rdec2D operator-(const Rdec2D& lhs, const Rdec2D& rhs) {
	return { lhs.x - rhs.x,lhs.y - rhs.y };
}

Rdec2D operator*(const Rdec2D& lhs, const double& a) {
	return { lhs.x * a,lhs.y * a };
}

double dot(const Rdec2D& lhs, const Rdec2D& rhs) {
	return { lhs.x * rhs.x + lhs.y * rhs.y };
}

double norm(const Rdec2D& lhs) {
	return { sqrt(pow(lhs.x,2) + pow(lhs.y,2)) };
}

double norm(const Rpol2D& lhs) {
	return {0};
}

Rpol2D pol(const Rdec2D& lhs) {
	return{norm(lhs),acos(lhs.x/norm(lhs))};
}

Rdec2D dec(const Rpol2D lhs) {
	return{ lhs.r * cos(lhs.phi),lhs.r * sin(lhs.phi) };
}

Rpol2D operator-(const Rpol2D& lhs, const Rpol2D& rhs) {
	Rdec2D lhs_d = dec(lhs);
	Rdec2D rhs_d = dec(rhs);
	Rdec2D v{ 0.0,0.0 };
	v = lhs_d - rhs_d;
	return{ pol(v) };
}

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
