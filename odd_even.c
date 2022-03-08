#include <stdio.h>
#include <stdlib.h>

void print_binary( int number ) {
	int n = 0;
	char str[32];	
	unsigned int bin = (unsigned int)number;
	while (bin) {
		if( bin & 1) 
			*(str + n) = 1;
		else
			*(str + n) = 0;
		bin = bin >> 1;
		n++;
	}
	while (n) {
		printf("%d", *(str + n - 1));
		n--;
	}
	printf("\n");
}

void check_parity(int *numbers, int n) {
	int i = 0;
	while ( i < n) {
		if (*(numbers + i) % 2 ^ 0)
			printf( "%x\n", *(numbers + i) ); 
		else
			print_binary( *(numbers+i )); 
		i++;
	} 
}

int main()
{
	int numbers[5] = {214, 71, 84, 134, 86};
	check_parity( numbers, 5);
}

