#include <stdio.h>

int main()
{

	int bp,bk, ttl, ttld;
	int const dskn = 0.1;
	
	printf("        TOKO INFOTECH \n");
	
	printf(" Masukkan Harga Barang Pertama : ");
	scanf("%d", &bp);
	printf(" Masukkan Harga Barang Kedua   : ");
	scanf("%d", &bk);
	
	printf("\n Diskon pembelian kedua barang sebesar 10 persen \n\n");
	
	ttl = bp + bk;
	printf(" Harga Total                   : %d \n", ttl);
	ttld = ttl * dskn;
	printf(" Harga Total Setelah Diskon    : %d", ttld);
	return 0;
}