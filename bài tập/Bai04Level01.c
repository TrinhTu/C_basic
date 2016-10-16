//viet chuong trinh tinh chu vi va dien tich hinh chu nhat
#include <stdio.h>
void main()
{
    float a,b, chuVi, dienTich;
    printf("nhap vao do dai 2 canh\n");
    scanf("%f%f",&a,&b);
    chuVi=(a+b)*2;
    dienTich=a*b;
    printf("chu vi hinh chu nhat la:%0.2f\n", chuVi);
    printf("dien tich hinh chu nhat la:%0.2f", dienTich);
}
