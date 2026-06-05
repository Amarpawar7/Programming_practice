#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength){

    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0;iCnt < iLength; iCnt++){
        if(Arr[iCnt] < iMin){
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}


int main(){

    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    if(p == NULL){
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt <iSize; iCnt++){
        scanf("%d",&p[iCnt]);        
    }

    iRet = Minimum(p,iSize);

    printf("Smallest number is : %d",iRet);

    free(p);

    return 0;
}