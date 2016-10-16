//viet chuong trin tinh chu vi va dien tich hinh thang
#include <stdio.h>
void main()
{
    float a, b, c, d,h, chuVi, dienTich;
    printf("nhap vao do dai 2 day\n");
    scanf("%f%f",&a,&b);
    printf("nhap vao do dai 2 canh ben\n");
    scanf("%f%f",&c,&d);
    printf("nhap vao do dai chieu cao\n");
    scanf("%f",&h);
    chuVi=((a+b)/2)*h;
    dienTich=a+b+c+d;
    printf("chu vi hinh thang la:%0.2f\n", chuVi);
    printf("dien tich hinh thang la:%0.2f", dienTich);
}
