/*
 * 3-Sept-2015
 * Nama :Muhammad Ulil Albab
 * Nim  :23515006
 * Program : *  Sebuah program C atau Java (pilih salah satu) yang digunakan untuk membaca sebuah integer positif N
 * 			    dan mendeklarasikan sebuah array berukuran N. 
 * 				Pembacaan nilai N diasumsikan benar (tidak perlu divalidasi), yaitu N > 0.
 *			    Program kemudian membaca N buah integer. 
 * 				Selanjutnya, program menampilkan nilai median (nilai tengah) dari deret nilai integer yang dimasukkan.
 *  
 * 
 * 
 * 
 * 
 */
#include <stdlib.h>
#include <stdio.h>
int main()
{
	/* variable */
	int N,i,j,a;
	int * TabInt;
	float result=0;
	
	/* Algoritma */
	scanf("%d", &N);
	TabInt = (int *) malloc (N* sizeof(int));
	//isi array dengan inputan sejumlah N
	for(i=0;i<N;i++)
	{
		scanf("%d", &TabInt[i]);
	}
	//ascending sorting
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(TabInt[i]>TabInt[j])
			{
				a=TabInt[i];
				TabInt[i]=TabInt[j];
				TabInt[j]=a;
			}
		}
		
	}
	/* write output */	
	if(N%2==1)
	{
		printf("%d\n",TabInt[N/2]);		
	}else
	{	result=(float)(TabInt[N/2-1]+TabInt[N/2])/2;
		printf("%g \n",result);
	}	
	return 0;
}
