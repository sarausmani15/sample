#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int array[], int array_size)
{
    int *pointer1 = array,
       
        *pointer2 = array + array_size - 1;
    while (pointer1 < pointer2) {
        swap(pointer1, pointer2);
        pointer1++;
        pointer2--;
    }
}

void print(int* array, int array_size)
{
    int *length = array + array_size,
        *position = array;
    printf("Array = ");
    for (position = array; position < length; position++)
        printf("%d ", *position);
}

int main()
{
    
    int array[] = { 1, 2, 3, 4, 5, 6 };
    printf("Original ");
    print(array, 6);


    printf("Reverse ");
    reverse(array, 6);
    print(array, 6);
    return 0;
}
