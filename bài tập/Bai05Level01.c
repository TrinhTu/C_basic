//viet chuong trinh tinh the tich hinh tru
#include <stdio.h>
void main()
{
    float r,h, V;
    printf("nhap vao ban kinh hinh tru\n");
    scanf("%f",&r);
    printf("nhap vao duong cao hinh tru\n");
    scanf("%f",&h);
    V=3.14*r*r*h;
    printf("the tich cua hinh tru la:%0.2f",V);
}
