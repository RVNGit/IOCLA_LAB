#include <stdio.h>

void rotate_left(int *number, int bits)
{
	int retin_bit;
	bits %= 32; 
	while (bits) {
		///retinem cel mai semnificativ bit 
		retin_bit = *number >> 31;
		retin_bit = retin_bit & 1;

		///shiftam numarul cu un bit la stanga si pe ultima pozitie punem bitul obtinut 
		*number = *number << 1;
		*number = *number | retin_bit;

		bits--;
	}
	printf("%d\n", *number);
}

 void rotate_right(int *number, int bits)
{
	int retin_bit;
	bits %= 32;
	while (bits) {
		///retinem cel mai putin semnificativ bit
		retin_bit = *number & 1;
		
		///shiftam numarul cu un bit la dreapta si pe prima pozitie punem bitul obtinut
		*number = (*number >> 1) & (~(1 << 31));
		
		*number = *number | (retin_bit << 31);
		
		bits--;	
	}
	printf("%d\n", *number);
}

int main()
{
	int number = 32;
	rotate_left( &number, 38);
	rotate_right( &number, 36);
	return 0;
}

