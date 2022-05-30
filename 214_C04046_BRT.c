#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>



void quicksort(int *A, int L, int H)
{
    int i = L;
    int j = H;
    int key = A[(L+H)/2];
    while (i <= j)
    {
        while (A[i] < key) i++;
        while (A[j] > key) j--;
        if (i <= j)
        {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i++;
            j--;
        }
    }
    if (L<j) quicksort(A,L,j);
    if (i<H) quicksort(A,i,H);
}


int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n, A[100001];
        scanf("%d",&n);
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf("%d",&A[i]);
        }
        quicksort(A,0,n-1);
        int min = 2e9, count = 0;
        for ( int i = 0 ; i < n-1 ; i++ )
        {
            if (A[i+1] - A[i] < min)
            {
                min = A[i+1] - A[i];
                count = 1;
            }
            else if (A[i+1] - A[i] == min) count++;
        }
        printf("%d %d\n",min, count);
    }
}