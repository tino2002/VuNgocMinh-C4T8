#include <stdio.h>

int main(void) 
{
    char kt;
    printf("Nhap vao 1 hi tu bat ky: ");
    kt = getchar();
    if (kt >='A' && kt<='Z')
    {
        printf("%c la chu cai HOA",kt);
    }
    else if (kt >='a' && kt<='z')
    {
        printf("%c la chu cai THUONG",kt);
    }
    else if (kt>='0' && kt<='9')
    {
        printf("%c la chu SO",kt);
    }
    else
    {
        printf("%c khong la chu cai , chu so",kt);
    }
    
    
    
}