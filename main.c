#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int a, b;
    
    printf("enter a numerator : ");
    scanf("%d", &a);
    
    printf("enter a denominator : ");
    scanf("%d", &b);
    
    
    printf("The result of the division is %f\n", (float)a/b );
    
  system("PAUSE");	
  return 0;
}
