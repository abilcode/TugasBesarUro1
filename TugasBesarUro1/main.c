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
	Statistik S1;
	Achtung();
	Garis();

	StartSetZero(&S1);
	TampilanStat(S1);

	printf("Masukkan nilai 1: ");
	scanf("d", &x);
	UTS(&S1);
	TampilanStat(S1);
}
