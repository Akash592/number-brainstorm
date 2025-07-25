#include<stdio.h>

int EvenOdd(int iNo1)
{
    if(iNo1 % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iNo1 = 437;
    int iRet = 0;

    iRet = EvenOdd(iNo1);

    if(iRet == 1)
    {
        printf("%d is even number",iNo1);
    }
    else if(iRet == 0)
    {
        printf("%d is odd number",iNo1);
    }

}