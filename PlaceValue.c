#include<stdio.h>

int PlaceValue(int iNo1, int iCheck)
{
    int iCnt = 0;
    int iPlaceValue = 1;
    int iDigit = 0;
    while(iNo1 % 10 != 6)
    {
        iNo1 = iNo1 / 10;

        iCnt++;
    }
    for(int i = 1; i <= iCnt; i++)
    {
        iPlaceValue = iPlaceValue * 10;
    }
    return iPlaceValue;
}

int main()
{
    int iValue1 = 7629;

    int iDigit = 6;

    int iRet = 0;

    iRet = PlaceValue(iValue1,iDigit);
    printf("Place value of %d in %d is :%d\n",iDigit,iValue1,iRet);
}