#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int LastOcc(int Arr[], int iSize, int iNo){

    int iCnt = 0;

    for(iCnt = iSize;iCnt > 0; iCnt--){
        if(Arr[iCnt] == iNo){
            return iCnt;
            
        }
    }
    return -1;
    
}

int main(){

    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number : ");
    scanf("%d",&iValue);

    p = (int *)malloc(sizeof(int)*iSize);

    if(p==NULL){
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt <iSize; iCnt++){
        scanf("%d",&p[iCnt]);        
    }

    iRet = LastOcc(p,iSize,iValue);

    if (iRet == -1){
        printf("There is no such number");
    }
    else{
        printf("Last occurance of number is at index : %d",iRet);
    }

    free (p);

    return 0;
}