#include<stdio.h>
void main()
{
int a[50],b[50],c[50],i,j,k,m,n,temp;
printf("Enter the size of the first array:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the size of the second array:");
scanf("%d",&m);
printf("Enter the elements:");
for(j=0;j<m;j++)
scanf("%d",&b[j]);
int x=0,y=0,z=0;
while((x<n)&&(y<m))
{
if(a[x]<=b[y])
{
c[z]=a[x];
x++;
}
else
{
c[z]=b[y];
y++;
}
z++;


while(x<n)
{
c[z]=a[x];
x++;
z++;
}

while(y<m)
{
c[z]=b[y];
y++;
z++;
}
printf("Merged arrays:");
for(x=0;x<z;x++)
printf("%d\n",c[x]);

}
for(x=0;x<z;x++)
{
for(k=0;k<z-x-1;k++)
{
if(c[k]>c[k+1])
{
temp=c[k];
c[k]=c[k+1];
c[k+1]=temp;
}
}
}
printf("Sorted array:");
for(x=0;x<z;x++)
printf("%d\n",c[x]);
}
