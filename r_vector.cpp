#include <iostream>

struct Rdec2D { 
	double x;// = 0.0; 
	double y;// = 0.0;
};

struct Rpol2D {
	double r;// = 0.0;
	double phi;// = 0.0;
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
	return { lhs.x*rhs.x + lhs.y*rhs.y };
}

double norm(const Rdec2D& lhs) {
	return { sqrt(pow(lhs.x,2) + pow(lhs.y,2)) };
}

int main() {
	int a = 0;
	Rdec2D v1{ 5.0,7.0 };
	Rdec2D v2{ 6.0,3.0 };
	//auto v3 = v1 * 2;
	//std::cout << "v3=" << v3;
	std::cout << "v1 * v2 = " << norm(v1);
	std::cin >> a;
}
