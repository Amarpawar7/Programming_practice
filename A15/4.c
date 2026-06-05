#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Range(int Arr[], int iSize, int iStart, int iEnd){

    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]>=iStart) && (Arr[iCnt]<=iEnd))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }

    
}

int main(){

    int iSize = 0, iCnt = 0, iRet = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);
    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    p = (int *)malloc(sizeof(int)*iSize);

    if(p==NULL){
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt <iSize; iCnt++){
        scanf("%d",&p[iCnt]);        
    }

    iRet = Range(p,iSize,iValue1,iValue2);

    free (p);

    return 0;
}