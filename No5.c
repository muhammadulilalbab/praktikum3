/*
 * 4-Sep-2015
 * Nama		: Muhammad Ulil Albab
 * Nim 		: 23515006
 * 
 * Program  : Program C yang digunakan untuk membaca sebuah integer positif N 
 * 			  dan mendeklarasikan sebuah array berukuran N. 
 * 			  Pembacaan nilai N diasumsikan benar (tidak perlu divalidasi), yaitu N > 0.
 * 			  Program kemudian membaca N buah integer dan menyimpan setiap integer ke dalam suatu array.
 * 			  Selanjutnya, program menerima masukan sebuah nilai integer, 
 * 			  misalnya X dan menampilkan beberapa hal sebagai berikut secara berturut-turut:
 * 				** Berapa banyak kemunculan X dalam array. 
 * 				** Di indeks terkecil dan terbesar di mana X muncul (indeks dimulai dari 0). 
 * 				   Jika X tidak ada di array, dituliskan “X tidak ada”.
 * 				** Apakah X adalah nilai maksimum, nilai minimum, atau nilai tengah (median) dari deret nilai dalam array (lihat contoh interaksi di bawah), jika X ada di array.
 * 
 */
 #include <stdio.h>
 #include <stdlib.h>
int main()
{
	/* variabel */
	int N, X,i,j, NbElmt =0, Max=-9999, Min =99999;
	int * TabInpt;
	int * TabCount;
	float median;
	
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
	/* sorting array ascending */
	for(i=0; i<N;i++)
	{
		for(j=i+1; j<N;j++)
		{
			int a;
			if(TabInpt[i]>TabInpt[j])
			{
				a= TabInpt[j];
				TabInpt[j]=TabInpt[i];
				TabInpt[i]=a;
			}
		}
	}
	/* cari nilai median */
	if(N%2==1)
	{
		median =(float)TabInpt[N/2];
	}else
	{
		median=(float)(TabInpt[N/2-1]+TabInpt[N/2])/2;
		
	}
	
	/* output */
	printf("%d\n", NbElmt);
	if(NbElmt>0)
	{
		
		/* for(i=0;i<NbElmt;i++)
		{
				if(i==0)
				{
					printf("%d",TabCount[i]);
				}else
				{
					printf(",%d",TabCount[i]);
				}
		}*/
		printf("%d\n",TabCount[0]);
		printf("%d\n",TabCount[NbElmt-1]);
		
		if(X==Max)
		{
			printf("maksimum\n");
		}
		if(X==Min)
		{
			printf("minimum\n");
		}
		X=(float)X;
		if(X==median)
		{
			printf("median\n");
		}
	}else
	{
		printf("%d tidak ada\n",X);
	}	
	free(TabInpt);
	free(TabCount);
	return 0;
}
