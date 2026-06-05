#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iSize){
    int iCnt = 0;
    for(iCnt = 0;iCnt < iSize; iCnt++){
        if(Arr[iCnt] == 11){
            return TRUE;
        }
        else{
            FALSE;
        }
    }
}

int main(){

    int iSize = 0, iCnt = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    if(p==NULL){
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt <iSize; iCnt++){
        scanf("%d",&p[iCnt]);        
    }

    bRet = Check(p,iSize);

    if(bRet == TRUE){
        printf("11 is present\n");
    }
    else{
        printf("11 is absent\n");
    }
    free (p);

    return 0;
}
