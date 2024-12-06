#include<stdio.h>
#include<string.h>
int isAlphanumeric(char c)
{
	return(c>='a' && c<='z' || c>='A' && c<='Z' || c>='0' && c<='9');
}
int toLowercase(char c)
{
	if(c>='A' && c<='Z')
	{
		return c+32;
	}
	return c;
}
int length(char *s)
{
	int length=0;
	while(s[length]!='\0')
	{
		length++;
	}
	return length;
}

void isPalindrome(char *s)
{
	char s1[100];
	int j=0, f=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(isAlphanumeric(s[i]))
		{
			s1[j]=toLowercase(s[i]);
			j++;
		}
	}
	s1[j]='\0';
	int len=length(s1);
	for(int i=0;i<len/2;i++)
	{
		if(s1[i]!=s1[len-1-i])
		{
			f=1;
			break;
		}
	}
	if(f)
	printf("The given string is not a palindrome.");
	
	else
	printf("The given string is a palindrome.");
}

int main()
{
	char c[100];
	printf("Enter the string to check whether it is palindrome or not:");
	scanf("%s",c);
	isPalindrome(c);
}
