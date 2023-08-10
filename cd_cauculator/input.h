
#include<math.h>
#include "basic.h"

//浮点数字符串char数组转换到float变量
//d为小数点的相对地址，l为a字符串末位的相对地址
double c_f(char a[],int d,int l)
{	double num=0;
	int i,j,b[40];
	//转换数组类型
	for(i=0;i<=l;i++)
		b[i]=0+(a[i]-'0');
	//数组变数值
	for(i=d-1,j=0;i>=0;i--,j++)
	{	if(b[i]<0)
			return -1.0;
		num+=(b[i])*pow(10.0,j);
	}
	for(i=d+1,j=1;i<=l;i++,j++)
		num+=(b[i])/pow(10.0,j);
	return num;
}

//将运算式字符串分解到浮点数数组和符号数组,返回双数组长度，-1为错误
//i：指向原字符串数组，j：指向两个输出数组，k指向n临时数组，d表示小数点相对地址。
//a为数据，b为运算符
int trans(char c[],double a[],char b[])
{	int i,j=0,k,d;
	char n[40];
	for(i=0;c[i]!='\0';)
	{	if (c[i]=='+' || c[i]=='-' || c[i]=='*' || c[i]=='/' || c[i]=='(' || c[i]==')')
		{	b[j]=c[i];
			j++;
			i++;
			
		}
		else if((c[i]>='0' && c[i]<='9') || c[i]=='.')
		{	for(k=0,d=-1;(c[i]>='0' && c[i]<='9') || c[i]=='.';k++,i++)
			{	if(c[i]=='.')
					d=k;
				n[k]=c[i];
			}
			if(d==-1)
				d=k;
			a[j]=c_f(n,d,k-1);
			if (a[j]<0)
				return EOF;
			j++;
		}
		else if(c[i]==' ')
			i++;
		else
			return EOF;

	}
	return j-1;
}



//负号转换
int sign(double a[],char b[],int l)
{	int i;
	for(i=0;i<=l;i++)
	{	if(b[i]=='-')
			if((b[i-1]!=0 && b[i-1]!=')') || i==0)
				if(b[i+1]==0)
			{	a[i+1]*=-1;
				movenum(a,i,i+1,l);
				movechar(b,i,i+1,l);
				l--;
			}
	}
	return l;
}

//输入合法性判断,不合法返回0
//括号完整度和歧义符号
int judger(char b[],int l)
{	int i,sl=0,sr=0;
	if (b[0]!='(' && b[0]!=0)
		return 0;
	if(b[l]!=')' && b[l]!=0)
		return 0;
	for(i=0;i<=l;i++)
	{	if(b[i]=='(')
			sl+=1;
		if(b[i]==')')
			sr+=1;
	}
	if(sl!=sr)
		return 0;
	
	for(i=1;i<l;i++)
	{	if((b[i]=='+' || b[i]=='-' || b[i]=='*' || b[i]=='/' || b[i]=='('))
			if(b[i+1]==')' || b[i+1]=='+' || b[i+1]=='-' || b[i+1]=='*' || b[i+1]=='/' )
				return 0;
		if(b[i]==')' )
			if(b[i+1]=='(' || b[i+1]==0)
				return 0;
		if(b[i]=='(')
			if(b[i-1]==0)
				return 0;
	}
	return 1;
}


		