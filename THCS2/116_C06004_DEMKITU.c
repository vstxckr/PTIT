#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>


void xuli()
{
    char x[1000]={};
    gets(x);
    int lenx=strlen(x);
    int demchucai=0, demchuso=0,demkytukhac=0;
    for ( int i=0 ; i<lenx ; i++ )
    {
        if (x[i]>='A' && x[i]<='Z' || x[i]>='a' && x[i]<='z')
            demchucai++;
        else if (x[i]>='0' && x[i]<='9')
            demchuso++;
        else    
            demkytukhac++;
    }
    printf("%d %d %d",demchucai,demchuso,demkytukhac);
}


int main()
{
    xuli();
}