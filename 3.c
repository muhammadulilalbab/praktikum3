/*
 * 3-Sept -2015
 * Nama :Muhammad Ulil Albab
 * Nim  :23515006
 * Program : Program yang membaca sejumlah bilangan integer 0 atau positif yang terdiri atas 1 s.d. 5 digit
 *  		(diasumsikan masukan selalu benar). Asumsikan pula, banyaknya bilangan tidak lebih dari 100 buah.
 * 			Pembacaan bilangan dihentikan ketika pengguna mengetikkan sebuah bilangan negatif 
 * 			atau jika banyaknya bilangan sudah sama dengan 100.
 * 			Program kemudian menuliskan ke layar banyaknya bilangan yang dimasukkan 
 * 			dan setiap digit yang ada dalam semua bilangan yang diketikkan 
 * 			dan menuliskan jumlah kemunculannya 
 * 			(lihat contoh, perhatikan spasi yang digunakan). 
 * 			Hanya digit yang ada saja yang ditulis dan harus ditulis terurut menaik. 
 * 
 */
 #include <stdlib.h>
 #include <stdio.h>
 int countTemp(int digit, int digits);
 int main()
 {
	int TabAngka[10]={0,0,0,0,0,0,0,0,0,0};
	int X,count=0,i;
	scanf("%d",&X);
	while(X>=0 || count==99)
	{
		for(i=0;i<10;i++)
		{
			TabAngka[i] +=countTemp(i,X);			
		}			
		count++;
		scanf("%d",&X);
		
	}
	if(count==0)
	{
		printf("0 \n");
	} else 
	{
		printf("%d \n",count);
		for(i=0;i<10;i++)
		{
			if(TabAngka[i]>0)
			{
				printf("%d : %d \n",i,TabAngka[i]);
			}
		}
	}
	return 0;
 }

 int countTemp(int digit, int digits){
    int tempCounter = 0;
    do {
        tempCounter += digit == digits % 10;
        }
    while ( digits /= 10 );
   
return tempCounter;
}
