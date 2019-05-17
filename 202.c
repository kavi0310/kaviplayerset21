#include<stdio.h>
int main()
{
char a[100],b[100];
int i,j=0,k=0,l=0,c,m=0,n=0,p=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=0;i<=l;i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
b[j]=a[i];
j++;
m=j;
a[i]='*';
}
}
n=m;
j=m;
for(i=0;i<=l;i++)
{
if(a[i]!='*')
{
b[j]=a[i];
j++;
p++;
}
}
p=n+p-1;
for(j=0;j<p;j++)
{
    printf("%c",b[j]);
}
}
