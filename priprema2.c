main() {
	int pom, broj, n=0;

	printf("Unesite bilo koji ceo broj");
	scanf("%d", &broj);
	pom = broj;

	while(broj != 0){
		broj = broj/10;
		n++;
	}
	printf("%d ima %d cifara", pom, n);
}