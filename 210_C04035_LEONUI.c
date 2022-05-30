#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long

void solve(int n, int A[][2])
{
    int vt_dau, vt_cuoi, min_dau= 1e9, min_cuoi = 1e9, min_dau_2= 1e9+1, min_cuoi_2 = 1e9+1;
    int vt_cuoi_2,vt_dau_2;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%d %d", &A[i][0], &A[i][1]);
        if ( A[i][0] < min_dau )
        {
            min_dau = A[i][0];
            vt_dau = i;
        }
        if ( A[i][0] >= min_dau && vt_dau != i && A[i][0] < min_dau_2 )
        {
            min_dau_2 = A[i][0];
            vt_dau_2 = i;
        }
        if ( A[i][1] < min_cuoi )
        {
            min_cuoi = A[i][1];
            vt_cuoi = i;
        }
        if ( A[i][1] >= min_cuoi && vt_cuoi != i && A[i][1] < min_cuoi_2 )
        {
            min_cuoi_2 = A[i][1];
            vt_cuoi_2 = i;
        }
    }
    int start, stop;
    if ( vt_cuoi == vt_dau )
    {
        if (min_dau+min_cuoi_2 < min_dau_2+min_cuoi)
        {
            start = vt_dau;
            stop = vt_cuoi_2;
        }
        else
        {
            start = vt_dau_2;
            stop = vt_cuoi;
        }
    }
    else
    {
        start = vt_dau;
        stop = vt_cuoi;
    }
    int len = 0, xuong = 0;
    for ( int i = 0 ; i < n ; i++ )
    {
        if (i != start)
        {
            len += A[i][0];
        }
        if (i != stop)
        {
            xuong += A[i][1];
        }
    }
    int res = A[start][0] + A[stop][1] + (xuong > len ? abs(len-xuong)+len : len); 
    printf("%d",res);
}

int main()
{
    int A[25005][2], n;
    scanf("%d",&n);
    solve(n,A);
}