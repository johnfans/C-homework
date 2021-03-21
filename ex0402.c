#include <stdio.h>
int main()
{	double x,y,z;
	scanf("%lf%lf%lf",&x,&y,&z);
	if (x<y)
	{	if (z<=x) printf("%lf %lf %lf",z,x,y);
		if (z>x && z<y) printf("%lf %lf %lf",x,z,y);
		if (z>=y) printf("%lf %lf %lf",x,y,z);
	}
	if (x>=y)
	{	if (z<=y) printf("%lf %lf %lf",z,y,x);
		if (z>y && z<x) printf("%lf %lf %lf",y,z,x);
		if (z>=x) printf("%lf %lf %lf",y,x,z);
	}

}