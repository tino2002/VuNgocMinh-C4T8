#include <stdio.h>
int main(void)
{
    //khai bao bien
    int a;
    float x;
    char ch;
    char str[30];
    //Nhap du lieu
    printf("Nhap vao mot so nguyen");
    scanf("%d",&a);
    printf("\nNhap vao mot so thuc");
    scanf("%f",&x);
    printf("\nNhap vao mot ki tu");
    fflush(stdin);
    scanf("%c",&ch);
    printf("\nNhap vao mot xau ki tu");
    fflush(stdin);
    scanf("%s",str);
    //hien thi du lieu nhap vao
    printf("\n Nhung du lieu vua nhap vao");
    printf("\n So nguyen: %d",a);
    printf("\n so thuc: %.2f",x);
    printf("\n Ki tu: : %c",ch);
    printf("\n Xau ki tu: %s",str);
}
