#include<stdio.h>
#include<string.h>
char * ustrcpy(char *str1,char *str2)
{
	while((*str1=*str2)!='\0')
	{
		str1++;
		str2++;
	}
	
	return str1;
}


int main()
{
	char str1[50],str2[50];
	printf("enter str1\n");
	gets(str1);
	ustrcpy(str2,str1);
	printf("str1=%s\nstr2=%s\n",str1,str2);
	printf("%d",strlen(str1));
}
/*output
enter str1
dipa
str1=dipa
str2=dipa
4
*/
