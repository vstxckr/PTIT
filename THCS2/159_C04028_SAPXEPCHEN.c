#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>


void sort(int *A, int n, int step)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        int cur = A[i];
        int j = i - 1;

        while ( j >= 0 && A[j] > cur )
        {
            A[j+1] = A[j];
            j--; 
        }
        A[j+1] = cur;
        printf("Buoc %d: ",step);
        for ( int j = 0 ; j <= i  ; j++ )
        {
            printf("%d ",A[j]);
        }
        printf("\n");
        step++;
    }
}

void solve(int *A, int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    sort(A,n,0);
}

int main()
{
    int n, A[200];
    scanf("%d",&n);
    solve(A,n);
}
