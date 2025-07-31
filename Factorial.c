#include<stdio.h>
int main()
{
    int iCnt = 0;
    int iFact = 1;
    
    for(iCnt = 5; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    
    printf("%d",iFact);
    
    return 0;
}