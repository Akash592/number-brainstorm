#include<stdio.h>

int ProductOfFirstOdd(int iValue1)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iProduct = 1;

    for(iCnt1 = 1; iCnt2 < iValue1; iCnt1= iCnt1 + 2)
    {
        iProduct = iProduct * iCnt1;
        iCnt2++;
    }

    return iProduct;

}

int main()
{
    int iNo1 = 0;
    int iRet = 0;

    printf("Enter product of first how many odd number do you want to find : \n");
    scanf("%d",&iNo1);

    iRet = ProductOfFirstOdd(iNo1);
    printf("Product of first %d odd numbers is : %d\n",iNo1,iRet);

    return 0;
}