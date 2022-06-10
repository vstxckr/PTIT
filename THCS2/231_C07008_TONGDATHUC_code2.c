#include<stdio.h>
#include<string.h>

int itoa(char *s, int len_s)
{
	int sum = 0;
	for ( int i = 0 ; i < len_s ; i++ )
	{
		sum = sum*10 + (s[i]-48);
	}
	return sum;
}

int breakstring(char *s, int *A, int *B, int max, int *min)
{
	char *tok = strtok(s, "*x^+ ");
	while (tok != NULL)
	{
		int coso = itoa(tok, strlen(tok));
		tok = strtok(NULL, "*x^+ ");
		int mu = itoa(tok, strlen(tok));
		A[mu] ++;
		B[mu] = coso;
		max = (mu > max ? mu : max);
		if (mu < (*min)) (*min) = mu;
		tok = strtok(NULL,"*x^+ ");
	}
	return max;
}

void solve()
{
	char x[10002] = {}, y[10002] = {};
	int A[10002] = {}, B[10002] = {}, C[10002] = {}, max = -1e9, min = 1e9;
	
	gets(x); gets(y);
	
	max = breakstring(x, A, B, max, &min);
	max = breakstring(y, A, C, max, &min);
	
	for ( int i = max ; i > min ; i-- )
	{
		if (A[i])
		{
			printf("%d*x^%d + ", B[i]+C[i] , i);
		}
	}
	printf("%d*x^%d\n",B[min]+C[min],min);
}

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	while (t--)
	{
		solve();	
	}	
}