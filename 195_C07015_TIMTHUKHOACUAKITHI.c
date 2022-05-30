#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

typedef struct hocsinh
{
    int mts;
    char ten[1000];
    char ngaysinh[100];
    double tongdiem;
    double diemA;
    double diemB;
    double diemC;
} hs;

double max(int n, hs *HS)
{
    double max = -1;
    for ( int i = 1 ; i <= n ; i++ )
    {
        if ( HS[i].tongdiem > max )
        {
            max = HS[i].tongdiem;
        }
    }
    return max;
}

void nhap(int n, hs *HS)
{
    for ( int i = 1 ; i <= n ; i++ )
    {
        HS[i].mts = i;
        gets(HS[i].ten);
        gets(HS[i].ngaysinh);
        scanf("%lf",&HS[i].diemA);
        scanf("%lf",&HS[i].diemB);
        scanf("%lf",&HS[i].diemC);
        HS[i].tongdiem = HS[i].diemA + HS[i].diemB + HS[i].diemC;
        getchar();
    }
}

void xuat(int n, hs *HS)
{
    double max_t = max(n,HS);
    for ( int i = 1 ; i <= n ; i++ )
    {
        if ( HS[i].tongdiem == max_t)
        {
            printf("%d %s %s %.1lf\n",HS[i].mts, HS[i].ten, HS[i].ngaysinh, HS[i].tongdiem);
        }
    }
}

int main()
{
    int n;
    hs HS[1000];
    scanf("%d",&n);
    getchar();
    nhap(n,HS);
    xuat(n,HS);
}