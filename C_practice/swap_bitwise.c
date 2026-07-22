#include <stdio.h>
int main(){
int a = 5, b = 10;
a = a ^ b;
b = b ^ a;
a = a ^ b;
printf("swapped: a = %d, b = %d\n", a, b);
return 0;
}

