#include<stdio.h>

int main(){
    int start,end,i,j,isprime;
    printf("Enter lower limit = ");
    scanf("%d\n", &start);

    printf("Enter upper limit = ");
    scanf("%d\n", &end);

    printf("Prime numbers between %d and %d are\n", start,end);

    i = start;
    while(i <= end){
        if(i > 1){
            isprime = 1;
            j= 2;

            while(j <= i/2){
                if(i %j == 0){
                    isprime = 0;
                    break;
                }
            j++;        }
            if(isprime == 1){
                printf("%d", i);
                        }
        }
        i ++;

    }
    printf("\n");
    return 0;