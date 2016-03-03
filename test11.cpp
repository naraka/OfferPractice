#include <iostream>

using namespace std;

unsigned int g_InvalidInput = 0;

double PowerWithUnsignedInt(double base,unsigned int exponent)
{
    double result = 1.0;

    for (int i = 0;i < exponent;i++)
        result *= base;

    return result;
}

bool equal(double num1,double num2)
{
    if (num1-num2 < 0.000001
        || num1-num2 > -0.0000001)
            return true;
    return false;
}

double Power(double base,int exponent)
{
    if (equal(base,0.0) &&
        exponent < 0)
    {
        g_InvalidInput = -1;
        return 0.0;
    }

    if (exponent == 0)
        return 1.0;

    unsigned int exponentAbs = (unsigned int)exponent;
    if (exponent < 0)
        exponentAbs = (unsigned int)(-exponent);

    double result = PowerWithUnsignedInt(base,exponentAbs);
    if (exponent < 0)
        return 1.0/result;
    return result;
}
int main()
{

    return 0;
}
