#include<stdio.h>
int main(){
   int a, b, k, temp, num[25];
   scanf("%d",&k);
   for(a=0;a<k;a++)
      scanf("%d",&num[a]);
   for(a=1;a<k;a++){
      temp=num[a];
      b=a-1;
      while((temp<num[b])&&(b>=0)){
         num[b+1]=num[b];
         b=b-1;
      }
      num[b+1]=temp;
   }
   for(a=0;a<k;a++)
      printf(" %d",num[a]);

   return 0;
}