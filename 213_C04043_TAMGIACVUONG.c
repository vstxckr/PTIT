#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

#define ll long long

int check(ll sq_a, ll sq_b, ll sq_c)
{
    if (sq_a == sq_b + sq_c || sq_b == sq_a+ sq_c || sq_c == sq_a + sq_b)
        return 1;
    return 0;
}

void sort(ll A[], int n)
{
    for ( int i = 0 ; i < n - 1 ; i++ )
    {
        ll min = A[i], vt = i;
        for ( int j = i+1 ; j < n ; j++ )
        {
            if (min > A[j])
            {
                vt = j;
                min = A[j];
            }
            ll temp = A[i];
            A[i] = A[vt];
            A[vt] = temp;
        }
    }
}

void solve(int n, ll A[])
{
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%lld",&A[i]);
    }
    sort(A,n);
    for ( int i = 0 ; i < n ; i++ )
    {
        A[i] = A[i]*A[i];
    }
    for ( int i = n-1 ; i >= 2  ; i-- )
    {
        int l = 0, r = i-1;
        while (l<=r)
        {
            if (A[i] == A[l] + A[r])
            {
                printf("YES\n");
                return ;
            }
            else if (A[i] < A[l] + A[r])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    printf("NO\n");
}



int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        ll A[10001];
        scanf("%d",&n);
        solve(n,A);
    }
}