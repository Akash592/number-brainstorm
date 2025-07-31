#include<stdio.h>

int main()
{
    int iCnt = 0;
    int n = 10;
    for(iCnt = 1; iCnt <= n; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d is even\n",iCnt);
        }
    }
    return 0;
}