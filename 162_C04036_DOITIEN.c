/*??    _                        
        \`*-.                    
         )  _`-.                 
        .  : `. .                
        : _   '  \               
        ; *` _.   `*-._          
        `-.-'          `-.       
          ;       `       `.     
          :.       .        \    
          . \  .   :   .-'   .   
          '  `+.;  ;  '      :   
          :  '  |    ;       ;-. 
          ; '   : :`-:     _.`* ;
 [bug] .*' /  .*' ; .*`- +'  `*' 
       `*-*   `*-*  `*-*'        ??*/

#include<stdio.h>

int main()
{
    int A[]={1,2,5,10,20,50,100,200,500,1000};
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int count = 0;
        for ( int i=9 ; i>=0 ; i-- )
        {
            if (n/A[i]>0)
            {
                int m;
                m = n/A[i];
                n = n - A[i]*m;
                count+=m;
            }
        }
        printf("%d\n",count);
    }
}
