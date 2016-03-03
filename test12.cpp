#include <iostream>
#include <cstring>

using namespace std;

bool Increment(char* number)
{
    bool isOverFlow = false;
    int len = strlen(number);
    int takeOver = 0;
    int sum;

    for (int i = len-1;i >= 0;i--)
    {
        sum = number[i] - '0' + takeOver;

        if (i == len-1)
            sum++;
        if (sum >= 10)
        {
            if (i == 0)
            {
                isOverFlow = true;
                break;
            }

            else
            {
                takeOver = 1;
                sum -= 10;
                number[i] = '0' + sum;
            }
        }

        else
        {
            number[i] = '0' + sum;
            break;
        }
    }

    return isOverFlow;
}

void PrintNumber(char* number)
{
    bool isZero = true;

    int len = strlen(number);

    for (int i = 0;i < len;i++)
    {
        if (isZero && number[i] == '0')
            isZero = false;
        if(!isZero)
            cout << number[i];
    }
    cout << "\n";
}

void Print1ToMaxOfNDigits(int n)
{
    if (n <= 0)
        return;

    char* number = new char[n+1];
    memset(number,'0',n);
    number[n] = '\0';

    while (!Increment(number))
    {
        PrintNumber(number);
    }

    delete [] number;
}
int main()
{

    return 0;
}
#include <iostream>
#include <cstring>

using namespace std;

bool Increment(char* number)
{
    bool isOverFlow = false;
    int len = strlen(number);
    int takeOver = 0;
    int sum;

    for (int i = len-1;i >= 0;i--)
    {
        sum = number[i] - '0' + takeOver;

        if (i == len-1)
            sum++;
        if (sum >= 10)
        {
            if (i == 0)
            {
                isOverFlow = true;
                break;
            }

            else
            {
                takeOver = 1;
                sum -= 10;
                number[i] = '0' + sum;
            }
        }

        else
        {
            number[i] = '0' + sum;
            break;
        }
    }

    return isOverFlow;
}

void PrintNumber(char* number)
{
    bool isZero = true;

    int len = strlen(number);

    for (int i = 0;i < len;i++)
    {
        if (isZero && number[i] == '0')
            isZero = false;
        if(!isZero)
            cout << number[i];
    }
    cout << "\n";
}

void Print1ToMaxOfNDigits(int n)
{
    if (n <= 0)
        return;

    char* number = new char[n+1];
    memset(number,'0',n);
    number[n] = '\0';

    while (!Increment(number))
    {
        PrintNumber(number);
    }

    delete [] number;
}
int main()
{

    return 0;
}
