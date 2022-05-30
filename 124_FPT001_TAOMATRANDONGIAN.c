#include <stdio.h>
#include <string.h>

int main()
{
    int A[101][101] = {{0}};
    int n;
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i++ )
    {
        int count = 1;
        for (int j = i+1 ; j < n ; j++ )
        {
            A[i][j]=count;
            count++;
        }
    }
    for (int i = 0 ; i < n ; i++ )
    {
        for (int j = 0 ; j < n ; j++ )
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
