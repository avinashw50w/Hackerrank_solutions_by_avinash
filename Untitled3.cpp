#include<stdio.h>
int main()
{
	int a[100],i,j,n,c;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++){
		for(j=0;j<n;j++){
			c=a[j];
			a[j]=a[j+1];
			a[j+1]=c;
			printf("%d",a[j]);
		}printf("\n");
	}
	
}
