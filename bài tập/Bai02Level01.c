//viet chuong trinh tinh chu vi va dien tich hinh tron
#include <stdio.h>
void main()
{
    float R, dtich, chuVi;
    printf("nhap vao ban kinh hinh tron R\n");
    scanf("%f",&R);
    dtich=R*R*3.14;
    chuVi=2*R*3.14;
    printf("dien tich hinh tron la: %0.2f\n", dtich);
    printf("chu vi hinh tron la:%0.2f", chuVi);
}
