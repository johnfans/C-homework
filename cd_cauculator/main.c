#include <stdio.h>
#include "input.h"
#include "cauculate.h"
#include "mycmd.h"

int main()
{	char c[1000],b[1000]={0};
	double a[1000]={0};
	int len=-1,lenm=-1,judge=0;
while(1)
{	len=-1;lenm=-1;judge=0;
	while (judge==0 || len<0)
	{	clear(a,b,lenm+1);
		print_cal();
		gotoxy(52,6);
		gets(c);
		lenm=len=trans(c,a,b);
		if(len<0)
		{	error_print(c);
			continue;
		}
		len=sign(a,b,len);
		if(len<0)
		{	error_print(c);
			continue;
		}
		judge=judger(b,len);
		if(judge==0)
		{	error_print(c);
			continue;
		}
	}

	while(len>0)
		len=cauculate0(a,b,len);
	if(len==-1)
		error_print(c);
	else
		right_print(c,a[0]);
}
}