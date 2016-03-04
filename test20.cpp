#include <iostream>
#include <cstring>

using namespace std;


void PrintMatrixInCircle(int** numbers,int rows,int cols,int start)
{
    int endX = cols-1-start;
    int endY = rows-1-start;

    for (int i = start;i <= endX;i++)
        cout << numbers[start][i];

    if (start < endY)
    {
        for (int i = start+1;i <= endY;i++)
        cout << numbers[i][endX];
    }

    if (start < endX && start < endY)
    {
        for (int i = endX-1;i >= start;i--)
        cout << numbers[endY][i];
    }

    if (start < endX && start < endY-1)
    {
        for (int i = endY-1;i >= start+1;i--)
        cout << numbers[i][start];
    }


}
void PrintMatrixClockwisely(int** numbers,int rows,int cols)
{
    if (numbers == NULL || rows <= 0 || cols <= 0)
        return;

    int start = 0;
    while (start*2<rows && start*2<cols)
    {
        PrintMatrixInCircle(numbers,rows,cols,start);
        start++;
    }
}
int main()
{

    return 0;
}
