#include<stdio.h>
#include<math.h>

#define ll long long

void solve()
{
    int A[4][3];
    scanf("%d %d",&A[1][1], &A[1][2]);
    scanf("%d %d",&A[2][1], &A[2][2]);
    scanf("%d %d",&A[3][1], &A[3][2]);

    for ( int i = 1 ; i < 3 ; i++ )
    {
        for ( int j = i+1 ; j <= 3 ; j++ )
        {
            for ( int k = 1 ; k <= 2 ; k++ )
            {
                for ( int l = 1 ; l <= 2 ; l++ )
                {
                    if (A[i][k] == A[j][l])
                    {
                        int new_e = A[i][3-k]+A[j][3-l];
                        if (new_e == A[6-i-j][1] && A[6-i-j][2] + A[i][k] == new_e || new_e == A[6-i-j][2] && A[6-i-j][1] + A[i][k] == new_e)
                        {
                            printf("YES");
                            return ;
                        }
                    }
                }
            }
        }
    }
    printf("NO");
}

int main()
{
    solve();
}