#include <stdio.h>
#define MAX 1000

main(){
	unsigned short x, n;

	printf("\n Unesite jedan pozitivan broj u heksadecimalnom obliku");
	printf("\n (Opseg broja do 0xffff):\t");
	scanf("%x", &x);

	printf("\n Unesite redni broj  bita koji se ispituje (od 0 do 16): ");
	scanf("%d", &n);

	if(x & (1 << (n-1)))
		printf("\n %d. bit ima vrednost 1\n", n);
	else
		printf("\n %d. bit ima vrednost 0\n", n);
	x ^=(1<<(n-1));
		printf("\n Vrednost %d. bita zadatog podatka je promenjena \n", n);
		printf("\n Nova vrednost %d. bita je :%#x\n\n", x);
}
