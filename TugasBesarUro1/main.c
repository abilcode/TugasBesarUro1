#include "gamerules.h"

int main()
{
	int MilihKegiatan;
	/*Membuat variable data struct*/
	Statistik 

	S1;
	Achtung();/*GUI*/
	Garis();

	StartSetZero(&S1);/*Set Status awal robot*/
	;/*Menampilkan status awal robot*/
	//UTS(&S1);/*Ambis kuy*/
	
	//Input Kegiatan :
	
		
	do
	{
		printf("Masukkan Kegiatan: ");
		scanf("%d", &MilihKegiatan);
		switch (MilihKegiatan)
		{
			case 0 :
				TampilanStat(S1);
				break;
			case 1 :
				Tidur(&S1);
				break;
			case 2 :
				Play(&S1);
				break;
			case 3:
				Work (&S1);
				break;
			case 4 :
				Pacaran (&S1);
				break;
			case 5 :
				Workout(&S1);
				break;
			case 6 :
				UTS(&S1);
				break;
			case 7 :
				Up(&S1);
				break;
			case 8 :
				S1.health = 0;
				break;
			case 9 :
				Danus(&S1);
				break;
			case 10 :
				Gamais(&S1);
				break;
			case 11 :
				Uro(&S1);
				break;
			default :
				printf("Input Tidak valid\n");
				Garis();

		}
	}while(S1.health > 0 && S1.health <= 100 );
	
	if(S1.health <= 0)
	{
		S1.health = 0;
		TampilanStat(S1);
		printf("You Lose!\n" );

	}
	else
	{
		S1.health = 100;
		TampilanStat(S1);
		printf("You Win!\n");

	}

	return 0;
}
