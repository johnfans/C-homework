#include <stdio.h>

int main()
{	unsigned int u,v;
	char c1,c2;

	scanf("%o,%o",&u,&v);
	getchar();
	scanf("%c,%c",&c1,&c2);
	printf("\n");
	printf("%o,%o\n",u,v);
	printf("dec=%d,oct=%o,hex=%x,un=%u\n",u,u,u,u);
	printf("c1=%c,c2=%c\n",c1,c2);
}