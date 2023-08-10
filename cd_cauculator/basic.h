//将数组adr2往后移到adr1处
void movenum(double a[],int adr1,int adr2,int l)
{	int i,j;
	for(i=adr2,j=adr1;j<=l;i++,j++)
		a[j]=a[i];
}

void movechar(char a[],int adr1,int adr2,int l)
{	int i,j;
	for(i=adr2,j=adr1;j<=l;i++,j++)
		a[j]=a[i];
}

void clear(double a[], char b[],int len)
{	for(;len>=0;len--)
	{	a[len]=0;
		b[len]=0;
	}
}