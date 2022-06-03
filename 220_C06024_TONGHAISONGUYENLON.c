#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void cmprchar(char a[100],char b[100],int lena, int lenb)
{
    char temp[100]={'\0'};
    for ( int i=0 ; i<=lena-lenb-1 ; i++ ) 
    {
        temp[i]='0';
    }
    for ( int i=lena-lenb ; i<lena ; i++ )
    {
        temp[i]=b[i-lena+lenb];
    }
    strcpy(b,temp);
}

char *tong(char a[100],char b[100])
{
    int lena=strlen(a);
    int lenb=strlen(b);
    if (lena>lenb)
    {
        cmprchar(a,b,lena,lenb);
        lenb=lena;
    }
    if (lenb>lena)
    {
        cmprchar(b,a,lenb,lena);
        lena=lenb;
    }
    int carry=0;
    char result[100]={'\0'};
    for ( int i=lena-1 ; i>=0 ; i-- )
    {
        int s=0;
        s+=a[i]+b[i]-48*2+carry;
        if (s>9)
        {
            carry=1;
            s-=10;
        }
        else
            carry=0;
        result[i]=s+48;
    }
    if (carry==1)
    {
        char temp[100]={'\0'};
        temp[0]='1';
        for ( int i=1 ; i<=lena ; i++ )
        {
            temp[i]=result[i-1];
        }
        strcpy(result,temp);
    }
    printf("%s\n",result);
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char a[100]={'\0'},b[100]={'\0'};
        scanf("%s %s",&a,&b);
        tong(a,b);
    }
}