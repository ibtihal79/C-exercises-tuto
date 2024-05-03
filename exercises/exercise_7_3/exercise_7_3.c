#include <stdio.h>

int smallest(int, int, int );
int largest(int, int, int );

int main() {

   int a,b,c;
   printf("Enter the 1. number: ");
   scanf("%d", &a);
   printf("Enter the 2. number: ");
   scanf("%d", &b);
   printf("Enter the 3. number: ");
   scanf("%d", &c);
   int max= largest(a, b, c);
   int min= smallest(a, b, c);
   printf("among the numbers you entered,\n");
   printf("the largest was %d and the smallest was %d.", max, min);
   return 0;
}

  
   int smallest(int a, int b, int c){
       if(a<b){
           if(a<c){
               return a;
           }
           return c;
       }else {
           if(b<c){
               return b;
           }
           return c;
       }
   }
   
    int largest(int a, int b, int c){
       if(a>b){
           if(a>c){
               return a;
           }
           return c;
       }else {
           if(b>c){
               return b;
           }
           return c;
       }
   }
   
