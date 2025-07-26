#include<stdio.h>

int HighestCommonDiv(int iValue1,int iValue2)
{
    int iCnt = 0;
    int iHigh = 0;

    for(int iCnt = 2; iCnt <= iValue1/2; iCnt++)
    {
        if(iValue1 % iCnt == 0 && iValue2 % iCnt == 0)
        {
            iHigh = iCnt;
        }
    }
    return iHigh;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    int HCD = 0;

    printf("Enter first number:\n");
    scanf("%d",&iNo1);

    printf("Enter second number\n");
    scanf("%d",&iNo2);

    HCD = HighestCommonDiv(iNo1,iNo2);

    printf("HCD is : %d\n",HCD);
    return 0;
}