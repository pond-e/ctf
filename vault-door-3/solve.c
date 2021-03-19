#include <stdio.h>
int main(void){
	char befpa[32] = {"jU5t_a_sna_3lpm18gb41_u_4_mfr340"};
	char aftpa[32]={""};
	int i;

	for (i=0; i<8; i++){
		aftpa[i] = befpa[i];
	}
	for (; i<16; i++){
		aftpa[23-i] = befpa[i];
	}
	for (; i<32; i+=2){
		aftpa[46-i] = befpa[i];
	}
	for (i=31; i>=17; i-=2){
		aftpa[i] = befpa[i];
	}

	for (i=0; i<32; i++){
		printf("%c", aftpa[i]);
	}
	printf("\n");

	return 0;
}
