#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>



int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        if (abs(x2-x1)==(abs(y2-y1)))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}