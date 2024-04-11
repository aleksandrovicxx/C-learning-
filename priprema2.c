#include <stdio.h>
#include <ctype.h>
#define MAX 30
#define N 32
#define MASKA 0x0f

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
	//--------------------------------------
	//int m, n, i, j;

	//printf("Unesite dva broja u opsegu od 3 do 10\n");
	//scanf("%d %d", &m, &n);
	//if((m > 3) && (m < 10)){
	//	if((n > 3) && (n < 10)){
	//		printf("%d je manji broj\n", (m<n) ? m : n);
	//		for(i = 0; i < n; i++){
	//			for(j = 0; j < m; j++){
	//				printf("*");
	//			}
	//			printf("\n");
	//		}
	//	} else {
	//		printf("%d nije u opsegu od 3 do 10\n", n);
	//	}
	//} else {
	//	printf("%d nije u opsegu od 3 do 10\n", m);
	//}
	//--------------------------------------
	/*

Задатак 1.
Написати програм на језику С који за цео број n у опсегу од 1 до 1000, учитан преко тастатуре,
исписује нa екрану број цифара у децималном облику задатог броја као и њихову суму.
*/

	/*int n, suma=0, brojcifara=0;

	do{
		printf("Unesite broj od 0 do 1000\n");
		scanf("%d", &n);
	}while(n <0 || n> 1000);

	while(n){
		suma += n%10;
		n = n/10;
		brojcifara++;
	}
	printf("Suma: %d \n Broj cifara: %d\n", suma, brojcifara);*/
	/*
Задатак 2.
Написати програм на језику С који чита са тастатуре позитиван цео број n и приказује га на екрану
у: децималном, хексадецималном и бинарном облику.*/
	/*int n, i;
	do {
		printf("Unesite pozitivan ceo broj: \t");
		scanf("%d", &n);	
	} while(n <=0 || (n / n!=1));

	printf("Decimalni: %d\n",n);
	printf("Heksadecimalni: %x\n",n);
	printf("binarni:");
	for(i = 1; i <= N; i++){
		if(n & (1<<(N-i))){
			putchar('1');
		}else{
			putchar('0');
		}

	}*/
	/*
Задатак 3.
Написати програм на језику С који чита са тастатуре позитиван цео број n и приказује на екрану
редни број бита са првим и последњим појављивањем јединице у бинарном облику (1. бит је бит
најмање тежине), као и укупан број јединица у бинарном облику задатог броја. */

	//int broj, i, brojJedinica = 0, poslednjaJedinica=0, prvaJedinica = 0;

	//printf("Unesite pozitivan ceo broj: \t");
	//scanf("%d", &broj);

	//for(i=0; i<=N; i++){
	//	if(broj & (1<<(i-1))){ //i-1 ZATO STO SE i UVECAVA U SVAKOJ ITERACIJI
	//		brojJedinica++;
	//		poslednjaJedinica = i;
	//		if(!prvaJedinica){
	//			prvaJedinica = i;
	//		}
	//	}
	//}
	//printf("Broj jedinica: %d\n", brojJedinica);
	//printf("Poslednja jedinica je na mestu  %d. bita\n", poslednjaJedinica);
	//printf("Prva jedinica je na mestu  %d. bita\n", prvaJedinica);
	//										 


	/*
Задатак 4.
Написати програм на језику С који чита са тастатуре два цела броја x и y (x>0 и 1≤y<=9) и
приказује на екрану редни број сваког појављивања бинарног облика другог задатог броја у
бинарном облику првог броја x (1. бит је бит најмање тежине) и укупан број ових појављивања.*/
	int x, y, i, br_kombinacija=0;
	do{ 
		printf("Unesite x i y:\n");
		scanf("%d%d", &x, &y);
	}while(x<=0 || y<1 || y>9);
	for(i=1; i<=N;i++){ // OVDE i ITERIRA OD 1 DO 32
		if((x & MASKA) == y){ // MASKA JE 1111, ONA SE MNOZI SA BROJEM, I AKO JE REZULTAT = Y: \|/
			printf("\nBinarna kombinacija broja y na mestu %d. bita u broju x", i); // ISPISUJE SE PORUKA
			br_kombinacija++;// POVECAVA SE BROJ KOMBINACIJA ODNOSNO BROJ POKLAPANJA
		}
		x=x>>1; // OVDE SE NAS BROJ POMERA ZA JEDNO MESTO UDESNO, KAKO BI SE UPOREDJIVALI NAREDNI BITOVI
	}
	printf("\nBroj pojavljivanja kombinacija: %d\n", br_kombinacija);

/*Задатак 5.
Написати програм на језику С који приказује на екрану n редова по n знакова, при чему се знак и
број n (2≤n≤10) задају преко тастатуре.
Задатак 6.
Написати програм на језику С који приказује на екрану оквир од знака * у n редова (оквир чија је
свака страна састављена од n знакова *), вредност броја n (2≤n≤10) се задаје преко тастатуре.
Задатак 7.
Написати програм на језику С који црта на екрану троугао oд знака задатог преко тастатуре у n
редова (број n≤10 чита са тастатуре), на 4 начина као на слици, нпр. за n=4:
а) * b) ****
 ** ***
 *** **
**** *
c) * d) *******
 *** *****
 ***** ***
******* *
Задатак 8.
Написати програм на језику С који приказује на екрану текст учитан са тастатуре (до знака EOF)
тако што сваки знак замењује првим следећим по ASCII табели (изузетак је знак за прелаз у нови
ред, који остаје неизмењен) и приказује на екрану број ових замена.
Задатак 9.
Написати програм на језику С који чита са тастатуре један ред текста и приказује на екрану сваку
реч задатог текста у посебном (реч је низ знакова између два бела знака: ‘ ’ или ‘\t’, а програм
треба да елиминише поновљене беле знакове, ако их има).
Задатак 10.
Написати програм на језику С који чита са тастатуре текст до знака тачка (.), одређује и приказује
на екрану: број децималних цифара у задатом тексту, средњу вредност свих ових цифара и поруку
о томе да ли текст међу узастопним цифрама има међусобно једнаких или не.
*/	
}
