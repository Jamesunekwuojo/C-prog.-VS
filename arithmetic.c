// A C programme to perform arithmetic operations
#include <stdio.h>
int main(){
    int a, b;
    printf("Input a value for a:");
    scanf("%d", &a);
    printf("Input a value for b:");
    scanf("%d", &b);

    int add, div, sub, mult, mod;
    add = a + b;
    div = a / b;
    sub = a - b;
    mult= a*b;
    mod = a%b;

    printf("The addition of a and b is %d \n", add  );
    printf("The diff. between a and b is %d \n", sub);
    printf( "The division of a and b is %d \n", div);
    printf("The multiplication of a and b is %d \n", mult );
    printf("The mode of a and b is %d", mod);


}