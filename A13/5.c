#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iSize){
    int iCnt = 0;
    for(iCnt = 0;iCnt < iSize; iCnt++){
        if(Arr[iCnt]%11 == 0){
            printf("%d\t",Arr[iCnt]);
        }
    }

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

    Display(p,iSize);

    free(p);

    return 0;
}