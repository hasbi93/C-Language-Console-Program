#include<stdio.h>
#include<math.h>
#include<string.h>


/* ADA KESALAHAN LOGIKA DALAM ALGORITMA INI!! HARAP DIPERHATIKAN */

float a,b,c,A,B,C,hasil,hasil2,hasil3;

main()
{
	printf("Masukkan Panjang dari 3 Sisi dari Suatu Segitiga , untuk Mengetahui Jenis Segitiga Tersebut. \n");
	scanf("%f %f %f",&a,&b,&c);
	if (a>=b && a>=c)
		{
			C=a;
			if(b>=c)
				B=b,A=c;
			else
				B=c,A=b;	
		}
	else
		if(b>=a && b>=c)
			{
				C=b;
				if(a>=c)
					B=a,A=c;
				else
					B=c,A=a;
			}
		else
			if(c>=a && c>=b)
				{
					C=c;
					if(a>=b)
						B=a,A=b;
					else
						B=b,A=a;
				}
			else
				printf("Maaf, Angka yang Anda Masukkan Salah. \n");
	hasil=pow(A,2);
	hasil2=pow(B,2);
	hasil3=pow(C,2);
	if(hasil<=(hasil2+hasil3))
		printf("Segitiga Lancip di sisi A. \n");
	else
		if (hasil2<=(hasil+hasil3))
			printf("Segitiga Lancip di sisi B. \n");
		else
			if(hasil3<=(hasil+hasil2))
				printf("Segitiga Lancip di sisi C. \n");
			else
				if(hasil>=(hasil2+hasil3))
					printf("Segitiga Tumpul di Sudut A. \n");
				else
					if(hasil2>=(hasil+hasil3))
						printf("Segitiga Tumpul di Sudut B. \n");
					else
						if(hasil3>=(hasil+hasil2))
							printf("Segitiga Tumpul di Sudut C. \n");
						else
							if(hasil==(hasil2+hasil3))
								printf("Segitiga Siku-Siku di Sudut A.\n");
							else
								if(hasil2==(hasil+hasil3))
									printf("Segitiga Siku-Siku di Sudut B. \n");
								else
									if (hasil3==(hasil+hasil2))
										printf("Segitiga Siku-Siku di Sudut C. \n");
									else
										printf("Segitiga Imaginer alias Error!!! \n");
}
