#include<stdio.h>
#include<string.h>

int A[20],Wt[20],n,Bu[20];
char p[20][20];
void data();
void Sjf();

void data()
{
    int i;
    printf("\n Enter the number of processes: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fflush(stdin);
        printf("\n\n Enter the process: ");
        scanf("%s",p[i]);
        printf("\n Enter The BurstTime for the Process %s = ",p[i]);
        scanf("%d",&Bu[i]);
        printf("\n Enter the Arrival Time for the Process %s =  ",p[i]);
        scanf("%d",&A[i]);
    }
}

 void Sjf()
{
    int w,t,i,B[10],Tt=0,temp,j,k;
    char S[10],c[20][20];
    int temp1;
    printf("\n\n SHORTEST JOB FIRST SCHEDULING ALGORITHM \n\n");
    Tt=0;
    w=0;
    for(i=1;i<=n;i++)
    {
        B[i]=Bu[i];
        S[i]='T';
        Tt=Tt+B[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=3;j<=n;j++)
        {
            if(B[j-1]>B[j])
            {
                temp=B[j-1];
                temp1=A[j-1];
                B[j-1]=B[j];
                A[j-1]=A[j];
                B[j]=temp;
                A[j]=temp1;
                strcpy(c[j-1],p[j-1]);
                strcpy(p[j-1],p[j]);
                strcpy(p[j],c[j-1]);
            }
        }
    }
    //For the 1st process
    Wt[1]=0;
    w=w+B[1];
    t=w;
    S[1]='F';
    while(w<Tt)
    {
        i=2;
        while(i<=n)
        {
            if(S[i]=='T'&&A[i]<=t)
            {
                Wt[i]=w;
                S[i]='F';
                w=w+B[i];
                t=w;
                i=2;
            }
            else
                i++;
        }
    }
for(k=1;k<n;k++)
{
	printf("Process:\t%s\t",p[k]);
	printf("Waiting Time%d\t\t",Wt[k]);
        printf("Turn around Time%d",Tt);
}
}
void main()
{
    
    data();
    Sjf();
}






