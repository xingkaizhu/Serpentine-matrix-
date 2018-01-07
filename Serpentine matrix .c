#include<stdio.h>
int main()
{    
	int a[100][100];
	int i,j,k,l,m,s,t;
	s=1;
	for(i=0;i<100;i++)
	  for(j=0;j<100;j++)
	  a[i][j]='\0';
    scanf("%d",&k);
	for(t=0;t<k;t++)
	for(j=0;j<=t;j++)
	{   
		i=t-j;
		a[i][j]=s;
		s++;	  	
    } 
 for(i=0;i<k;i++)
  {
  	for(j=0;j<k;j++)
  	if(a[i][j]!=0)
  printf("%d ",a[i][j]);
  printf("\n");
  }	
	return 0;
}
