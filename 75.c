#include <stdio.h>
#include<string.h>
int main(void) 
{
clrscr():
char s[100];
int n,d,i;
scanf("%s",s);
n=strlen(s);
d=(n/2);
if(n%2!=0)
{
	for(i=0;i<n;i++)
	{
		if(i==d)
		{
		printf("*");
		}
		else
		{
			printf("%c",s[i]);
		}
	}
}
if(n%2==0)
{
for(i=0;i<n;i++)
	{
		if(i==d-1)
		{
	            printf("*");
		}
		else if(i==d)
            	{
		printf("*");
	            }
		else
		{
			printf("%c",s[i]);
		}
	}	
}



	return 0;
}
