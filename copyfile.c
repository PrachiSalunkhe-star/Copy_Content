// Write a program to copy file. Take source file and destination file as command line arguments.

#include<stdio.h>


int main(void)
{
	char str[100]="Write a program to copy file. Take source file and destination file as command line arguments.";
	
	FILE *fp=fopen("source.txt","w");
	
	for(int i=0;str[i]!='\0';i++)
	{
	   fputc(str[i],fp);
	}
	fclose(fp);
	char ch;

	FILE *fw=fopen("destination.txt","w");

	FILE *fr = fopen("source.txt", "r");


	while((ch = fgetc(fr)) != EOF)
	{
		fputc(ch,fw);
	}

	printf("\n");



	fclose(fw);

	fclose(fr);
	printf("File is copied \n");

	return 0;
}