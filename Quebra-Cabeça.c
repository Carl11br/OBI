#include <stdio.h>
#include <string.h>

int esq[200001];
int dir[100001];
char letras[100001];
char palavra [100001];
int n;

void montarString(int e, int i)
{
	if( i >= n) return;
	palavra[i] = letras[esq[e]];
	montarString(dir[esq[e]], ++i);
}
int main()
{
	
	int e, d;
	int i;
	char c;

	memset(esq, -1, sizeof(esq));
	memset(dir, -1, sizeof(dir));
	memset (letras, 0, sizeof(letras));
	

	scanf("%d", &n);	
	for (i = 0; i < n; i++)
	{
		scanf("%d %c %d", &e, &c, &d);
		esq[e] = i;
		dir[i] = d;
		letras[i] = c;
	}
	montarString(0,0);
	printf( "%s", palavra);


	return 0;
}