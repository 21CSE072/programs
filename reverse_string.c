#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str1[100];
	gets(str1);
	int len=strlen(str1);
	char str2[len];
	int j=0,k=0;
	for(int i=0;i<len;i++)
	{
		if(isdigit(str1[len-1-i])||isalpha(str1[len-1-i]))
		{
			if(isdigit(str1[k])||isalpha(str1[k]))
			{
				str2[j]=str1[len-1-i];
			}
		    else
		    {
		     	str2[j]=str1[k];
		     	i=i-1;
		    }
		}
	else if(str1[len-1-i]==' '||str1[len-1-i]=='#'||str1[len-1-i]=='@'||str1[len-1-i]=='$'||str1[len-1-i]=='*')
		{
		        i=i+1;
		     	str2[j]=str1[len-1-i];
		     	
	    }
		else
		{
		     	str2[j]=str1[k];
		     	i=i-1;
		}
		j=j+1;
	    k=k+1;
}
	printf("\n%s",str2);
}
