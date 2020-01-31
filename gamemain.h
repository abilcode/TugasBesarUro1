//Game
//File Header

//Penggunaan Struct untuk ADT (Abstrac Data Type)

typedef struct 
{
	int h;//Health
	int w;//Wealth
	int m;//mood
} Statistik;

typedef struct 
{
	int kh;//K_Health
	int kw;//K_Wealth
	int km;//K_mood
	int kc;//counter
} DaftarStatistik;






Statistik MakeVersiFungsi 
(int health, int wealth, int mood);

DaftarStatistik Inisiasi 
(int K_health, int K_wealth, int K_mood);




//StatsAwal
void Achtung();
void Garis();

int TampilanStatAwal
(DaftarStatistik K);

int HealthAwal
(DaftarStatistik K);

int MoodAwal
(DaftarStatistik K);

int WealthAwal
(DaftarStatistik K);

//Kegiatan
int Tidur
(Statistik P);

int Play
(Statistik P);

int Work
(Statistik P);

int Date
(Statistik P);

int Uts
(Statistik P);

int Up
(Statistik P);



//SwitchCase :








