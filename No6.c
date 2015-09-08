/*
 * 5-Sep-2015
 * Nama		: Muhammad Ulil Albab
 * Nim 		: 23515006
 * 
 * Program  : Program C yang digunakan untuk membaca N data Titik dari masukan pengguna 
 * 			  (elemen-elemen data Titik dibaca dalam satu baris seperti contoh di bawah) 
 * 			  dan menampilkan banyaknya Titik pada setiap kuadran (dari kuadran 0 s.d. 4) 
 * 			  dan banyaknya Titik untuk setiap kode warna per kuadran (lihat contoh di bawah ini). 
 * 			  Kuadran yang tidak ada Titik-nya tidak dituliskan. 
 * 			  Masukan N dianggap selalu benar (N > 0 dan N <= 100). 
 * 			  Diasumsikan pula, masukan Titik juga selalu benar sehingga tidak perlu dilakukan validasi.
 * 
 */
#include <stdio.h>
#include <stdlib.h>
/* Fungsi Kuadran digunakan untuk mendapatkan kuadran sebuah Titik */
int Kuadran(int x, int y);
int main()
{
	/* variable */
	const int POINT_MAX=100;
	typedef struct{
		int x;
		int y;
		int warna;
	}Point;
	Point P[POINT_MAX];
	typedef struct{
		int TI[5];
		int NbElmt;
	}TabKuad;
	TabKuad T0, T1, T2, T3, T4;
	int N,i, kuadran;
	
		
	/* Algorithm */
	T0.NbElmt=0;
	T1.NbElmt=0;
	T2.NbElmt=0;
	T3.NbElmt=0;
	T4.NbElmt=0;
	for(i=0;i<5;i++)
	{
		T0.TI[i]=0;
		T1.TI[i]=0;
		T2.TI[i]=0;
		T3.TI[i]=0;
		T4.TI[i]=0;
	}
	
	scanf("%d", &N);
	for(i=0;i<N;i++)
	{
		scanf("%d %d %d",&P[i].x,&P[i].y,&P[i].warna);
		kuadran = Kuadran(P[i].x, P[i].y);
		if (kuadran ==0)
		{
			T0.TI[P[i].warna-1]++;
			T0.NbElmt++;
		}else if(kuadran ==1)
		{
			T1.TI[P[i].warna-1]++;
			T1.NbElmt++;
		}else if(kuadran ==2)
		{
			T2.TI[P[i].warna-1]++;
			T2.NbElmt++;
		}else if(kuadran ==3)
		{
			T3.TI[P[i].warna-1]++;
			T3.NbElmt++;
		}
		else 
		{
			T4.TI[P[i].warna-1]++;
			T4.NbElmt++;
		}
	}
	
	/* Output */
	if(T0.NbElmt>0)
	{
		printf("0=%d\n",T0.NbElmt);
		printf("[1]%d\n",T0.TI[0]);
		printf("[2]%d\n",T0.TI[1]);
		printf("[3]%d\n",T0.TI[2]);
		printf("[4]%d\n",T0.TI[3]);
		printf("[5]%d\n",T0.TI[4]);
	}
	if(T1.NbElmt>0)
	{
		printf("1=%d\n",T1.NbElmt);
		printf("[1]%d\n",T1.TI[0]);
		printf("[2]%d\n",T1.TI[1]);
		printf("[3]%d\n",T1.TI[2]);
		printf("[4]%d\n",T1.TI[3]);
		printf("[5]%d\n",T1.TI[4]);
	}
	if(T2.NbElmt>0)
	{
		printf("2=%d\n",T2.NbElmt);
		printf("[1]%d\n",T2.TI[0]);
		printf("[2]%d\n",T2.TI[1]);
		printf("[3]%d\n",T2.TI[2]);
		printf("[4]%d\n",T2.TI[3]);
		printf("[5]%d\n",T2.TI[4]);
	}
	if(T3.NbElmt>0)
	{
		printf("3=%d\n",T3.NbElmt);
		printf("[1]%d\n",T3.TI[0]);
		printf("[2]%d\n",T3.TI[1]);
		printf("[3]%d\n",T3.TI[2]);
		printf("[4]%d\n",T3.TI[3]);
		printf("[5]%d\n",T3.TI[4]);
	}
	if(T4.NbElmt>0)
	{
		printf("4=%d\n",T4.NbElmt);
		printf("[1]%d\n",T4.TI[0]);
		printf("[2]%d\n",T4.TI[1]);
		printf("[3]%d\n",T4.TI[2]);
		printf("[4]%d\n",T4.TI[3]);
		printf("[5]%d\n",T4.TI[4]);
	}
	
	
return 0;
}
int Kuadran(int x, int y)
{
	int kuadran = -1;
	if(x==0 || y == 0)
	{
		kuadran = 0;
	}else if(x>0 && y>0)
	{
		kuadran = 1;
	}else if(x<0 && y >0)
	{
		kuadran =2 ;
	}else if(x<0 && y <0)
	{
		kuadran = 3;
	}else
	{
		kuadran = 4;
	}
	return kuadran;
}
