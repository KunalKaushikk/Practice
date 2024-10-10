#include <stdio.h>
int main(){
    int a,n,arr[n],middle,first,last;
    printf("Enter no of elements for array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you wanna search: ");
    scanf("%d",&a);
    first =0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last){
        if(arr[middle]<a)
        first=middle+1;
        else if(arr[middle]==a)
        printf("found at %d",middle);
        else
        last=middle-1;
        middle=(first+last)/2;
        
    }
    if(first>last)
    printf("Element not in array");
    }
   
