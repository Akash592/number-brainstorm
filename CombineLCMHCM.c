#include<stdio.h>

int LowestCM(int iValue1,int iValue2)
{
    int iCnt = 0;
    for(int iCnt = 2; iCnt <= iValue1; iCnt++)
    {
        if(iValue1 % iCnt == 0 && iValue2 % iCnt == 0)
        {
            return iCnt;
            break;
        }
    }
}

int HighestCM(int iValue1,int iValue2)
{
    int iCnt = 0;
    int iHigh = 0;
    for(int iCnt = 2; iCnt <= iValue1; iCnt++)
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
    int iLCM = 0;
    int iHCM = 0;

    printf("Enter the first number:\n");
    scanf("%d",&iNo1);

    printf("Enter the second number:\n");
    scanf("%d",&iNo2);

    iLCM = LowestCM(iNo1,iNo2);

    iHCM = HighestCM(iNo1,iNo2);

    printf("%d and %d are the LCM and HCM of %d and %d respectively.",iLCM,iHCM,iNo1,iNo2);

    return 0;
}