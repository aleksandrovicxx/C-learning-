#include <stdio.h>
#include <ctype.h>
#define MAX 30

main() {
	/*int c, nc=0;
	while ((c=getchar()) != EOF)
		if(c==' ' || c=='\t')
			putchar('\n');
		else
			putchar(c);*/
	//--------------------------------------
	/*char ime[MAX];
	gets(ime);
	printf("\n Zdravo %s.", ime);*/
	//--------------------------------------
	/*int a, b, c;
	printf("Unesite 3 broja");
	scanf("%d:%d:%d", &a, &b, &c);
	printf("tri broja su: a=%d, b=%d, c=%d.", a, b, c);*/
	//--------------------------------------
	/*char slovo = 'A';
	printf("%c\n", slovo);
	printf("%d\n", slovo);
	printf("%o\n", slovo);
	printf("%x\n", slovo);*/
	int m, n, i, j;

	printf("Unesite dva broja u opsegu od 3 do 10\n");
	scanf("%d %d", &m, &n);
	if((m > 3) && (m < 10)){
		if((n > 3) && (n < 10)){
			printf("%d je manji broj\n", (m<n) ? m : n);
			for(i = 0; i < n; i++){
				for(j = 0; j < m; j++){
					printf("*");
				}
				printf("\n");
			}
		} else {
			printf("%d nije u opsegu od 3 do 10\n", n);
		}
	} else {
		printf("%d nije u opsegu od 3 do 10\n", m);
	}

	
}