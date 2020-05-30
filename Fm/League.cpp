#include "Game.h"
ostream& operator<<(ostream& os, Leauge& lig) {
	int i;
	os << lig.getName() << " Leauge:" << endl << "-------------------------------------------" << endl;
	for (i = 0; i < lig.getSize(); i++) {
		os << lig.teamList[i].getName() << " Power:" << lig.teamList[i].getPow() << ", Point:" << lig.teamList[i].getPuan() << endl;
	}
	os << endl;
	return os;
}
Leauge::Leauge(string name = "-", int num = 1, string team = "-") {
	setLeauge(name, num, team);
}
void Leauge::setLeauge(string name = "-", int num = 1, string team = "-") {
	this->name = name;
	this->size = num;
	teamList = new Team[num];
	//TEAMS
	Player GALATASARAY[5];
	GALATASARAY[0].setPlayer("Fernando Muslera", "GALATASARAY", 69, 92);
	GALATASARAY[1].setPlayer("Radamel Falcao", "GALATASARAY", 91, 49);
	GALATASARAY[2].setPlayer("Mario Lemina", "GALATASARAY", 75, 71);
	GALATASARAY[3].setPlayer("Mariano Ferreira", "GALATASARAY", 87, 87);
	GALATASARAY[4].setPlayer("Younes Belhanda", "GALATASARAY", 77, 59);
	Player FENERBAHCE[5];
	FENERBAHCE[0].setPlayer("Altay Bayindir", "FENERBAHCE", 23, 69);
	FENERBAHCE[1].setPlayer("Serdar Aziz", "FENERBAHCE", 41, 77);
	FENERBAHCE[2].setPlayer("Luiz Gustavo", "FENERBAHCE", 83, 92);
	FENERBAHCE[3].setPlayer("Max Kruse", "FENERBAHCE", 82, 45);
	FENERBAHCE[4].setPlayer("Vedat Muriqi", "FENERBAHCE", 72, 33);
	Player BESIKTAS[5];
	BESIKTAS[0].setPlayer("Loris Karius", "BESIKTAS", 54, 82);
	BESIKTAS[1].setPlayer("Domagoj Vida", "BESIKTAS", 47, 83);
	BESIKTAS[2].setPlayer("Mohamed Elneny", "BESIKTAS", 73, 80);
	BESIKTAS[3].setPlayer("Adem Ljajic", "BESIKTAS", 83, 43);
	BESIKTAS[4].setPlayer("Burak Yilmaz", "BESIKTAS", 79, 39);
	Player KYKSPOR[5];
	KYKSPOR[0].setPlayer("Oguzhan Tokuc", "KYKSPOR", 81, 86);
	KYKSPOR[1].setPlayer("Asim Uyanik", "KYKSPOR", 47, 75);
	KYKSPOR[2].setPlayer("Serkan Eren", "KYKSPOR", 88, 93);
	KYKSPOR[3].setPlayer("Furkan Kucuk", "KYKSPOR", 83, 75);
	KYKSPOR[4].setPlayer("Ebubekir Senoglu", "KYKSPOR", 88, 87);
	Player TRABZONSPOR[5];
	TRABZONSPOR[0].setPlayer("Ugurcan Cakir", "TRABZONSPOR", 55, 76);
	TRABZONSPOR[1].setPlayer("Filip NovAk", "TRABZONSPOR", 69, 72);
	TRABZONSPOR[2].setPlayer("Badou Ndiaye", "TRABZONSPOR", 73, 80);
	TRABZONSPOR[3].setPlayer("Jose Sosa", "TRABZONSPOR", 89, 81);
	TRABZONSPOR[4].setPlayer("Alexander Sorlorth", "TRABZONSPOR", 91, 53);
	Player BASAKSEHIR[5];
	BASAKSEHIR[0].setPlayer("Mert Gunok", "BASAKSEHIR", 57, 75);
	BASAKSEHIR[1].setPlayer("Gael Clichy","BASAKSEHIR",71,86);
	BASAKSEHIR[2].setPlayer("Ýrfan Can Kahveci","BASAKSEHIR",73,80);
	BASAKSEHIR[3].setPlayer("Edin Visca", "BASAKSEHIR", 91, 59);
	BASAKSEHIR[4].setPlayer("Enzo Crivelli", "BASAKSEHIR", 72, 35);
	Player SIVASSPOR[5];
	SIVASSPOR[0].setPlayer("Ugurcan Cakir", "SIVASSPOR", 55, 76);
	SIVASSPOR[1].setPlayer("Filip NovAk", "SIVASSPOR", 69, 72);
	SIVASSPOR[2].setPlayer("Badou Ndiaye", "SIVASSPOR", 73, 80);
	SIVASSPOR[3].setPlayer("Jose Sosa", "SIVASSPOR", 89, 81);
	SIVASSPOR[4].setPlayer("Alexander Sorlorth", "SIVASSPOR", 91, 53);
	Player ALANYASPOR[5];
	ALANYASPOR[0].setPlayer("Ugurcan Cakir", "ALANYASPOR", 55, 76);
	ALANYASPOR[1].setPlayer("Filip NovAk", "ALANYASPOR", 69, 72);
	ALANYASPOR[2].setPlayer("Badou Ndiaye", "ALANYASPOR", 73, 80);
	ALANYASPOR[3].setPlayer("Jose Sosa", "ALANYASPOR", 89, 81);
	ALANYASPOR[4].setPlayer("Alexander Sorlorth", "ALANYASPOR", 91, 53);
	//	Player TRABZONSPOR[5]={{"Ugurcan Cakir","TRABZONSPOR",55,76},{"Filip NovAk","TRABZONSPOR",69,72},{"Badou Ndiaye","TRABZONSPOR",73,80},{"Jose Sosa","TRABZONSPOR",89,81},{"Alexander Sorlorth","TRABZONSPOR",91,53}};
	// 	Player BASAKSEHIR[5]={{"Mert Gunok","BASAKSEHIR",57,75},{"Gael Clichy","BASAKSEHIR",71,86},{"Ýrfan Can Kahveci","BASAKSEHIR",73,80},{"Edin Visca","BASAKSEHIR",91,59},{"Enzo Crivelli","BASAKSEHIR",72,35}};
	// 	Player GOZTEPE[5]={{"Beto","GOZTEPE",34,75},{"Titi","GOZTEPE",42,76},{"Serdar Gurler","GOZTEPE",76,49},{"Mossoro","GOZTEPE",74,46},{"Kamil Wilczek","GOZTEPE",71,48}};
	// 	Player DENIZLISPOR[5]={{"Adam Stachowiak","DENIZLISPOR",73,41},{"Mustafa Yumlu","DENIZLISPOR",38,69},{"Ogenyi Onazi","DENIZLISPOR",70,75},{"Ismail Aissati","DENIZLISPOR",64,41},{"Hugo Rodallega","DENIZLISPOR",74,45}};
	// 	Player RIZESPOR[5]={{"Gokhan Akkan","RIZESPOR",48,82},{"Fernandes","RIZESPOR",34,74},{"Denys Garmash","RIZESPOR",72,72},{"Fernando H. Boldrin","RIZESPOR",69,59},{"Milan Škoda","RIZESPOR",71,49}};
	// 	Player SIVASSPOR[5]={{"Mamadou Samassa","SIVASSPOR",59,76},{"Goiano","SIVASSPOR",63,75},{"Emre Kilinc","SIVASSPOR",86,56},{"Claudemir Domingue","SIVASSPOR",70,72},{"Arouna Koné","SIVASSPOR",73,40}};
	//	Player ALANYASPOR[5]={{"Marafona","ALANYASPOR",37,7},{"Baiano","ALANYASPOR",66,72},{"Djalma","ALANYASPOR",78,53},{"Fernandes","ALANYASPOR",75,38},{"Cisse","ALANYASPOR",91,51}};
	//	
	teamList[0].setTeam("GALATASARAY", GALATASARAY, 5);
	teamList[1].setTeam("FENERBAHCE", FENERBAHCE, 5);
	teamList[2].setTeam("BESIKTAS", BESIKTAS, 5);
	teamList[3].setTeam("KYKSPOR", KYKSPOR, 5);
	teamList[4].setTeam("TRABZONSPOR", TRABZONSPOR, 5);
	teamList[5].setTeam("BASAKSEHIR",BASAKSEHIR,5);
	teamList[6].setTeam("SIVASSPOR",SIVASSPOR,5);
	teamList[7].setTeam("ALANYASPOR",ALANYASPOR,5);
	chooseTeam(team);
}
void Leauge::chooseTeam(string name) {
	int i;
	for (i = 0; i < size; i++) {
		if (teamList[i].getName().compare(name) == 0) {
			myTeam = &teamList[i];
		}
	}
}
Team& Leauge::macYap(Team& team1, Team& team2) {
	int sumPow = team1.getPow() + team2.getPow();
	float win1;
	win1 = team1.getPow() * 100 / sumPow;
	int random;
	//srand(time(0));
	random = (rand() % 100);
	//	cout<<random<<endl;
	if (random < win1) {
		team1.winMatch();
		return team1;
	}
	else {
		team2.winMatch();
		return team2;
	}
}
void Leauge::kura() {
	const int numberofTeams = 8;

	Team* temp = new Team[8];
	for (int i = 0; i < 8; ++i)
		temp[i] = teamList[i];
	Team** weeks = new Team * [7];
	for (int i = 0; i < 7; ++i)
		weeks[i] = new Team[8];

	weeks[0] = teamList;
	for (int i = 0; i < 6; i++) {
		temp[0] = teamList[0];
		temp[1] = teamList[3];
		temp[2] = teamList[1];
		temp[3] = teamList[5];
		temp[4] = teamList[2];
		temp[5] = teamList[7];
		temp[6] = teamList[4];
		temp[7] = teamList[6];

		for (int j = 0; j < 8; j++) {
			cout << teamList[j].getName() << "--";
			teamList[j] = temp[j];
			cout << teamList[j].getName() << "\n";
			weeks[i + 1][j] = teamList[j];
		}
	}
	for (int i = 0; i < 7; i++) {
		
		
		
		for (int j = 0; j < 8; j+=2) {
			macYap(weeks[i][j], weeks[i][j + 1]);
				
		}
	}

}
void Leauge::transfer() {
	fflush(stdin);
	string player, takim;
	Player gecici;

	int i, j, k, option, sayac = 0;

	cout << "Choose an option" << endl << "1-Baska takimdan oyuncu transfer et" << endl << "2-Benim takimimdan oyuncu transfer et";
	cout << endl << "3-Takimima yeni bir oyuncu ekle" << endl << "4-Takim sec ve oyuncularini goster" << endl << "5-Transferi sonlandir" << endl;
	fflush(stdin);
	cin >> option;

	switch (option) {
	case 1:
		cin.ignore();
		cout << "Transfer yapilacak oyuncu tam adini giriniz" << endl;
		getline(cin, player);
		sayac = 0;
		for (i = 0; i < this->size; i++) {
			for (j = 0; j < teamList[i].getSize(); j++) {
				if (player.compare(teamList[i].getPlayerList()[j].getName()) == 0) {
					gecici = teamList[i].deletePlayer(player);
					getMyTeam()->addPlayer(gecici.getName(), gecici.getPow(), gecici.getPow());
					sayac++;
				}
			}
		}
		if (sayac == 0) {
			cout << "Boyle bir oyuncu bulunmamaktadir!" << endl;
		}
		transfer();
		break;
	case 2:
		cin.ignore();
		cout << "Transfer yapilacak oyuncu tam adini giriniz" << endl;
		getline(cin, player);
		gecici = getMyTeam()->deletePlayer(player);
		cout << "Enter team name" << endl;
		cin >> takim;
		sayac = 0;
		for (i = 0; i < this->size; i++) {
			if (takim.compare(teamList[i].getName()) == 0) {
				teamList[i].addPlayer(gecici.getName(), gecici.getPow(), gecici.getPow());
				cout << teamList[i];
				sayac++;
			}
		}
		if (sayac == 0) {
			cout << "Boyle bir oyuncu bulunmamaktadir!" << endl;
		}
		cout << *getMyTeam();
		transfer();
		break;
	case 3:
		cin.ignore();
		cout << "Transfer yapilacak oyuncu tam adini giriniz" << endl;
		getline(cin, player);
		cout << "Yeni oyuncu adi: " << player << endl << "Oyuncunun defans ve atak gucunu giriniz.." << endl;
		cin >> i >> j;
		getMyTeam()->addPlayer(player, i, j);
		cout << *getMyTeam();
		transfer();
		break;
	case 4:
		cout << "Oyunculari gosterilecek takimi seciniz.." << endl;
		cin >> takim;
		sayac = 0;
		for (i = 0; i < this->size; i++) {
			if (teamList[i].getName().compare(takim) == 0) {
				cout << teamList[i];
				sayac++;
			}
		}
		if (sayac == 0) {
			cout << "Boyle bir takim bulunmamaktadir!" << endl;
		}
		transfer();
		break;
	case 5:
		cout << "Transfer yapilmayacak.." << endl;
		break;
	default:
		cout << "Hatali secim yaptýnýz.." << endl;
		transfer();
		break;
	}


}
void Leauge::Print() {
	int i;
	cout << name << " Leauge:" << endl << "-------------------------------------------" << endl;
	for (i = 0; i < size; i++) {
		cout << teamList[i].getName() << " Power:" << teamList[i].getPow() << ", Point:" << teamList[i].getPuan() << endl;
	}
}

