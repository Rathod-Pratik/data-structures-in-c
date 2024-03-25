/*
algoritm for program of merge sort
1. Start

2. Define a function merge(arr1[], arr2[], arr3[]) to merge two sorted arrays arr1[] and arr2[] into arr3[].

3. Initialize variables i, j, and k to 0 to keep track of indices for arr1[], arr2[], and arr3[] respectively.

4. While i is less than 5 and j is less than 5:
    a. If arr1[i] is less than arr2[j], assign arr1[i] to arr3[k] and increment both i and k.
    b. Else, assign arr2[j] to arr3[k] and increment both j and k.

5. After the loop, if there are remaining elements in arr1[], copy them to arr3[].

6. After the loop, if there are remaining elements in arr2[], copy them to arr3[].

7. Print "sorted array is :" to indicate the beginning of the sorted array output.

8. Iterate through arr3[] and print each element.

9. End

In the main function:
1. Define three arrays arr1[5], arr2[5], and arr3[10] to hold input arrays and the merged array respectively.
2. Initialize an integer variable i.
3. Prompt the user to enter elements for the first array arr1[].
4. Read and store the input elements into arr1[] using a loop.
5. Prompt the user to enter elements for the second array arr2[].
6. Read and store the input elements into arr2[] using a loop.
7. Call the merge function with arr1[], arr2[], and arr3[] as arguments to merge the two arrays.
8. End of the main function.
*/

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