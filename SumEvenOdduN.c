
// Author : Akash Dadaso Malgunde
//Date    : 31/07/2025
//Time    : 14:52


#include <stdio.h>

int main() 
{
    
    int iCnt = 0;
    int n = 10;
    int iEvenSum = 0;
    int iOddSum = 0;
    
    for(iCnt = 1; iCnt <= n; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenSum = iEvenSum + iCnt;
        }
        else
        {
            iOddSum = iOddSum + iCnt;
        }
        
    }
    
    printf("%d is sum of even number upto %d\n",iEvenSum,n);
    
    printf("%d is sum of odd number upto %d\n",iOddSum,n);
    
    

    return 0;
}
