#include<stdio.h>

int LowestDiv(int iNo1,int iNo2)
{
    int iCnt = 0;
    int iLow = 0;

    for(iCnt = 2; iCnt <= iNo1; iCnt++)
    {
        if(iNo1 % iCnt == 0 && iNo2 % iCnt == 0)
        {
            return iCnt;
            break;
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iLowest = 0;

    printf("Enter First number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second number:\n");
    scanf("%d",&iValue2);

    iLowest = LowestDiv(iValue1,iValue2);
    printf("LCD of %d and %d is : %d\n",iValue1,iValue2,iLowest);


    return 0;
}