#include<stdio.h>

void main(){
	char str;
	int tab=0, space=0, eol=0,fd = 0;
	printf("Enter string: \n");
	printf("%d\n",EOF);
	
	while(str != 'q')
	{

		str = getchar();
	//	printf("%d\n",str);
		if(str == ' ')
		{
			space++;
		}
		if(str == '\n')
		{
			eol++;
		}
		if(str == '\t')
		{
			tab++;
		}
	}
	printf("spaces = %d\ntabs = %d\nlines = %d\n",space, tab, eol);

}

