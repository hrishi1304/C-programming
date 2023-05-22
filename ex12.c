#include<stdio.h>
#include<string.h>

void main(){
	char str1[100];
	char str2[100];
	int i,len, c=0, d=0;
	printf("Enter the string: \n");
	gets(str1);
	len = strlen(str1);
	while(str1[c] != '\0')
	{
		while(str1[c]== ' ' && str1[c+1]== ' ')
		{
			++c;
		}
		str2[d]= str1[c];
		d++;
		c++;
	}
	for(i = 0; str2[i] != '\0'; i++)
	{
		if(str2[i] == ' ')
		{
			str2[i]='\n';
		}
	}
	str2[i]='\0';
	puts(str2);
}
