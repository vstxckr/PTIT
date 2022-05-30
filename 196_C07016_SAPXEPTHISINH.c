#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

typedef struct hocsinh
{
    int mts;
    char ten[5000];
    char ngaysinh[500];
    double tongdiem;
    double diemA;
    double diemB;
    double diemC;
} hs;

void swapstr(char *s, char *x)
{
    char temp[5000];
    strcpy(temp,s);
    strcpy(s,x);
    strcpy(x,temp);
}

void swapi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapd(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

void swap(hs *A, hs *B)
{
    swapstr(A->ten, B->ten);
    swapstr(A->ngaysinh, B->ngaysinh);
    swapi(&A->mts, &B->mts);
    swapd(&A->diemA, &B->diemA);
    swapd(&A->diemB, &B->diemB);
    swapd(&A->diemC, &B->diemC);
    swapd(&A->tongdiem, &B->tongdiem);
}

void sort(int n, hs *HS)
{
    for ( int i = 1 ; i < n ; i++ )
    {
        for ( int j = i+1 ; j <= n ; j++ )
        {
            if ( HS[i].tongdiem < HS[j].tongdiem )
            {
                swap(&HS[i],&HS[j]);
            }
        }
    }
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
    sort(n,HS);
    for ( int i = 1 ; i <= n  ; i++ )
    {
        printf("%d %s %s %.1lf\n",HS[i].mts, HS[i].ten, HS[i].ngaysinh, HS[i].tongdiem);
    }
}

int main()
{
    int n;
    hs HS[100];
    scanf("%d",&n);
    getchar();
    nhap(n,HS);
    xuat(n,HS);
}