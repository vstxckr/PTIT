#include<stdio.h>
#include<string.h>
int main()
{
    char s[100005];
    int A[256],B[100005];
    memset(A,0,sizeof(A));
    memset(B,0,sizeof(B));
    memset(s,0,sizeof(s));
    scanf("%s",&s);
    int len_s=strlen(s), start=0; 
    for ( int i=0 ; i<=len_s-1 ; i++ )
    {
        A[(int)s[i]]++; 
    }
    int dem=0;
    for ( int i=255 ; i>=65 ; i-- )
    {
        if (A[i]!=0)
        {
            dem++;
            A[dem]=i;
        }
    }
    dem=1;
    int temp;
    while (start<=len_s-1)
    {
        if (A[dem]==(int)s[start]) 
        {
            B[start]++;
            temp=start;
        }
        if (start==len_s-1)
        {
            start=temp;
            dem++;
        }
        start++;
    }
    for ( int i=0 ; i<=len_s-1 ; i++ )
    {
        if (B[i]!=0)
        {
            printf("%c",s[i]);
        }
    }
}