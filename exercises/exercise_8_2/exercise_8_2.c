

#include <stdio.h>
void print(float[], int);

int main() {

   int sum = 0;
   int m[5][5] = {
     { 4, 6, 25, 88, 5},
      {34, 5, 300, 4, 65},
     { 78, 43, 11, 90, 125},
     { 98, 585, 12, 63, 21},
      {45, 35, 9, 5, 1}
   };

for(int k=0; k<5; k++){
    for(int j=0; j<5; j++){
        printf("%d\t", m[k][j]);
        
        sum+= m[k][j];
    }
    printf("\n");
}
printf("the sum of the elements is %d", sum);
return 0;
}
