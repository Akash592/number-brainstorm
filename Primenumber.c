#include<stdio.h>

int CheckPrime(int iValue)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iValue/2; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
    
}

int main()
{
    int iNo1 = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo1);

    iRet = CheckPrime(iNo1);

    if(iRet == 0)
    {
        printf("%d is not a prime number\n",iNo1);
    }
    else 
    {
        printf("%d is a prime number\n",iNo1);
    }

    return 0;
}