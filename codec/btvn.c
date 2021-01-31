#include<stdio.h>
#include<string.h>
int main(void){
	char a[100];
	printf("Nhap vao ho ten cua ban: ");
	fflush(stdin);
	gets(a);
	printf("Ho ten cua ban la: %s",a);
	printf("\n\nNhap vao lop cua ban: ");
	fflush(stdin);
	gets(a);
	printf("Lop cua ban la: %s",a);
	int b;
	printf("\n\nNhap vao nam sinh cua ban: ");
	scanf("%d",&b);
	printf("Nam sinh cua ban la: %d",b);
	float c;
	printf("\n\nNhap vao diem do vao truong cua ban: ");
	scanf("%f",&c);
	printf("Diem do vao truong sinh cua ban la: %.02f",c);
}