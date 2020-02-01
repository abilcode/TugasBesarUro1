/*
 * gamerules.h
 *
 *  Created on: Jan 31, 2020
 *      Author: Niveus Caelus
 */

#ifndef GAMERULES_H_
#define GAMERULES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name;
	int health;
	int hapiness;
	int hygine;
	int social;
} Statistik;

#define hapiness(S) (S).hapiness
#define hygine(S) (S).hygine
#define social(S) (S).social
#define health(S) (S).health

/*Game Start Rule*/
void Achtung();/*Game GUI(nivere)*/
void Garis();

void StartSetZero (Statistik *S);
void TampilanStat(Statistik S);

//Kegiatan
int Tidur (Statistik *P);

int Play (Statistik *P);

int Work (Statistik *P);

int Date (Statistik *P);

void UTS (Statistik* P);

int Up (Statistik *P);

#endif /* GAMERULES_H_ */
