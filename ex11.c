#include<stdio.h>
#include<string.h>

void main(){
	char str1[100];
	char str2[100];
	int len, c=0, d=0, cnt = 1;
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
	
	for(int i = 0; str2[i] != '\0'; i++)
	{
		if(str2[i] == ' ')
		{
			cnt++;
		}
		if(str2[i+1] == '\0')
		{
			cnt--;
		}
	}
	puts(str2);
	printf("word count = %d\n", cnt);
}
