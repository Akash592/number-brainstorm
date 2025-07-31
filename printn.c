#include<stdio.h>

int main()
{
    int iCnt = 0;
    int iSum = 0;
    int n = 5;
    for(iCnt = 1; iCnt <= n; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    printf("Sum is %d/n",iSum);
    return 0;
}