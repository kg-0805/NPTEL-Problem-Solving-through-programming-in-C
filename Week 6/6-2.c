#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); /*Accepts the elements of the array */

int j, temp;  
j = i - 1;   // last Element of the array
i = 0;       // first element of the array
 
   while (i < j) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;             
      j--;        
   }

for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements 
   }
 
   return (0);
}
