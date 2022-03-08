#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	int i= 0;
	while  ( *(str + i)  != '\0' ) {
		i++;
	}
	return i;
}

void equality_check(const char *str)
{
	int i = 0;
	int a;
	int lungime = my_strlen(str);
	while  ( *(str + i) != '\0' ) {
		a = i+ (1<<i);
		if ( a >= lungime )
			a = a % lungime; 
		if ( !( *(str + i) ^ *(str + a) ) )
			printf( "%p\n", &str);
		i++;
	}
}

int main(void)
{
	char *str = "ababababacccbacbacbacbacbabc";
	int lungime = my_strlen( str );
	printf( "%d\n", lungime );
	equality_check(str);
	return 0;
}

