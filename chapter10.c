#include <stdio.h>

/*chapter10-1 Example:

unsigned char ResetBit(unsigned char dest_data, unsigned char bit_num)
{
	if (bit_num < 8)
		dest_data = dest_data & ~(0x01 << bit_num);
		return dest_data;
}

int main()
{
	unsigned char lamp_state = 0x7F;
	printf("%X->", lamp_state);
	lamp_state = ResetBit(lamp_state, 3);
	printf("%X\n", lamp_state);
}*/

/*chapter 10-2 Example:
unsigned char SetBit(unsigned char dest_data, unsigned char bit_num)
{
	if (bit_num < 8)
		dest_data = dest_data | (0x01 << bit_num);
	return dest_data;
}

int main()
{
	unsigned char lamp_state = 0x77;
	printf("%X->", lamp_state);
	lamp_state = SetBit(lamp_state, 3);
	printf("%X\n", lamp_state);
}*/

/*chapter10-3 Example:

unsigned char Bitget(unsigned char dest_data, unsigned char bit_num)
{
	unsigned char bit_state = 0;

	if (bit_num < 8) {
		bit_state = dest_data & (0x01 << bit_num);
		bit_state = bit_state >> bit_num;
	}
	return bit_state;
}

int main() 
{
	unsigned char lamp_state = 0x75;
	unsigned char bit_state;
	int i;

	printf("%X -> ", lamp_state);
	
	for (i = 0; i < 8; i++) {
		bit_state = Bitget(lamp_state, 7 - i);
		printf("%d", bit_state);
	}
	printf("\n");
}*/

/*chapter10-4 Example:

unsigned char ModifyBit(unsigned char dest_data, unsigned char bit_num, char value)
{
	unsigned char mask;
	mask = 0x01 << bit_num;

	if (bit_num < 8) {
		if (value == 1)
			dest_data = dest_data | mask;
		else
			dest_data = dest_data & ~mask;

		return dest_data;
	}
}

int main()
{
	unsigned char lamp_state = 0x7F;
	printf("%X->", lamp_state);

	lamp_state = ModifyBit(lamp_state, 3, 0);
	printf("%X", lamp_state);

	lamp_state = ModifyBit(lamp_state, 3, 1);
	printf("->%X\n", lamp_state);
}*/

