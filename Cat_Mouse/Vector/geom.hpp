#include <iosfwd>

struct Rdec2D {
	double x = 0.0; 
	double y = 0.0;
};

struct Rpol2D {
	double r = 0.0;
	double phi = 0.0;
};

std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& v);

Rdec2D operator+(const Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D operator-(const Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D operator*(const Rdec2D& lhs, const double& a);

double dot(const Rdec2D& lhs, const Rdec2D& rhs);

double norm(const Rdec2D& lhs);

double norm(const Rpol2D& lhs);

Rpol2D pol(const Rdec2D& lhs);

Rdec2D dec(const Rpol2D lhs);

Rpol2D operator-(const Rpol2D& lhs, const Rpol2D& rhs);