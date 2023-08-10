
#include <math.h>

//寻找一个最内层括号
//返回-1代表括号有问题，0代表正常，1代表已不存在括号
int quote(char b[],int l,int section[2])
{	int i,t1,t2;
	for(i=0;i<=l;i++)
	{	if(b[i]==')')
			return -1;
		if(b[i]=='(')
			for(;i<=l;i++)
			{	if(b[i]=='(')
					t1=i;
				if(b[i]==')')
				{	t2=i;
					section[0]=t1;
					section[1]=t2;
					return 0;
				}
			}
	}
	section[0]=0;
	section[1]=l;
	return 1;
}



//计算乘除并替换
void cauculate2(double a[],char b[],int p[2])
{	int i;
	for(i=p[0];i<=p[1];i++)
	{	if(b[i]=='/' )
		{	a[i-1]=a[i-1]/a[i+1];
			movenum(a,i,i+2,p[1]);
			movechar(b,i,i+2,p[1]);
			i--;
			p[1]-=2;
		}
		if(b[i]=='*')
		{	a[i-1]=a[i-1]*a[i+1];
			movenum(a,i,i+2,p[1]);
			movechar(b,i,i+2,p[1]);
			i--;
			p[1]-=2;
		}
	}
}

//计算加减并替换
void cauculate1(double a[],char b[],int p[2])
{	int i;
	for(i=p[0];i<=p[1];i++)
	{	if(b[i]=='+' )
		{	a[i-1]=a[i-1]+a[i+1];
			movenum(a,i,i+2,p[1]);
			movechar(b,i,i+2,p[1]);
			i--;
			p[1]-=2;
		}
		if(b[i]=='-')
		{	a[i-1]=a[i-1]-a[i+1];
			movenum(a,i,i+2,p[1]);
			movechar(b,i,i+2,p[1]);
			i--;
			p[1]-=2;
		}
	}
}

//算好一个括号内的数据并替换（迭代后可得出最终结果）
int cauculate0(double a[],char b[],int len)
{	int judge=0,p[2],p1,p2;
	judge=quote(b,len,p);
	p1=p[0];p2=p[1];
	if (judge==-1)
		return -1;
	cauculate2(a,b,p);
	cauculate1(a,b,p);
	if(p[1]-p[0]>2)
		return -1;
	if(p[1]-p[0]==0)
		return 0;
	a[p1]=a[p1+1];
	b[p1]=0;
	movenum(a,p1+1,p2+1,len);
	movechar(b,p1+1,p2+1,len);
	len=len-(p2-p1);
	return len;
}