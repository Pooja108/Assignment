#include<stdio.h>
int main()
{

	int p,r,i,j,flag,wh=1,state=0,cnt=0;

	printf("number of processes:\n");
	scanf("%d",&p);
	printf("number of resources:\n");
	scanf("%d",&r);

	int res[r],c[p][r],a[p][r],v[1][r],n[p][r],completed[p];

	for(i=0;i<p;i++)
	{

		completed[i]=0;        //process is incomplete

	}

	printf("Enter the available matrix:\n");
	for(i=0;i<r;i++)
	{

		scanf("%d",&v[1][i]);

	}

	printf("Enter the current allocation matrix:");
	for(i=0;i<p;i++)
	{

		printf("\n");
		for(j=0;j<r;j++)
		{

			scanf("%d",&a[i][j]);

		}

	}

	printf("Enter the maximum demand matrix:");
	for(i=0;i<p;i++)
	{

		printf("\n");
		for(j=0;j<r;j++)
		{

			scanf("%d",&c[i][j]);

		}

	}

	printf("Enter the resource matrix:\n");
	for(i=0;i<r;i++)
	{

		scanf("%d",&res[i]);

	}
	//need matrix
	printf(" The need matrix will be:\n");
	for(i=0;i<p;i++)
	{

		for(j=0;j<r;j++)
		{

			n[i][j]=c[i][j]-a[i][j];

		}

	}

	while(wh==1)
	{

		for(i=0;i<p;i++)
		{

			if(completed[i]==1)       //check if the process is complete then continue
			{

				continue;

			}	
			flag=0;
			for(j=0;j<r;j++)
			{

				if(n[i][j]<=v[1][j])
				{

					flag++;

				}

			}
			if(flag==r)
			{

				printf("%d",state);
				state=1;
				//to free the particular process after allocation
				for(j=0;j<r;j++)
				{

					completed[i]=1;
					v[1][j]=v[1][j]+a[i][j];  
					a[i][j]=0;
					c[i][j]=0;
					n[i][j]=0;

				}
				cnt++;
				break;

			}
	

		}

		if(state==0)
		{

			printf("This is an unsafe state\n");
			break;

		}
		else
		{
			//it will print the available matrix after freeing the process step by step
			printf("\n\nAvailable matrix\n");
			for(i=0;i<r;i++)
			{

				printf("%d\t",v[1][i]);

			}
			printf("\n state is safe");

		}

		if(cnt==p)
		{

			wh=0;
			break;
		
		}

	}



}
