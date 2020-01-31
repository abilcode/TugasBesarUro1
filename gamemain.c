#include<stdio.h>
#include<stdlib.h>
#include "gamemain.h"

int K_health, K_mood, K_wealth,K_switch;
int main () 
{
	

	//================================
	Statistik
	P_satu;

	DaftarStatistik 
	K_stat;

	//================================
	P_satu = 
	MakeVersiFungsi(10,10,10);
	K_stat = 
	Inisiasi (10,10,10);
	
	
	Achtung();
	Garis();
	
	do
	{
		

		printf("Masukan Perintah : ", K_switch);
		scanf("%d",&K_switch);

		switch (K_switch)
		{
			case 0 :
				TampilanStatAwal(K_stat);
				Garis();
				break;

			case 1 :
				K_health =  K_health + HealthAwal(K_stat) + Tidur(P_satu) ;
				printf("Health Berubah Menjadi : %d\n",K_health );
				K_health = K_health - HealthAwal(K_stat);
				Garis();
				break;
			
			case 2 :
				K_mood = K_mood + Play(P_satu) + MoodAwal(K_stat);
				printf("Mood Berubah Menjadi : %d\n",K_mood );
				K_mood = K_mood - MoodAwal(K_stat);
				Garis();
				
				break;
			case 3 :
				K_wealth = K_wealth + Work(P_satu) + WealthAwal(K_stat);
				printf("Wealth Berubah Menjadi : %d\n",K_wealth );
				K_wealth = K_wealth - WealthAwal(K_stat);
				K_health = K_health - HealthAwal(K_stat)/2;
				Garis();
				break;
			case 4 :
				K_mood = K_mood + 2*Date(P_satu) + MoodAwal(K_stat);
				printf("Mood Berubah Menjadi : %d\n",K_mood );
				K_mood = K_mood - MoodAwal(K_stat);
				K_wealth = K_wealth - WealthAwal(K_stat)/2;
				Garis();
			case 5 :
				K_health =  K_health + 2*HealthAwal(K_stat) + Tidur(P_satu) ;
				printf("Health Berubah Menjadi : %d\n",K_health );
				K_health = K_health;
				K_wealth = K_wealth - WealthAwal(K_stat)/2;
				Garis();
				break;
			case 6 :
				K_health =  K_health + HealthAwal(K_stat) ;
				printf("Health Berubah Menjadi : %d\n",K_health );
				K_health = K_health - Uts(P_satu);
				K_wealth = K_wealth - WealthAwal(K_stat)/2;
				Garis();
				break;
			case 7 :
				K_health =  K_health - Up(P_satu);
				K_health = K_health;
				Garis();
				break;
			case 8 :
				K_health =  K_health - 100*Up(P_satu);
				K_health = K_health;
				Garis();
				break;
			case 9 : 
				K_wealth = K_wealth + 2*Work(P_satu) + WealthAwal(K_stat);
				printf("Wealth Berubah Menjadi : %d\n",K_wealth );
				K_wealth = K_wealth - WealthAwal(K_stat);
				K_health = K_health - HealthAwal(K_stat)/2;
				Garis();
				break;
			case 10 :
				K_health =  K_health + 1000*HealthAwal(K_stat) ;
				K_health = K_health;
				Garis();
				break;
			case 11 :
				K_health =  K_health + 1000*HealthAwal(K_stat) ;
				K_health = K_health;
				Garis();
				break;



			default :
				printf("Input Tidak Valid.");



		}
	}
	while(K_health >= 0 && K_health <=80  );
	if (K_health <= 0)
	{
		printf("You Lose!\n");
	}
	else
	{
		printf("You Win!\n");
	}

	
	return 0;
}