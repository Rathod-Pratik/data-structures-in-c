#include <stdio.h>

int main(void) {
int n=5,i,k[5];
  for(i=0; i<5; i++){
    scanf("%d",&k[i]);
  }
  int j,min_index,temp;

  printf("\n unsorted array :");
  for(i=0; i<5;  i++){
    printf("%d ",k[i]);
  }
  for(i=0; i<n-1; i++){
    min_index=i;
    for(j=i+1; j<n; j++){
      
      if(k[j]<k[min_index]){
        min_index=j;
      }
    } 
      //swap element
      if(min_index!=i){
        temp=k[i];
        k[i]=k[min_index];
        k[min_index]=temp;
      }
  }
  printf("\n sorted array :");
  for(i=0; i<5; i++){
    printf("%d ",k[i]);
  }
  return 0;
}