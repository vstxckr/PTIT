#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

int main()
{
    int n;
    int max=-1;
    int A[100001]={0};
    scanf("%d",&n);
    for ( int i=1 ; i<=n-1 ; i++ )
    {
        int a,b;
        scanf("%d %d",&a,&b);
        A[a]++;
        A[b]++;
    }
    for ( int i=1 ; i<=n ; i++ )
    {
        if (A[i]==n-1)
        {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
}