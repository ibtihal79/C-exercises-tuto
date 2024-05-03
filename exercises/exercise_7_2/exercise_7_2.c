#include <stdio.h>
int main(void) {
   int function;
   int a,b;

   do {

      printf("1: sum of two numbers\n 2: difference of two numbers\n 3: product of two numbers\ <0: terminate the program\n Select calculation: ");
      scanf("%d", &function);

      if (function < 0) break;

      printf("Enter the first number: ");
      scanf("%d", &a);
      printf("Enter the second number: ");
      scanf("%d", &b);

      switch (function) {
         case 1: {
            printf("%d+%d=%d", a, b, a + b);
            break;
         }
         case 2: {
            printf("%d-%d=%d", a, b, a - b);
            break;
         }
         case 3: {
            printf("%d*%d=%d", a, b, a * b);
            break;
         }
         default: {
            printf("Invalid function selected.");
         }
      }

   } while (function >= 0);
    printf("Terminating the program...\n");
}
     
