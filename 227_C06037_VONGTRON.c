#include<stdio.h>
#include<string.h>
int main()
{
    int A[100], count=0, C[100];
    char s[100];
    memset(s,0,sizeof(s));
    memset(A,0,sizeof(A));
    memset(C,0,sizeof(C));
    scanf("%s",&s);
    int len_s=strlen(s);
    for ( int i=0 ; i<len_s-1 ; i++ )
    {
        int j=i+1;
        if (A[(int)s[i]]==0)
        {
            memset(C,0,sizeof(C));
            while (s[i]!=s[j])
            {
                if (C[s[j]]==0 && A[s[j]] != 1) 
                {
                    count++;
                    C[s[j]] = 1;
                }
                else if (C[s[j]]==1 && A[s[j]] != 1)
                {
                    count--;
                }
                j++;
            }
            A[s[i]] = 1;
        }
    }
    printf("%d",count);
}