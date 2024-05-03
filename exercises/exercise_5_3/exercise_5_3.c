#include <stdio.h>

int main() {

   int a,b;
   int func;
   printf("1: subtraction\n 2: addition\n 3: multiplication\n);

   printf("Enter the first number: ");
   scanf("%d", &a);
   printf("Enter the second number: ");
   scanf("%d", &b);
   printf("select function");
   scanf("%d", &func);
      

   switch (func) {
      case 1: {
         printf("%d-%d=%d", first_num, second_num, a - b);
         break;
      }
      case 2: {
         printf("%d+%d=%d", first_num, second_num, a + b);
         break;
      }
      case 3: {
         printf("%d*%d=%d", first_num, second_num, a * b);
         break;
      }
      default: {
         printf("An error has occurred while running the program.");
         break;
      }
   }

   return 0;

}
