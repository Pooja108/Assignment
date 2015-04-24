#include<stdio.h>
void main()
{
int p,a[10],b[10],t[10],w[10],s[10],i,m;

            for(i=0;i<10;i++)
            {
                        a[i]=0; b[i]=0; w[i]=0; s[i]=0;
            }
printf("Enter the number of processess");
scanf("%d",&p);

printf("Enter the burst time of each processess\n");
            for(i=0;i<p;i++)
	    {
                scanf(" %d",&b[i]);
	    }
s[0]=0;
for(i=0;i<10;i++)
{
	s[i+1]=s[i]+b[i];
}
for(i=0;i<p;i++)
{     
	w[i]=s[i]-a[i];
        t[i]=b[i]+w[i];
	 
}

 printf("\n\t process\t waiting time\t turn arround time\n");
  
for(i=0;i<p;i++)
{
	printf("\t %d\t\t %d\t\t %d\n",i,w[i],t[i]);
}
}
