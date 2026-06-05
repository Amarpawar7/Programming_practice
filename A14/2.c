#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize){
    int iCnt = 0;
    int EvenCount = 0, OddCount = 0;
    for(iCnt = 0;iCnt < iSize; iCnt++){
        if(Arr[iCnt]%2 == 0){
            EvenCount++;
        }
        else{
            OddCount++;
        }
    }
    return EvenCount-OddCount;
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

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt <iSize; iCnt++){
        scanf("%d",&p[iCnt]);        
    }

    iRet = Frequency(p,iSize);

    if(iRet<0){
        iRet = -iRet;
    }

    printf("Difference between frequency of even and odd numbers is :  %d\n",iRet);

    free (p);

    return 0;
}
