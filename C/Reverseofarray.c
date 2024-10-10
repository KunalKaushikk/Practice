#include <stdio.h>
int main(){
    int arr1[5];
    for(int i=0;i<5;i++){
        printf("Enter element %d : ",i);
        scanf("%d",&arr1[i]);
    }
    printf("Array before swap is :\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr1[i]);
    }
    printf("\nArray after swap is:\n");
    for(int i=4;i>=0;i--){
        printf("%d ",arr1[i]);
    }
}