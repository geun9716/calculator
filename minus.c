#include <stdio.h>
#include <string.h>
/*void array(char a[63], char b[63])		//a : ?먮옒 ?レ옄, b : 諛곗뿴???レ옄
{
	int i, j, n=1;
	for(i=0; i<strlen(a); ++i)
	{
		if(a[i]=='.')
		{
			b[50]=a[i];
			for(j=i+1; j<strlen(a); ++j)
			{
				b[50+n]=a[j];
				++n;
			}
			b[j]='\0';
			n=1;
			for(j=i-1; j>=0; --j)
			{
				b[50-n]=a[j];
				++n;
			}
			for(j=50-i-1; j>=0; --j)
				b[j]=' ';
			return;
		}
	}
	n=1;
	for(i=strlen(a);i>=0;--i)
	{
		b[50-n]=a[i];
		++n;
	}
	for(i=0; i>n; ++i)
		b[i]=' ';
	return;
}*/
int main(void)
{
	char a[63]="    44444";
	char b[63]=" 77755555";
	char c[63]={};
	char d[64]={};
	char e[63]={};
	char f[63]={};
	int len_a=0, len_b=0;
//	array(a, e);
//	array(b, f);

//	printf("%s\n", e);
//	printf("%s\n", f);

	for (int i=0; i<strlen(c) ; i++)		//뒤로 미루기		
	  d[i+1]=c[i];
	for (int i = 62; i >= 0; i--)			//뺄셈 계산
	{
		if (strcmp(a, b) < 0)				//a가 b보다 작을 때		{
			if (a[i]==' '&&b[i]==' ')
				c[i] = (' '-'0');
			else if (a[i]==' ')
				c[i] = (b[i]-'0')-(a[i]-' ');
			else
				c[i] = (b[i]-'0')-(a[i]-'0');
		}
		else if (strcmp(a, b) > 0)			//a가 b보다 클 때		{
			if (a[i]==' '&&b[i]==' ')
				c[i] = (' '-'0');
			else if (b[i]==' ')
				c[i] = (a[i]-'0')-(b[i]-' ');
			else
				c[i] = (a[i]-'0')-(b[i]-'0');
		}
		d[i+1]= c[i];
	}
	for (int i = 62; i >= 0; i--)
	{
		if (d[i] < 0)
		{
			d[i] += 10;
			d[i-1]--;
		}
		d[i] += '0';
	}
	if (strcmp(a, b) < 0)				//a 가 b 보다 작을때		
	  d[0] = '-';
	if(d[0]=='0')
	{
		for(int i=1; i<strlen(d); ++i)
		{
			d[i-1]=d[i];
		}
	}
	printf("%s\n", d);
	return 0;
}
