#include <stdio.h>
#include <stdlib.h>
void main(void) {
	FILE *f;
	char a[20];
	f=fopen("C:cr.txt","w+");
	fprintf(f, "what");
	fclose(f);
	f=fopen("C:\cr.txt","r");
	fgets(a, 20, f);
	printf("%s", a);
	fclose(f);
}

