#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void comprchar(char a[1001],char b[1001],int lena, int lenb)
{
    char temp[1001]={'\0'};
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

void hieu(char a[1001],char b[1001],int lena, int lenb)
{
    if (lena>lenb)
    {
        comprchar(a,b,lena,lenb);
        lenb=lena;
    }
    else
    {
        comprchar(b,a,lenb,lena);
        lena=lenb;
    }
    int carry=0;
    char result[1001]={'\0'};
    for ( int i=lena-1 ; i>=0 ; i-- )
    {
        int s=0;
        s=s+a[i]-b[i]-carry;
        if (s<0)
        {
            s+=10;
            carry=1;
        }
        else
            carry=0;
        result[i]=s+48;
    }
    bool toggle=false;
    for ( int i=0 ; i<lena ; i++ )
    {
        if (result[i]!='0' && toggle==false || toggle==true)
        {
            printf("%c",result[i]);
            toggle=true;
        }
    }
    if (toggle==false)
    {
        printf("0");
    }
    printf("\n");
}

void luachon(char a[1001],char b[1001],int lena,int lenb)
{
    if (lena>lenb)
    {
        hieu(a,b,lena,lenb);
    }
    else
    {
        if (lena==lenb)
        {
            if (a[0]>b[0])
                hieu(a,b,lena,lenb);
            else
                hieu(b,a,lenb,lena);
        }
        else
            hieu(b,a,lenb,lena);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char a[1001]={'\0'},b[1001]={'\0'};
        scanf("%s %s",&a,&b);
        int lena=strlen(a),lenb=strlen(b);
        luachon(a,b,lena,lenb);
    }
}