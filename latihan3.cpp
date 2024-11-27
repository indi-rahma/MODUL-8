//------------------------------------
#include <stdio.h>
#include <conio.h>
#include <windows.h>

typedef struct
{
	long NIM;
	char Nama[25];
	float IPK;
} DataMhs;

//-------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
	system ("color F0");
	FILE *MHS;
	DataMhs RekMhs;
	MHS = fopen("kuliah.dat", "w");
	printf("NIM   = "); 
	scanf("%s", &RekMhs.NIM);
	printf("Nama  = ");
	scanf("%s", &RekMhs.Nama);
	printf("IPK   = "); 
	scanf("%s", &RekMhs.IPK);
	fwrite(&RekMhs, sizeof(RekMhs),1,MHS);
	fclose(MHS);
	getch();
	return 0;
}