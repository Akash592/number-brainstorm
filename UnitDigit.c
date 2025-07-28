#include<stdio.h>

int UnitDigit(int iValue1,int iValue2)
{
    int iMultiplication = 0;
    int iDigit = 0;

    iMultiplication = iValue1 * iValue2;

    iDigit = iMultiplication % 10;

    return iDigit;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    int iUnitDig = 0;

    printf("Enter First number:\n");
    scanf("%d",&iNo1);

    printf("Enter Second number:\n");
    scanf("%d",&iNo2);

    iUnitDig = UnitDigit(iNo1,iNo2);
    printf("Unit digit of  %d and %d multiplication  is : %d\n",iNo1,iNo2,iUnitDig);

    return 0;
}