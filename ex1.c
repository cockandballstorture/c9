#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(void) {
	FILE *f;
	char a[20];
	char x[20];
	f=fopen("C:cr.txt","w+");
	scanf("%19s", x);
	fprintf(f, "%s",x);
	fclose(f);
	f=fopen("C:\cr.txt","r");
	fgets(a, 20, f);
	printf("%s", a);
	fclose(f);
}
