#include <stdio.h>

int main(void){
	char input[32] = {"jU5t_a_s1mpl3_an4gr4m_4_u_1fb380"};
	char output[32] = {""};
	int i;

	for (i=0; i<8; i++){
		output[i] = input[i];
	}
	for (; i<16; i++){
		output[i] = input[23-i];
	}
	for (; i<32; i+=2){
		output[i] = input[46-i];
	}
	for (i=31; i>=17; i-=2){
		output[i] = input[i];
	}

	for (i=0; i<32; i++){
		printf("%c", output[i]);
	}
	printf("\n");

	return 0;
}
