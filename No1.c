/*
 * 4-Sep-2015
 * Nama		: Muhammad Ulil Albab
 * Nim 		: 23515006
 *
 * 
 * Program : Program C yang digunakan untuk membaca sebuah integer positif N 
 * 			 dan mendeklarasikan sebuah array berukuran N. 
 * 			 Pembacaan nilai N diasumsikan benar (tidak perlu divalidasi), yaitu N > 0.
 * 			 Program kemudian membaca N buah integer dan menyimpan setiap integer ke dalam array dari indeks paling awal. 
 * 			 Selanjutnya, program menerima masukan sebuah nilai integer,
 * 			 misalnya X dan menampilkan beberapa hal sebagai berikut secara berturut-turut:
 * 				&& Berapa banyak kemunculan X dalam array.
 * 				&& Pada indeks ke-berapa saja X muncul. 
 * 				   Setiap indeks dipisahkan dengan koma (kecuali indeks terakhir). 
 * 				   Jika X tidak ada di array, dituliskan “X tidak ada”.
 * 				&& Apakah X adalah nilai maksimum atau nilai minimum atau keduanya, 
 * 				   jika X ada di array. Jika X bukan nilai maksimum atau minimum, tidak menuliskan apa pun
 * */
 #include <stdio.h>
 #include <stdlib.h>
int main()
{
	/* variabel */
	int N, X,i, NbElmt =0, Max=-9999, Min =99999;
	int * TabInpt;
	int * TabCount;
	
	
	/* Algoritma */
	scanf("%d", &N);
	TabInpt = (int *) malloc (N * sizeof(int));
	TabCount = (int *) malloc (N* sizeof(int));
	/* isi array dan cari nilai maksimal minimal*/
	for(i=0;i<N;i++)
	{
		scanf("%d",&TabInpt[i]);
		if(TabInpt[i]>Max)
		{
			Max = TabInpt[i];
		}		
		if(TabInpt[i]<Min)
		{
			Min = TabInpt[i];
		}
	}
	/* input nilai yang akan dicari */
	scanf("%d",&X);
	for(i=0;i<N;i++)
	{
		if(TabInpt[i]==X)
		{
			TabCount[NbElmt] = i;
			NbElmt++;
		}
	}
	
	/* output */
	printf("%d\n", NbElmt);
	if(NbElmt>0)
	{
		
		for(i=0;i<NbElmt;i++)
		{
				if(i==0)
				{
					printf("%d",TabCount[i]);
				}else
				{
					printf(",%d",TabCount[i]);
				}
		}
		printf("\n");
		if(X==Max)
		{
			printf("maksimum\n");
		}
		if(X==Min)
		{
			printf("minimum\n");
		}
	}else
	{
		printf("%d tidak ada\n",X);
	}	
	free(TabInpt);
	free(TabCount);
	return 0;
}
