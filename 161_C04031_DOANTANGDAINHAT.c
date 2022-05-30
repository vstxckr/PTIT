#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>


void solve(int *A, int test)
{
    int n;
    int B[100][2];
    scanf("%d",&n);
    for ( int i = 0 ; i < n ; i++ ) 
    {
        scanf("%d",&A[i]);
    }
    int index = 0;
    int j;
    for ( int i = 0 ; i < n ; i = j + 1 )
    {
        B[index][0] = i;
        j = i;
        while ( j < n && A[j] < A[j+1] )
        {
            j++;
        }
        B[index][1] = j - i + 1;
        index++;
    }
    int max = -1e9;
    for ( int i = 0 ; i < index ; i++ )
    {
        if ( max < B[i][1] )
        {
            max = B[i][1];
        }
    }
    printf("Test %d:\n%d\n",test,max);
    for ( int i = 0 ; i < index ; i++ )
    {
        if ( B[i][1] == max )
        {
            for ( int j = B[i][0] ; j <= B[i][0] + B[i][1] - 1 ; j++ )
            {
                printf("%d ", A[j]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    for ( int i = 1 ; i <= t ; i++ )
    {
        int A[200] = {0}, B[200] = {0};
        solve(A,i);
    }
}
