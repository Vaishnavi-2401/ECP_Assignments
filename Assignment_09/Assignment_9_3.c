//Write a function to read a file line by line and copy the contents to another file.



#include<stdio.h>
int main(void)
{
	char ch[50];
	FILE *fs = fopen("src.txt","r");
	FILE *fd = fopen("des.txt","w");
	
	while(fgets(ch,sizeof(ch),fs)!=NULL)
	{
	fputs(ch,fd);
	}
	fclose(fs);
	fclose(fd);
return 0;


}
