//array must be sorted before use index search
#include <stdio.h>

int main(void) {
 int i,j,a[5],n,ch,f=0;
  printf("Enter n :");
  scanf("%d",&n);

  printf("Enter array value :");
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);
  }
    printf("Enter number of index to search :");
    scanf("%d",&ch);

  for(i=0; i<n; i++){
    if(i==ch){
      printf("\n value founded at position [%d] \n value is a[%d]:%d",i,i,a[i]);
      f=1;
      break;
    }
  }
  if(f==0){
    printf("\n value not found \n please check the index");
  }
  
  return 0;
}