#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int find_redundant_bits(int size_of_mes)
{
    int i = 1;
    while (pow(2,i)-i < size_of_mes+1)
        i++;
    
    return i;
}

int find_Ri(int n, int vt, char *res, int lenres)
{
    int dem = (vt+1 == 1 ? 0 : 1);
    int num_bits = 0;
    bool is_read = true;

    for ( int i = (vt+1 == 1 ? vt+2 : vt+1) ; i < lenres ; i++ )
    {
        if (dem == n)
        {
            is_read = !is_read;
            dem = 0;
        }
        if (is_read)
        {
            if (res[i] == '1')
                num_bits++;
            dem++;
        }
        else
            dem++;
    }

    return num_bits;
}


char *solve(char *s, unsigned int latch)
{
    static char res[100] = {'\0'};

    int lens = strlen(s);
    int r = 0;
    int j = lens-1;
    int lenres = find_redundant_bits(lens) + lens;

    for ( int i = 0 ; i < lenres ; i++ )
    {
        if (i+1 != pow(2,r))
        {
            res[i] = s[j];
            j--;
        }
        else
        {
            res[i] = '0';
            r++;
        }
    }

    r = 0;

    for ( int i = 0 ; i < lenres ; i++ )
    {
        if (i+1 == pow(2,r))
        {
            int nums_bit = find_Ri(pow(2,r),i,res,lenres);
            res[i] = 48 + ( latch ? !(nums_bit & 1) : (nums_bit & 1) );
            r++;
        }
    }

    strrev(res);
    return res;
}


int main()
{
    char s[100] = {'\0'};
    unsigned int latch;
    printf("Nhap m: ");
    scanf("%s",&s);
    printf("Odd - 1 / Even - 0: ");
    scanf("%u",&latch);
    printf("Your Hamming Code: %s",solve(s,latch));
}
