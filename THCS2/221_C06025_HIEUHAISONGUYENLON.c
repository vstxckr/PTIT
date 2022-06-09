#include<stdio.h>
#include<string.h>

void solve()
{
	char x[1005] = {}, y[1005] = {}, res[1005] = {};
	gets(x), gets(y);
	int len_x = strlen(x), len_y = strlen(y);
	
	if (!strcmp(x,y))
	{
		printf("0\n");
		return ;
	}
	
	if (len_x < len_y || (len_y == len_x && strcmp(x,y) < 0))
	{
		char temp[1005]; strcpy(temp, x), strcpy(x,y), strcpy(y, temp);
		int t1 = len_x; len_x = len_y, len_y = t1;
	}
	
	int resp_y, carry = 0, sub;
	for ( int i = len_x -1 ; i >= 0 ; i-- )
	{
		resp_y = (len_y > 0 ? (y[--len_y] - 48) : 0);
		sub = x[i] - 48 - resp_y - carry;
		if (sub < 0)
		{
			carry = 1;
			sub += 10;
		}
		else
			carry = 0;
		res[i] = sub + 48;
	}
	
	char is_va = 0;
	for ( int i = 0 ; i < len_x ; i++ )
	{
		if (res[i] != '0' || is_va)
		{
			printf("%c",res[i]);
			is_va = 1;
		}
	}
	printf("\n");
}

int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while (t--)
	{
		solve();
	}
}