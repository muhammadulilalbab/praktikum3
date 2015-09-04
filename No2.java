/*
 * 4-Sept-2015
 * Nama :Muhammad Ulil Albab
 * Nim  :23515006
 */
import java.util.Scanner;

public class No2{
	public static void main(String arg[]){
		/* variabel */
		Scanner input = new Scanner(System.in);
		int N, X,i, NbElmt=0, Max=-9999, Min =99999;
		int TabInpt[];
		int TabCount[];
		
		/* Algoritma */
		N = input.nextInt();
		TabInpt = new int[N];
		TabCount = new int[N];
		
		/* isi array dan cari nilai maksimal minimal*/
		for(i=0;i<N;i++)
		{
			TabInpt[i]=input.nextInt();
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
		X=input.nextInt();		
		for(i=0;i<N;i++)
		{
			if(TabInpt[i]==X)
			{
				TabCount[NbElmt] = i;
				NbElmt++;
			}
		}
		
		/* output */
		System.out.println(NbElmt);	
		if(NbElmt>0)
		{
			for(i=0;i<NbElmt;i++)
			{
				if(i==0)
				{
					System.out.print(TabCount[i]);
				}else
				{
					System.out.print(","+TabCount[i]);
				}
			}
			System.out.println();
			if(X==Max)
			{
				System.out.println("maksimum");
			}
			if(X==Min)
			{
				System.out.println("minimum");
			}
		}else
		{
			System.out.println(X+" tidak ada");
			
		}		
	}
}
