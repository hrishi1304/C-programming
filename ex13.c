#include<stdio.h>
#include<string.h>

void main(){
	char str1[100];
	char str2[100];
	int len, c=0, d=0, cnt = 1, i = 0, j = 0;

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
			cnt++;
		}
	}

	puts(str2);
	int hist[cnt];

	bzero(hist, cnt*sizeof(cnt));
	
/*	for(j =0; j<cnt; j++)
        {
                printf("%d\n", hist[j]);
        }*/

	printf("\n");
	j=0;

	for(i = 0; str2[i] != '\0'; i++)
	{
		if(str2[i] != ' ' )
		{
			hist[j]++;
		}
		else
		{
			j++;
	//		printf("j= %d\n",j);
		}
	}

	int pat[10];
	bzero(pat, 10*sizeof(int));

	for(i=1; i <= 10; i++)
	{
		for(j=0; j <= cnt; j++)
		{
			if(i == hist[j])
			{
				pat[i]++;
			}
		}
	}
	
	for(j = 0; j < 10; j++)
        {
		printf("%d",j);
		for(i = 0; i < pat[j]; i++)
		{
			printf("-");
		}
		printf("\n");
        }

}
