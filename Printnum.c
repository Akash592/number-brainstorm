#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 1;
    while(iCnt <= iValue)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter a number :\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}