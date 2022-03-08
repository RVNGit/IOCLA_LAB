#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mirror(char *s)
{	
	int lungime = strlen (s);
	int i = 0;
	char aux;
	while ( i < lungime/ 2 + 1) {
		aux = *(s + i);
		*(s + i) = *(s + lungime - i - 1);
		*(s + lungime - i - 1) =  aux; 
		i++; 
	}	
	printf("%s", s);
}

int main()
{
	char str[100] = "qwerty";
	mirror(str);
	return 0;
}

