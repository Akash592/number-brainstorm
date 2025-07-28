#include<stdio.h>

int SumNaturalNumber(int iValue1)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue1; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iNo1 = 0;
    int iRet = 0;

    printf("Enter how many first natural numbers sum do you want:\n");
    scanf("%d",&iNo1);

    iRet = SumNaturalNumber(iNo1);

    printf("Sum of first %d natural numbers are : %d\n",iNo1,iRet);

    return 0;
}