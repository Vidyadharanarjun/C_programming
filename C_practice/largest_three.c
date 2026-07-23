#include <stdio.h>
int main(){
int a = 15, b = 42, c = 29;
printf("Enter the integers");
scanf("%d %d %d", &a, &b, &c);
if(a>=b && b>=a){
printf("Enter a is largest");
}
else if (b>=c && c>=b)
{
printf("Enter b is largest");
}
else
{
printf("C is largest");
}
return 0;
}


