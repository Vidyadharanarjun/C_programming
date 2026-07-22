#include <stdio.h>
int main(){
int a = 5, b = 10;
printf("before swap: a = %d, b = %d\n", a, b );
a = a + b;
b = b - a;
a = a - b;
printf("after swap: a = %d, b = %d\n", a, b);
return 0;
}

