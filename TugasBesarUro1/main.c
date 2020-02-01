/*
 * main.c
 *
 *  Created on: Feb 1, 2020
 *      Author: Niveus Caelus
 */

#include "gamerules.h"

int main()
{
	int x;
	Statistik S1;/*Membuat variable data struct*/
	Achtung();/*GUI*/
	Garis();

	StartSetZero(&S1);/*Set Status awal robot*/
	TampilanStat(S1);/*Menampilkan status awal robot*/

	printf("Masukkan nilai 1: ");
	scanf("d", &x);
	UTS(&S1);/*Ambis kuy*/
	TampilanStat(S1);
}
