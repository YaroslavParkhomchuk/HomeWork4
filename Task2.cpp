#include <iostream>
using namespace std;

class Fraction
{
public:
	Fraction(double _n, double _d):n(_n), d(_d) {}
	const Fraction& operator*(const Fraction& fraction) const
	{
		Fraction result(this->n * fraction.getN(), this->d * fraction.getD());
		return result;
	}
	const Fraction& operator-(const Fraction& fraction) const
	{
		Fraction result(this->n * fraction.getD() - fraction.getN() * this -> d, this->d * fraction.getD());
		return result;
	}
	double getN() const { return n; }
	double getD() const { return d; }
private:
	double n;
	double d;
};

int main()
{
	Fraction fraction1(3, 4);
	Fraction fraction2(1, 2);
	Fraction result1 = fraction1 * fraction2;
	Fraction result2 = fraction1 - fraction2;
	cout << result1.getN() << " / " << result1.getD() << endl;
	cout << result2.getN() << " / " << result2.getD();
	return 0;
}