#include <stdio.h>
#include <string.h>

typedef char string[50];

typedef struct DataHarga
{
	string NamaBarang;
	string Diskon;
	string Harga;
	string Lorong;
}Data;

int main ()
{
	Data Toko;
	printf("PENDATAAN BARANG TOKO PURI\n");
	printf("--------------------------\n\n");
	printf("Produk: ");
	scanf("%[^\n]", &Toko.NamaBarang);
	printf("Besar Diskon: ");
	scanf("%s", &Toko.Diskon);
	printf("Harga: Rp");
	scanf("%s", &Toko.Harga);
	printf("Lorong Ke-: ");
	scanf("%s", &Toko.Lorong);
	printf("\n----------------------------------------------------------------------------\n\n");
	
	printf("DATA PRODUK\n");
	printf("Produk: %s\n", Toko.NamaBarang);
	printf("Besar Diskon: %s\n", Toko.Diskon);
	printf("Harga: Rp%s\n", Toko.Harga);
	printf("Lorong Ke-: %s\n", Toko.Lorong);
	
	return 0;
}
