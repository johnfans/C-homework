#include <stdio.h>
int main()
{	char L;
	scanf("%c",&L);
	if (L=='a' || L=='A') printf("90-100");
	else if (L=='a' || L=='A') printf("80-89");
	else if (L=='b' || L=='B') printf("70-79");
	else if (L=='c' || L=='C') printf("60-69");
	else if (L=='d' || L=='D') printf("0-59");
	else printf("error");
	/*  
}