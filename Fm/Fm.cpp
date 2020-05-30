#include "Game.h"




int main() {
    

    //PlaySound(TEXT("test1.wav"), NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
    system("color 3");
    string team = "KYKSPOR";//Geçici takim
    Leauge lig1("FM KYK", 8, team);
    
    cout << "\n\n\n\n\n\n\n\n\n\n                              Choose a team:";
    cin >> team;
    lig1.chooseTeam(team);
    system("cls");
    cout << "________________________\nYOUR TEAM IS " << team << "\n________________________\n\n";
    cout << lig1;


    lig1.transfer();




	
	
	
	return 0;
}