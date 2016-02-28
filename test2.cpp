#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,cols,number;
    int sum;
    int* matrix;

    scanf("%d%d%d",&rows,&cols,&number);
    sum = rows*cols;

    matrix = (int*)malloc(sizeof(int)*sum);
    int i;
    for(i = 0;i < sum;i++)
        scanf("%d",&matrix[i]);

    int found = 0;
    if (rows > 0 && cols > 0)
    {
        int row = 0,col = cols-1;

        while(row<rows && col>=0)
        {
                if (matrix[row*cols+col] == number)
                {
                    found = 1;
                    break;
                }
                else if(matrix[row*cols+col] > number)
                    col--;
                else
                    row++;
        }
    }

    if (found) printf("Found\n");
    else printf("Not Found\n");
    return 0;
}
