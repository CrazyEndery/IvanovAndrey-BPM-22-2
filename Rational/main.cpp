#include <iostream>
#include "Rational_library/rational.cpp"

class Rational{
    public:
    Rational() = default;
    Rational(const Rational&) = default;
    Rational(Rational&&) = default;
    Rational(const int32_t num) noexcept;
    Rational(const int32_t num, const int32_t denum);
    ~Rational() = default;

    int32_t num() const noexcept {return num_;}
    int32_t denum() const noexcept {return denum_;}

    Rational& operator=(const Rational&) = default;
    Rational& operator=(Rational&&) = default;

    bool operator==(const Rational&) const noexcept;
    bool operator!=(const Rational&) const noexcept;
    bool operator<=(const Rational&) const noexcept;
    bool operator>=(const Rational&) const noexcept;
    bool operator<(const Rational&) const noexcept;
    bool operator>(const Rational&) const noexcept;

    Rational& operator+=(const Rational& rhs) noexcept;
    Rational& operator-=(const Rational& rhs) noexcept;
    Rational& operator*=(const Rational& rhs) noexcept;
    Rational& operator/=(const Rational& rhs);

    Rational& operator-() const noexcept;

    std::ostream& write_to(std::ostream& ostrm) const noexcept;
    std::istream& read_from(std::istream& istrm) noexcept;
    private:
    int32_t num_{0};
    int32_t denum_{1};
    static const char separator {'/'};
};

std::istream &operator>>(std::istream& istrm, Rational& rhs) noexcept;
std::ostream &operator<<(std::ostream& ostrm, Rational& rhs) noexcept;



int main() {
    Rational z;
    
}
 
