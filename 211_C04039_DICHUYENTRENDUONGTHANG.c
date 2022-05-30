#include<stdio.h>
#include<string.h>
#include<math.h>

void solve(int n)
{
    if (n == 1) { printf("1\n"); return ;}
    if (n == 2) { printf("2\n"); return ; }
    if (n == 3 || n == 4) {printf("3\n"); return ;}
    if (n == 5 || n == 6) {printf("4\n"); return ;}
    if (n == 7 || n == 8 || n == 9) { printf("5\n"); return ;}
    int lower_bound = sqrt(n);
    if (lower_bound*lower_bound == n)
        lower_bound = sqrt(n) - 1;
    int upper_bound = lower_bound + 1;
    int num_step = lower_bound*2;
    int middle_bound = lower_bound*(lower_bound+1);
    if ( n <= middle_bound)
    {
        printf("%d\n",num_step);
    }
    else
    {
        printf("%d\n",num_step+1);
    }
}

int main()
{
    int x,y;
    while( scanf("%d %d", &x, &y) != -1)
    {
        solve(abs(x-y));
    }
}