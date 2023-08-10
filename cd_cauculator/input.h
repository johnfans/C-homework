
#include<math.h>
#include "basic.h"

//�������ַ���char����ת����float����
//dΪС�������Ե�ַ��lΪa�ַ���ĩλ����Ե�ַ
double c_f(char a[],int d,int l)
{	double num=0;
	int i,j,b[40];
	//ת����������
	for(i=0;i<=l;i++)
		b[i]=0+(a[i]-'0');
	//�������ֵ
	for(i=d-1,j=0;i>=0;i--,j++)
	{	if(b[i]<0)
			return -1.0;
		num+=(b[i])*pow(10.0,j);
	}
	for(i=d+1,j=1;i<=l;i++,j++)
		num+=(b[i])/pow(10.0,j);
	return num;
}

//������ʽ�ַ����ֽ⵽����������ͷ�������,����˫���鳤�ȣ�-1Ϊ����
//i��ָ��ԭ�ַ������飬j��ָ������������飬kָ��n��ʱ���飬d��ʾС������Ե�ַ��
//aΪ���ݣ�bΪ�����
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



//����ת��
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

//����Ϸ����ж�,���Ϸ�����0
//���������Ⱥ��������
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


		