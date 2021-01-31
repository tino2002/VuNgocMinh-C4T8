#include <stdio.h>

int main(void)
{
    int n;
    printf("Nhap vao 1 so nguyen: ");
    scanf("%d", &n);
    if (n%2 == 0 )
    {
        printf("%d la so CHAN!",n);
    }
    else
    {
        printf("%d la so LE!",n);
    }
    
    
}