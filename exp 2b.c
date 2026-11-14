#include<stdio.h>
int main(){
int start,temp,end,sum = 0;
printf("Enter starting number = ");
scanf("%d", &start);
printf("Enter ending number = ");
scanf("%d", &end);
if(start > end){
temp = start;
start = end;
end = temp;
}
for (int i =start; i <= end; i++){
if(i %2 != 0){
sum += i;
}
}
printf("\nTHE SUM OF ALL NUMBERS BETWEEN %d AND %d is %d",
start,end,sum);
}

