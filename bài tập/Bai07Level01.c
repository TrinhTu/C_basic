//viet chuong trinh nhap vao ngay thang nam
#include<stdio.h>
#include<math.h>
void main()
{
    int ngay,thang,nam;
    printf("nhap nhay ngay,thang nam\n");
    scanf("%d%d%d",&ngay,&thang,&nam);
    if(thang==2)
    {
        if((nam%4==0)||((nam%400==0)&&(nam%100==0)))
           printf("thang 2 cua nam %d co 29 ngay",nam);

           else printf("thang 2 cua nam %d co 28 ngay",nam);
    }
    else
    {
        if(thang==4||thang==6||thang==8||thang==10||thang==12) printf("ngay %d cua thang %d cua nam %d co 30 ngay",ngay,thang,nam);
        if(thang==1||thang==3||thang==5||thang==7||thang==9||thang==11) printf("ngay %d cua thang %d cua nam %d co 31 ngay",ngay,thang,nam);
    }

}
