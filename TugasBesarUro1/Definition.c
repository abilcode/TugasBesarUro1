/*
 * Definition.c
 *
 *  Created on: Feb 1, 2020
 *      Author: Niveus Caelus
 */

#include "gamerules.h"

void Achtung()/*Game GUI*/
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
void Garis()/*GUI*/
{
	printf("=============================================================================================\n");
}

void StartSetZero(Statistik *S) /*Ini adalah status awal robot*/
{
	hapiness(*S) = 50;
	health(*S) = 50;
	hygine(*S) = 20;
	social(*S) = 0;
}

void TampilanStat(Statistik S) /*Menampilkan keterangan status awal robot*/
{
	printf("Your Hilmys's Current Status : \n");
	printf("Health : %d\n", S.health);
	printf("Mood : %d\n", S.social);
	printf("Hygine : %d\n", S.hygine );
}

void UTS(Statistik *S) /*Robot lagi ambis dan ansos supaya bisa belajar dengan serius*/
{
	social(*S) -= 20;
	health(*S) -= 30;
	printf("imma smartass now");
}
