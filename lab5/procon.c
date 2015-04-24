#include<stdio.h>
#include<semaphore.h>
int n,flag=0;
int s=1,delay=0;
void semWait(int s)
{
	if(s==1)
	s=0;
	else
	{
	  s=1;
	}
}
void semSignal(int s)
{
	if(s==0)
	s=1;
	else 
	s=0;
}
void producer()
{
	while(flag==1)
	{
		produce();
		semWaitB(s);
		append();
		n++;
		if(n==1)
		semsignal(delay);
		semSignalB(s);
	}
}
void consumer()
{
	int m;
	while(flag==1)
	{
		semWaitB(delay);
		take();
		n--;
		m=n;
		semSignalB(s);
		consume();
		if(m==0)
		semWaitB(delay);
	}
}
void main()
{
	producer();
	consumer();
}
