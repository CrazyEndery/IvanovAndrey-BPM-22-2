#include "geom.hpp"
#include <iostream>
#include <cmath>

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