#include <stdio.h>

int main(void) {
 int arr[10],i,num;

  printf("Enter element of array :");
  for(i=0; i<10; i++){
  scanf("%d" ,&arr[i]);
  }

  printf("Enter number to be search :");
  scanf("%d",&num);

  for(i=0; i<10; i++){
    if(arr[i] == num){
      break;
    }
  }
  if(i==10){
    printf("\n number is not found in array list ");
  }
  else{
    printf("\n number found at %d position and number is %d",i+1,num);
  }
  
  return 0;
}