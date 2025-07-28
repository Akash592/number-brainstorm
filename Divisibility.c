#include<stdio.h>
#include<math.h>

int CheckDivisibility(int iValue1,int iValue2)
{
    if(iValue1 % iValue2 == 0)
    {
        return 1;
    }
    else if(iValue1 % iValue2 != 0)
    {
        return 0;
    }

}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter the first number : \n");
    scanf("%d",&iNo1);

    printf("Enter the second number : \n");
    scanf("%d",&iNo2);

    iRet = CheckDivisibility(iNo1,iNo2);

    if(iRet == 0)
    {
        printf("%d is not divisible by %d\n",iNo1,iNo2);
    }
    else
    {
        printf("%d is divisible by %d\n",iNo1,iNo2);
    }



    return 0;
}