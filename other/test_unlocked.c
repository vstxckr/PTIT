/*
	unlocked put & get char code
*/
#include<stdio.h>

void itoa(char *source, int *dest, int length)
{
	for ( int i = 0 ; i < length ; i++ )
	{
		*dest = (*dest) * 10 + source[i] - 48;
	}
}

int atoi(char *dest, int source)
{
	int i = 0;
	while (source)
	{
		dest[i] = source % 10 + 48;
		source /= 10;
		i++;
	}

	dest[i+1] = '\0';

	for ( int j = 0 ; j < i/2 ; j++ )
	{
		dest[i-j-1] ^= dest[j], dest[j] ^= dest[i-j-1], dest[i-j-1] ^= dest[j];
	}

	return i+1;
}

void cout(char *source, int length)
{
	for ( int j = 0 ; j < length ; j++ )
	{
		putchar_unlocked(source[j]);
	}
}

int cin(char *dest, int max)
{
	char ch;
	int i;
	for ( i = 0 ; (i < 81) && (ch = getchar_unlocked()) != EOF
							   && (ch != '\n') ; i++ )
	{
		dest[i] = ch;
	}
	dest[i] = '\0';
	return i;
}

int main()
{
	char buffer[20] = {};
	char temp[20] = {};
	char buffout[20] = {};
	int len_buff, len_buffout, n = 0;

	len_buff = cin(buffer, 20);
	itoa(buffer, &n, len_buff);

	n <<= 1;

	len_buffout = atoi(buffout, n);

	cout(buffout, len_buffout);
}
