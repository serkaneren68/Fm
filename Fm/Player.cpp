#include "Game.h"
ostream& operator<<(ostream& os, Player& player) {
	os << player.getTeam() << ": " << player.getName() << " Power: " << player.getPow() << endl;
	return os;
}
istream& operator>>(istream& is, Player& player) {
	string name, team;
	int def, attack;
	cout << "Enter name, team, def and attack powers" << endl;
	getline(is, name);
	is >> team >> def >> attack;
	player.setPlayer(name, team, def, attack);
	return is;
}
Player::Player() {
	this->name = "-";
	this->team = "-";
	this->pow = 0;
}
Player::Player(string name, string team, int def, int attack) {
	setPlayer(name, team, def, attack);
}
void Player::setPlayer(string name, string team, int def, int attack) {
	this->name = name;
	this->team = team;
	this->def = def;
	this->attack = attack;
	this->pow = (def + attack) / 2;
}
void Player::print() {
	cout << team << ": " << name << " " << pow;
}

