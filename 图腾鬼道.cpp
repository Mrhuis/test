#include<stdio.h>
#define MAXN 1024
int main(void)
{
	int k,n,i,j,len;
    char a[MAXN][2*MAXN];
    scanf("%d",&n);
    if(n==0)
    {
    	printf("%c%c",'/','\\');
	}
	else
    {
    	for(i=0;i<MAXN;i++)
    {
    	for(j=0;j<MAXN*2;j++)
    	{
    		a[i][j]=' ';
		}
	}
	k=1;
	len=4;
	a[0][0]=a[1][1]='/';
	a[0][1]=a[0][2]='_';
	a[0][3]=a[1][2]='\\';
	while(k<n)
	{
		for(i=0;i<len/2;i++)
		{
			for(j=0;j<len;j++)
			{
				a[i+len/2][j+len/2]=a[i][j+len]=a[i][j];
			}
		}
		len*=2;
		k++;
	}
	for(k=0,i=len/2-1;i>=0;i--,k++)
	{
		for(j=0;j<=len/2+k;j++)
		{
			printf("%c",a[i][j]);
		}
		if(i!=0) 
		printf("\n");
	}
	
	}
    return 0;
}
