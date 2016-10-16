//viet chuong trinh tinh chu vi va dien tich hinh vuong
#include <stdio.h>
void main()
{
    float a, chuVi, dienTich;
    printf("nhap vao do dai canh hinh vuong\n");
    scanf("%f",&a);
    chuVi=4*a;
    dienTich=a*a;
    printf("chu vi hinh vuong la:%0.f\n", chuVi);
    printf("dien tich hinh vuong la:%0.f", dienTich);
}
