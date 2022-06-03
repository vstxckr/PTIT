#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

void solve(int n)
{
    
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n, A[100001];
        scanf("%d",&n);
        bool lap = false;
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf("%d",&A[i]);
        }
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = i+1 ; j < n ; j++ )
            {
                if (A[i] == A[j])
                {
                    printf("%d\n",A[i]);
                    lap = true;
                    break;
                }
            }
            if (lap)
                break;
        }
        if ( !lap )
        {
            printf("NO\n");
        }
    }
}