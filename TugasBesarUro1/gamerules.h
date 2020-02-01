#ifndef GAMERULES_H_
#define GAMERULES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name;
	int health;
	int happiness;
	int hygine;
	int social;
} Statistik;

#define happiness(S) (S).happiness
#define hygine(S) (S).hygine
#define social(S) (S).social
#define health(S) (S).health

/*Game Start Rule*/
void Achtung();/*Game GUI(nivere)*/
void Garis();/*Game GUI*/

void StartSetZero (Statistik *S);/*menset status awal karakter*/
void TampilanStat(Statistik S); /*membuat tampilan status awal robot*/

//Kegiatan

void TampilanStat(Statistik S); /*membuat tampilan status awal robot*/

void Tidur(Statistik *S); //Melakukan Pekerjaan : Tidur

void Play(Statistik *S); //Melakukan Pekerjaan : Bermain

void Work (Statistik *S); // Bekerja

void Pacaran (Statistik *S); //Melakukan Pekerjaan : Pacara

void Workout(Statistik *S); //Melakukan Pekerjaan : Olahraga

void Up(Statistik *S); //Melakukan Pekerjaan : Ujian Ulang :(

void UTS(Statistik *S); //Melakukan Pekerjaan : Keos

void Danus(Statistik *S); //Melakukan Pekerjaan : Cuan

void Gamais(Statistik *S); //Melakukan Pekerjaan : Taubat

void Uro(Statistik *S); //Melakukan Pekerjaan : Yang ditunggu



#endif /* GAMERULES_H_ */
