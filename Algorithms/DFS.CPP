#include<stdio.h>
#include<conio.h>
void searchfrom (int);
int a [10][10],visited[10],n;
void main()
{
	int i,j;
	clrscr();
	printf("enter the no. of nodes\n");
	scanf("%d",&n);
	printf("enter the adjacency matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
for(i=1;i<=n;i++)
visited[i]=0;
printf("Depth First Path:");
for(i=1;i<=n;i++)
if(visited[i]==0)
searchfrom(i);
}
void searchfrom(int k)
{
	int i;
	printf("%d\t",k);
	visited[k]=1;
	for(i=1;i<=n;i++)
	if(visited[i]==0)
	searchfrom(i);
	return;
}
