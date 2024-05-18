#include <stdio.h>

int main(void)
{
    int a;
    int *p;
    p = &a;
    printf("Gia tri cua bien a: %d\n", a);
    printf("Dia chi cua bien a: %p\n", &a);
    printf("Gia tri cua con tro: %p\n", p);
    printf("Gia tri o nho ma con tro dang tro toi: %i\n", *p);
    

    
    
}