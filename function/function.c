 /* Pass-by-Value example */
#include <stdio.h>
int swap (int* a, int *b);

int main ()
{
    int x = 19, y = 5;   
    printf("Before swapping: x=%d, y = %d\n",x,y);
    swap(&x, &y);
    printf("After swapping: x=%d, y = %d",x,y);     
    return 0; 
}

int swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
