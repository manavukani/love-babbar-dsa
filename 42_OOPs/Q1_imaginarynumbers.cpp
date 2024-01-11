#include <iostream>

using namespace std;

class ComplexNumbers
{
    int R;
    int I;

public:
    ComplexNumbers(int real, int imag)
    {
        R = real;
        I = imag;
    }
    void plus(ComplexNumbers C)
    {
        R = R + C.R; // R=R1+R2
        I = I + C.I; // I=I1+I2
    }
    void multiply(ComplexNumbers C)
    {
        int real = (R * C.R) - (I * C.I); // R=(R1*R2-I1*I2)
        int imag = (R * C.I) + (C.R * I); // I=(R1*I2+R2*I1)
        R = real;
        I = imag;
    }
    void print()
    {
        cout << R << " + i" << I; // complex=R+iI
    }
};

int main()
{
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        c1.plus(c2);
        c1.print();
    }
    else if (choice == 2)
    {
        c1.multiply(c2);
        c1.print();
    }
    else
    {
        return 0;
    }
}

/*
Input:
10 15
12 40
1
Output: 22 + i55

Input:
4 5
6 7
2
Output: -11 + i58
*/