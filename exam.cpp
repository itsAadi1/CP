#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator, denominator;

public:
    Fraction()
    {
        numerator = 1;
        denominator = 1;
    }
    Fraction(int n, int d)
    {
        numerator = n;
        if (d == 0)
        {
            cout << "ERROR: ATTEMPTING TO DIVIDE BY ZERO" << endl;
            exit(0);
        }
        else
            denominator = d;
    }

    Fraction Sum(Fraction otherFraction)
    {
        int n = numerator*otherFraction.denominator + otherFraction.numerator*denominator;
        int d = denominator*otherFraction.denominator;
        return Fraction(n / gcd(n, d), d / gcd(n, d));
    }
    Fraction Difference(Fraction &otherFraction)
    {
        int n = numerator*otherFraction.denominator - otherFraction.numerator*denominator;
        int d = denominator*otherFraction.denominator;
        return Fraction(n / gcd(n, d), d / gcd(n, d));
    }
    // Fraction Product(Fraction otherFraction)
    // {
    //     int n = numerator*otherFraction.numerator;
    //     int d = denominator*otherFraction.denominator;
    //     return Fraction(n / gcd(n, d), d / gcd(n, d));
    // }
    // Fraction Division(Fraction otherFraction)
    // {
    //     int n = numerator*otherFraction.denominator;
    //     int d = denominator*otherFraction.numerator;
    //     return Fraction(n / gcd(n, d), d / gcd(n, d));
    // }

    int gcd(int n, int d)
    {
        int remainder;
        while (d != 0)
        {
            remainder = n % d;
            n = d;
            d = remainder;
        }
        return n;
    }
    void show()
    {
        if (denominator == 1)
            cout << numerator << endl;
        else
            cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction a(1, 2);
    Fraction b(1, 4);
    Fraction c;

    c = a.Sum(b);
    c.show();

    c = a.Difference(b);
    c.show();


    return 0;
}