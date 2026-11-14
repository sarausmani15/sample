#include<stdio.h>
int main(){
int number;
printf("ENTER AN NUMBER = ");
scanf("%d", &number);
if( number % 2 == 0)
{
printf("%d IS AN EVEN NUMBER", number);
}
else{
printf("%d IS AN ODD NUMBER", number);
}
return 0;
}