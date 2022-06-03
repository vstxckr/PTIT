#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

typedef struct mathang
{
    int ma_so;
    char ten[1000];
    char nhom[100];
    double gia_mua;
    double gia_ban;
    double loi_nhuan;
}mh;

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
void swapstr(char *x, char *y)
{
    char temp[1000];
    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);
}

void swap(mh *A, mh *B)
{
    swapstr(A->ten,B->ten);
    swapstr(A->nhom,B->nhom);
    swapi(&A->ma_so,&B->ma_so);
    swapd(&A->gia_ban,&B->gia_ban);
    swapd(&A->gia_mua,&B->gia_mua);
    swapd(&A->loi_nhuan,&B->loi_nhuan);
}
void sort(int n, mh *MH)
{
    for ( int i = 1 ; i < n ; i++ )
    {
        for ( int j = i+1 ; j <=n ; j++ )
        {
            if ( MH[i].loi_nhuan < MH[j].loi_nhuan)
            {
                swap(&MH[i],&MH[j]);
            }
        }
    }
}

void nhap(int n, mh *MH)
{
    for ( int i = 1 ; i <= n ; i++ )
    {
        MH[i].ma_so = i;
        gets(MH[i].ten);
        gets(MH[i].nhom);
        scanf("%lf",&MH[i].gia_mua);
        scanf("%lf", &MH[i].gia_ban);
        MH[i].loi_nhuan = MH[i].gia_ban - MH[i].gia_mua;
        getchar();
    }
}

void xuat(int n, mh *MH)
{
    sort(n,MH);
    for ( int i = 1 ; i <= n ; i++ )
    {
        printf("%d %s %s %.2lf\n", MH[i].ma_so, MH[i].ten, MH[i].nhom, MH[i].loi_nhuan);
    }
}

int main()
{
    int n;
    int index = 0;
    mh MH[1000];
    scanf("%d",&n);
    getchar();
    nhap(n,MH);
    xuat(n,MH);
}