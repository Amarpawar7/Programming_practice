#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[],int iSize){
    int iCnt = 0;
    int iFrequency = 0;
    for(iCnt = 0;iCnt < iSize; iCnt++){
        if(Arr[iCnt] == 11){
            iFrequency++;
        }
    }
    return iFrequency;

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

    iRet = CountFrequency(p,iSize);

    if(iRet<0){
        iRet = -iRet;
    }

    printf("%d\n",iRet);

    free (p);

    return 0;
}
