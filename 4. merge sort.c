//this function input two array and and sort and merge in two array
#include<stdio.h>
void merge(int arr1[],int arr2[],int arr3[]){
 int  i,j,k;
  i=j=k=0;
  while(i<5 && j<5){
    if(arr1[i]<arr2[j]){
      arr3[k++]=arr1[i++];
   
    }
    else{
      arr3[k++]=arr2[j++];
      
    }
  }
    while(i<5){
      arr3[k++]=arr1[i++];
    }
    while(j<5){
      arr3[k++]=arr2[j++];
    }
  

  printf("sorted array is :");
  for(int i=0; i<10; i++){
    printf("%d\n",arr3[i]);
  }
}
int main(){
  int arr1[5],arr2[5],arr3[10];
 
  int i;

  printf("enter element of array for first array:");
  for(i=0; i<5; i++){
  scanf("%d",&arr1[i]);
}
   printf("enter element of array for first array:");
    for(i=0; i<5; i++){
    scanf("%d",&arr2[i]);
  }
  merge(arr1,arr2,arr3);
  }