#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength){
    int iCnt = 0;
    int iMulti = 0;
    for(iCnt = 0;iCnt < iLength; iCnt++){
        if(Arr[iCnt]%2 != 0){
            iMulti = iMulti * Arr[iCnt];
        }
    }
    if(iMulti == 1){
        return 0;
    }
    return iMulti;
}


int main(){

    int iSize = 0, iCnt = 0, iRet = 0;

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

    iRet = Product(p,iSize);

    printf("Product is : %d",iRet);

    free (p);

    return 0;
}