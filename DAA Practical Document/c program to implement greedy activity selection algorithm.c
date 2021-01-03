#include <stdio.h>

#include<stdio.h>
int main(){
   int s[] = {1,3,0,5,3,5,6,8,8,2,12};
   int f[] = {4,5,6,7,9,9,10,11,12,14,16};
   int n = sizeof(s)/sizeof(s[0]);
   int k, m;
   printf ("Selected Activities are -> ");
   k = 0;
   printf("A%d ", k+1);
   for (m = 1; m < n; m++){
      if (s[m] >= f[k]){
         printf ("A%d ", m+1);
         k = m;
      }
   }
   return 0;
}
