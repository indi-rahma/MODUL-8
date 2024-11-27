//--------------------------------------------
#include <iostream>
#include <conio.h>
#include <stdio.h>
#define CTRL_Z 26

using namespace std;
//--------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
	FILE *pf; /* pointer ke file */
	char kar;
	
	if((pf=fopen("COBA.TXT", "w")) == NULL) /*ciptakan file*/
	{
		printf("File tak dapat diciptakan! \r\n");
		exit(1); /*selesai */
	}
	while((kar=getche()) != CTRL_Z)
		putc(kar, pf); /*tulis ke file*/
	fclose(pf); /*tutup file*/
	getch();
	return 0;
}