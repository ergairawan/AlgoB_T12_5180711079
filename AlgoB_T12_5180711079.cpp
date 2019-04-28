#include <iostream>
#include <stdlib.h>
using namespace::std;
main()
{
	int jumlah, ketemu = 0;
    string  data[10],  ganti, hapus, cari;
ulangi:


	cout << "Masukkan jumlah data : ";
	cin >> jumlah;


	if (jumlah > 9 )
	{

		cout << "\nMaaf, max jumlah data adalah 10!\n\n";


		goto ulangi;
	}
	else
	{

		for (int i = 0; i<jumlah; i++)
		{
			cout << "Masukkan data ke-" << i + 1 << " : ";
			cin >> data[i];
		}


		cout << "\nData yang telah dimasukkan : ";
		for (int j = 0; j<jumlah; j++)
		{
			cout << "\ndata[" << j << "]= " << data[j];
		}
	}


	cout << "\n\nMasukkan data yang akan diubah = "; cin >> ganti;


	for (int k = 0; k<jumlah; k++)
	{
		if (data[k] == ganti)
		{

			cout << "Masukka data baru = "; cin >> data[k];
		}
	}


	cout << "\n\nData setelah diubah";
	for (int l = 0; l<jumlah; l++)
	{
		cout << "\nIndex[" << l << "]= " << data[l];
	}


	cout << "\n\nMasukkan data yang akan dihapus = ";
	cin >> hapus;


	for (int j = 0; j < jumlah; j++)
	{
		if (hapus == data[j])
		{

			for (int k = j ; k < jumlah; k++)
			{

				data[k] = data[k + 1];
			}


			jumlah -= 1;
			break;
		}
	}



	cout << "\n\nData Baru :";
	for (int p = 0; p<jumlah; p++)
	{
		cout << "\nIndex[" << p << "]= " << data[p];
	}


	cout << "\n\nMasukkan data yang akan dicari = "; cin >> cari;


	for (int n = 0; n<jumlah; n++) {
		if (cari == data[n]) {


			cout << "\nData " << cari << " ditemukan pada index ke-" << n <<endl;
			ketemu = 1;
			break;
		}
	}


	if (ketemu == 0) cout << "Maaf data yang Anda cari tidak ada";




}
