
#include <stdio.h>


int fibonacci(int n) {
  
    if (n <= 0) {
        return 0;
    }
    
    else if (n == 1) {
        return 1;
    }
   
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n_terms = 8;
    printf("Fibonacci series up to %d terms:\n", n_terms);
    for (int i = 0; i < n_terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

