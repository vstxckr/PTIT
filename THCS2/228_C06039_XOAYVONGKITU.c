#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

#define min(a,b) a < b ? a : b

int xoay(char *x, char *y, int n)
{
    if (!strcmp(x,y)) return 0;
    int count = 0;
    char temp[52];
    strcpy(temp,y);
    for ( int i = 0 ; i < n ; i++ )
    {
        char j = temp[0];
        strcpy(temp,temp+1);
        temp[n-1] = j;
        count++;
        if ( !strcmp(temp,x) )
        {
            return count;
        }
    }
    return -1;
}

void solve(int n)
{
    char x[50][52];
    int lens;
    for ( int i = 0 ; i < n ; i++ )
    {
        gets(x[i]);
    }
    lens = strlen(x[0]);
    int best = 2e9;
    bool nohope = false;
    for ( int i = 0 ; i < n ; i++ )
    {
        int max = 0;
        for ( int j = 0 ; j < n ; j++ )
        {
            if ( j != i )
            {
                int temp = xoay(x[i],x[j],lens);
                if (temp == -1)
                {
                    nohope = true;
                    break;
                }
                else
                {
                    max += temp;
                }
            }
        }
        if (!nohope) 
            best = min(best, max); 
        else
            break;
    }
    if (!nohope)
        printf("%d\n",best);
    else
        printf("-1\n");
}


int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    solve(n);
}