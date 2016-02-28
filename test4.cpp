#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main()
{
    char str[MAX];
    int len,nLen;

    fgets(str,MAX+1,stdin);
    len = strlen(str);
    str[--len] = '\0';

    int i = 0;
    int blankSum = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            blankSum++;
        i++;
    }
    nLen = len+2*blankSum;

    int p = len;
    int np = nLen;
    while(p >= 0)
    {
        if (str[p] == ' ')
        {
            str[np--] = '0';
            str[np--] = '2';
            str[np--] = '%';
        }
        else
            str[np--] = str[p];
        p--;
    }
    printf("%s\n",str);
    return 0;
}
