#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int find(char a){
    char v[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i;
	for (i=0;i<25;i++){
		if(a==v[i]){
			return(i);
		}
	}
}
char cz(char a,int w){
	char v[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	if((a >= '0') && (a <='9'))
	{
		a=a+w;
		}
	else{
		 a=find(a)+w;
		 a=a%25;
		 a=v[a];
		}
	return(a);
}
void main(void) {
	FILE *f;
	char a[30];
	char x[30];
	int w;
	int i;
	int q=0;
	f=fopen("C:cr.txt","r");
	fgets(x, 29, f);
	scanf("%d", &w);
	 for (i = 0; x[i] != '\0'; i++)
	  {
	    q++;
	  }
	for (i=0;i<q;i++){
		x[i]=cz(x[i],w);
	}
	fprintf(f, "%s",x);
	fclose(f);
}
