#include <stdio.h>
#include <stdlib.h>

int main()
{
	char menu, status;
	int a, b, c;
	awal:
	system("cls");
	printf("============================\n");
	printf("   Kalkulator Sederhana\n");
	printf("============================\n\n");
	printf(" Menu : \n");
	printf(" \t[1] Penjumlahan\n");
	printf(" \t[2] Pengurangan\n");
	printf(" \t[3] Keluar\n\n");
	printf(" Pilih Menu : ");
	scanf("%c", &menu);
	
	if(menu == '1')
	{
		printf("\n [1] Penjumlahan : \n");
		printf(" ----------------------------\n");
		printf(" Masukan bilangan pertama : ");
		scanf("%d", &a);
		printf(" Masukan bilangan kedua   : ");
		scanf("%d", &b);
		c = a + b;
		printf(" --------------------------- \n");
		printf(" Hasil                    : %d", c);
		
		printf("                        \n\n");
		printf(" Apakah anda ingin ke menu [Y/N] : ");
		status = getchar();
		
		if(toupper(status) == 'y')
		{
			goto awal;			
		}

		
	}

	else if(menu == '2')
	{
		printf("\n [2] Pengurangan : \n");
		printf(" ----------------------------\n");
		printf(" Masukan bilangan pertama : ");
		scanf("%d", &a);
		printf(" Masukan bilangan kedua   : ");
		scanf("%d", &b);
		c = a - b;
		printf(" ----------------------------\n");
		printf(" Hasil                    : %d", c);
	}
		
	else if(menu == '3')
	{
		exit(0);
	}
	return 0;
}