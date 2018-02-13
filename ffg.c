#include<stdio.h>
int main()
{
int s,m,i,j,rem;
scanf("%d %d",&s,&m);
for(i=s;i<m;i++)
{
int p=i,sum=0;
for(j=0;p!=0;j++)
     {
      rem=p%10;
      sum=sum+rem*rem*rem;
      p=p/10;
     
     }
     if(sum==i)
     printf("%d\s",sum);

}
return 0;
}
