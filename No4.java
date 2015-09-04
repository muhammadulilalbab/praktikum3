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
import java.text.DecimalFormat;
import java.util.Scanner;
public class No4 {
		public static void main(String []args){
			/* Algoritma */
			int N;
			int TabInput[];
			Scanner input = new Scanner(System.in);
			/* Algoritma */
			N = input.nextInt();
			TabInput = new int[N];
			//Isi array dengan inputan sejumlah N
			for(int i=0; i<N;i++)
			{
				TabInput[i] = input.nextInt();				 
			}
			//sorting array ascending
			for(int i=0; i<N;i++)
			{
				for(int j=i+1; j<N;j++)
				{
					int a;
					if(TabInput[i]>TabInput[j])
					{
						a= TabInput[j];
						TabInput[j]=TabInput[i];
						TabInput[i]=a;
					}
				}
			}
			//output
			if(N%2==1)
			{
				System.out.println(TabInput[N/2]);
			}else
			{
				float result=(float)(TabInput[N/2-1]+TabInput[N/2])/2;
				DecimalFormat format = new DecimalFormat("0.#");
				System.out.println(format.format(result)); 
			}
			
		}
 
 }
