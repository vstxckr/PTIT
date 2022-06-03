#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

int nhap(int *A)
{
    char s[10000]={'\0'};
    fgets(s,10000,stdin);
    int lens = strlen(s);
    s[lens-1] = ' ';
    s[lens] = '\0';
    int j = 0;
    for ( int i = 0 ; i < lens ; i++ )
    {
        if ( s[i] != ' ' && s[i+1] == ' ' )
        {
            A[j] = A[j]*10 + (s[i]-48);
            j++;
            continue;
        }
        if ( s[i] != ' ')
        {
            A[j] = A[j]*10 + (s[i]-48);
        }
    }
    return j;
}

void solve()
{
    int temp, i = 0, n, le = 0, chan = 0,A[3000]={0};
    n = nhap(A);
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( A[i]&1 ) le++; else chan++;
    }
    if ( n&1 && le>chan || !(n&1) && chan>le )
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int t;
    int n;
    scanf("%d",&t);
    getchar();
    while (t--)
    {
        solve();
    }
}