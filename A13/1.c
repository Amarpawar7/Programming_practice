#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize){
    int iCnt = 0;
    int EvenSum = 0, OddSum = 0;
    for(iCnt = 0;iCnt < iSize; iCnt++){
        if(Arr[iCnt]%2 == 0){
            EvenSum = EvenSum + Arr[iCnt];
        }
        else{
            OddSum = OddSum + Arr[iCnt];
        }
    }
    return EvenSum - OddSum;

}

int main(){

    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    if(p==NULL){
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : ",iSize);

    for(iCnt = 0; iCnt <iSize; iCnt++){
        scanf("%d",&p[iCnt]);        
    }

    iRet = Difference(p,iSize);

    if(iRet<0){
        iRet = -iRet;
    }

    printf("Result : %d",iRet);

    free(p);

    return 0;
}