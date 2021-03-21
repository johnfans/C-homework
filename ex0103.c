#include <stdio.h>

int maxx(int x,int y,int z)
{	int r;
	if (x>=y)
		r=x;
	else
		r=y;
	if (z>r)
		r=z;
	return r;
}

int main()
{	int a,b,c,r;
	scanf("%d%d%d",&a,&b,&c);
	r=maxx(a,b,c);
	printf("max is %d\n",r);
	return 0;
}