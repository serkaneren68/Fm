
#ifndef    GAME_H
#define GAME_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string>


using namespace std;
class Player {
    friend ostream& operator<<(ostream&, Player&);
    friend istream& operator>>(istream&, Player&);
public:
    Player();
    //    ~Player();
    Player(string, string, int, int);
    void setPlayer(string, string, int, int);
    string getName() { return name; }
    string getTeam() { return team; }
    int getPow() { return pow; }
    void print();
private:
    string name;
    string team;
    int def;
    int attack;
    int pow;
    int goals;


};


class Team {
    friend ostream& operator<<(ostream&, Team&);
public:
    Team();
    Team(string, Player* players, int);
    //    ~Team(){ delete []playerlist; }
    Team& operator = (const Team& D) {//düzenle
        name = D.name;
        size = D.size;
        power = D.power;
        puan = D.puan;
        playerlist = D.playerlist;
        return *this;
    }
    void setTeam(string, Player* players, int);
    void chooseTeam();
    string getName() { return name; }
    Player* getPlayerList() { return playerlist; };
    int getPow() { return power; }
    int getPuan() { return puan; }
    int getSize() { return size; }
    void addPlayer(Player player);
    void addPlayer(string, int, int);
    void winMatch() { puan += 3; };
    Player deletePlayer(Player player);
    Player deletePlayer(string name);
    void print();


private:
    string name;
    Player* playerlist;
    int size;
    int power;
    int puan;
};


class Leauge {
    friend ostream& operator<<(ostream&, Leauge&);
public:
    Leauge(string, int, string);
    //    ~Leauge(){ delete []teamList; }
    void setLeauge(string, int, string);
    void chooseTeam(string name);
    Team& macYap(Team& team1, Team& team2);
    Team* getMyTeam() { return myTeam; }
    Team* getTeam() { return teamList; }
    int getSize() { return size; }
    string getName() { return name; }
    void kura();
    void transfer();
    void Print();
private:
    Team* myTeam;
    string name;
    Team* teamList;
    int size;
};



#endif








