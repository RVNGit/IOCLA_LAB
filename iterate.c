#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

void oneByOne(int *v) {
	unsigned char *p = (unsigned char*)v;
	for (unsigned int i = 0; i < sizeof(int) ; i++) {
		printf("%p %x\n", p, *p);
		p++;
	}
}

void twoByTwo(int *v) {
	unsigned short *p = (unsigned short*)v;
	for (unsigned int i = 0; i < sizeof(int) / sizeof(short); i++) { 
		printf("%p %x\n", p, *p);
		p++;
	} 
}

void fourByFour(int *v)
{
	unsigned int *p = (unsigned int*)v; 
	printf("%p %x\n", p, *p);
}

int main() {
    	int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
	int length = sizeof(v) / sizeof(int);
    	for( int  i = 0; i < length; i++) {
			printf("%p %x\n", v + i, *(v + i));
    	}
	printf("\n");
	for( int  i = 0; i < length; i++) {
			oneByOne(v + i);
	}
	printf("\n");
	for( int  i = 0; i < length; i++) {
			twoByTwo(v + i);
	}
	printf("\n");
	for( int  i = 0; i < length; i++) {
			fourByFour(v + i);
	}
    	return 0;
}
