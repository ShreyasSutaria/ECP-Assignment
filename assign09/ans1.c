#include<stdio.h>

//to read data --> use unformatted file IO [fgetc()]
//[fgetc()]--> read character by character

int main(void)
{
	char ch;

//1.open file in read mode
// FILE * fp = fopen("filepath", "mode");

	FILE * fp = fopen("file1.txt","r");

//2.read character 
//2.1 for multiple data read-->use while loop;
	while((ch = fgetc(fp)) != EOF)
		printf("%c",ch);

//3.close the file
	fclose(fp);

	return 0;
}
