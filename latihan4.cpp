//---------------------------------
#include <stdio.h>
#include <conio.h>

typedef struct
{
	long NIM;
	char Nama[25];
	float IPK;
}DataMhs;

//-----------------------------------
#pragma argsused

int main(int argc, char* argv[])
{
	/*Tulis Ffile ke file kuliah.dat*/
	FILE *MHS;
	DataMhs RekMhs;
	printf("Tulis ke file kuliah.dat\n");
	MHS = fopen("kuliah.dat", "w");
	printf("NIM = "); 
	scanf("%ld",&RekMhs.NIM); 
	printf("Nama = ");
	scanf("%s", &RekMhs.Nama);
	printf("IPK = "); 
	scanf("%f",&RekMhs.IPK);
	fwrite(&RekMhs, sizeof(RekMhs), 1, MHS);
	fclose(MHS);
	
	/*Baca file dri file kuiah.dat*/
	printf("Buka File kuliah.dat\n");
	FILE *BukaMhs;
	BukaMhs = fopen("kuliah.dat", "r");
	fread(&RekMhs, sizeof(RekMhs),1,BukaMhs); 
	printf("NIM = %ld \n",RekMhs.NIM); 
	printf("Nama = %s \n",RekMhs.Nama); 
	printf("IPK = %2.2f \n",RekMhs.IPK);	 
	fclose(BukaMhs); 
	
	getch();
return 0; 
}
	