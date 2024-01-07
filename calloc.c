#include<stdio.h>
#include<stdlib.h>
 
   int main(){
      int *track ; 
      track = (int *) calloc (5 , sizeof(int));
      printf("Enter the number : \t");
         for (int i = 0; i < 5; i++)
         {
            scanf("%d", &track[i]);
         }
         for (int i = 0; i < 5; i++)
         {
            printf("Number of %d is : %d\t\n",i,track[i]);
         }
      free(track);
      return 0;
   }