#include "gamerules.h"

void Achtung()/*Game GUI*/
{
	printf("======================================TEPEBE SIMULEZEN=======================================\n");
	printf("=============================================================================================\n");
	printf("0.Cek Stattistik \t\t\t 1. Tidur\n");
	printf("2.Main            \t\t\t 3. Kerja \n");
	printf("4.Pacaran          \t\t\t 5. Olahraga \n");
	printf("6.UTS               \t\t\t 7. UP\n");
	printf("8.BunDir (aawaoK)    \t\t\t 9. Danusan\n");
	printf("10.GAMAIS             \t\t\t 11. DiLantik UroITB\n");
}
void Garis()/*GUI*/
{
	printf("=============================================================================================\n");
}

void StartSetZero(Statistik *S) /*Ini adalah status awal robot*/
{
	happiness(*S) = 50;
	health(*S) = 50;
	hygine(*S) = 20;
	social(*S) = 0;
}
//Kegiatan
//Menampilkan Statistik
void TampilanStat(Statistik S) /*Menampilkan keterangan status awal robot*/
{
	printf("Your Hilmys's Current Status : \n");
	printf("Health : %d\n", S.health);
	printf("Mood : %d\n", S.social);
	printf("Hygine : %d\n", S.hygine );
	printf("Happiness : %d\n",S.happiness);
	
	Garis();
}
// Tidur 1.
void Tidur(Statistik *S) /*Lagi Tidur Biar Santuy*/
{
	social(*S) -= 20;
	health(*S) += 30;
	printf("Fresh like a breezeeee\n");
	Garis();
}
//Main 2.
void Play(Statistik *S) //Main Biar ga Bundir
{
	hygine(*S) -=10;
	health(*S) -= 5;
	social(*S) += 20;
	printf("Yeayyy Thxxx...\n");
	Garis();

}
//Kerja 3.
void Work (Statistik *S)
{
	hygine(*S) -=5;
	social(*S) += 10;
	health(*S) += 10;
	printf("Tubes dulu baru kamu\n");
	Garis();
}
//Pacaran
void Pacaran (Statistik *S)
{
	happiness(*S) +=20;
	hygine(*S) +=10;
	social(*S) += 5;
	printf("MuAAAaccHHH ! \n");
	Garis();
}
//Latman
void Workout(Statistik *S)
{
	health(*S) += 10;
	hygine(*S) -=10;
	happiness(*S) +=15;
	social(*S) += 5;
	printf("Latman SKuyyyy\n");
	Garis();


}
//Keos
void UTS(Statistik *S) /*Robot lagi ambis dan ansos supaya bisa belajar dengan serius*/
{
	social(*S) -= 20;
	health(*S) -= 30;
	printf("imma smartass now\n");
	Garis();
}
//Keos**100
void Up(Statistik *S)
{
	health(*S) -= 30;
	happiness(*S) -=35;
	social(*S) -= 5;
	printf("OTW GNUUUU\n");
	Garis();

}
//Cuuaan
void Danus(Statistik *S)
{
	happiness(*S) +=25;
	printf("Cuan Cuan Cuan\n");
}
//Taubat
void Gamais(Statistik *S)
{
	happiness(*S) +=20;
	social(*S) += 15;
	printf("Alhamdulillah\n");
}
//Yey
void Uro(Statistik *S)
{
	happiness(*S) +=20;
	social(*S) += 15;
	printf("YEY, Dilantik, nimnya ada di Readme ya kak wkwkw\n");
}
