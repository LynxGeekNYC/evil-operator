#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define BUFFER_SIZE 1000


int main()
{
	/* File pointer to hold reference of input file */
	FILE * fPtr;
	FILE * fTemp;
	char path[100] = "callfile.bak";

	char buffer[BUFFER_SIZE], buffer1[25] = {0};
	int newline[11];
	int line=2, count;


	/* Remove extra new line character from stdin */
	fflush(stdin);
	srand((unsigned)time(NULL));
	int GeneratedNum[11];
	for (int i = 0; i < 11; i++)
	{
		
		if (i == 0)
			GeneratedNum[i] = 1;
		else if (i == 1 || i == 4)
		{
			GeneratedNum[i] = 2 + rand() % 7;
		}
		else
			GeneratedNum[i] = rand() % 9;

	}
	sprintf(buffer1, "%s%d%d%d%d%d%d%d%d%d%d%d%c","CallerID: ",GeneratedNum[0], GeneratedNum[1], GeneratedNum[2], GeneratedNum[3], GeneratedNum[4], GeneratedNum[5], GeneratedNum[6], GeneratedNum[7], GeneratedNum[8], GeneratedNum[9], GeneratedNum[10],'\n');

	
	/*  Open all required files */
	fPtr = fopen(path, "r");
	fTemp = fopen("replace.tmp", "w");

	/* fopen() return NULL if unable to open file in given mode. */
	if (fPtr == NULL || fTemp == NULL)
	{
		/* Unable to open file hence exit */
		printf("\nUnable to open file.\n");
		printf("Please check whether file exists and you have read/write privilege.\n");
		exit(EXIT_SUCCESS);
	}


	/*
	 * Read line from source file and write to destination
	 * file after replacing given line.
	 */
	count = 0;
	
	while ((fgets(buffer, BUFFER_SIZE, fPtr)) != NULL)
	{
		count++;

		/* If current line is line to replace */
		if (count == line)
			fputs(buffer1, fTemp);
		else
			fputs(buffer, fTemp);
	}


	/* Close all files to release resource */
	fclose(fPtr);
	fclose(fTemp);


	/* Delete original source file */
	remove(path);

	/* Rename temporary file as original file */
	rename("replace.tmp", path);

	return 0;
}
