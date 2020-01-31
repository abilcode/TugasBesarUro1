#include<stdio.h>
#include "gamemain.h"

//File Realisasi

//Selektor :
Statistik MakeVersiFungsi (int health, int wealth, int mood)
{
	Statistik P;
	P.h = health;
	P.w = wealth;
	P.m = mood;

	return P;

}
DaftarStatistik Inisiasi (int K_health, int K_wealth, int K_mood)
{
	DaftarStatistik K;
	K.kh = K_health;
	K.kw = K_wealth;
	K.km = K_mood;
	

	return K;

}



//StatsAwal
int HealthAwal
(DaftarStatistik K)
{
	return (K.kh);
}

int MoodAwal
(DaftarStatistik K)
{
	return (K.km);
}

int WealthAwal
(DaftarStatistik K)
{
	return (K.kw);
}



//Kegiatan :
int Tidur
(Statistik P)
{
	return (P.h);
}

int Play
(Statistik P)
{
	return (P.m);
}

int Work
(Statistik P)
{
	return(P.w);
}

int Date
(Statistik P)
{
	return(P.m);
}

int Uts
(Statistik P)
{
	return(5+P.h);
}

int Up
(Statistik P)
{
	return(3*P.h);
}

//Pemanis
void Achtung()
{
	printf("======================================TEPEBE SIMULEZEN=======================================\n");
	printf("=============================================================================================\n");
	printf("0.Statistik Awal \t\t\t 1. Tidur\n");
	printf("2.Main            \t\t\t 3. Kerja \n");
	printf("4.Pacaran          \t\t\t 5. Olahraga \n");
	printf("6.UTS               \t\t\t 7. UP\n");
	printf("8.BunDir (aawaoK)    \t\t\t 9. Danusan\n");
	printf("10.GAMAIS             \t\t\t 11. DiLantik UroITB\n");
}

void Garis()
{
	printf("=============================================================================================\n");
}

int TampilanStatAwal
(DaftarStatistik K)
{
	printf("Statistik Awal : \n");
	printf("Health : %d\n",K.kh );
	printf("Mood : %d\n",K.km );
	printf("Wealth : %d\n",K.kw );

}








