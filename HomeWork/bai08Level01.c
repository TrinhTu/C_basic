//viet chuong trinh nhapvao so day quy doi ra gio phut
#include <stdio.h>
void main()
{
    int giay;
    printf("nhap vao so giay\n");
    scanf("%d",&giay);
    printf("%d gio %d phut",giay/3600,(giay%3600)/60);

}
