#include "Player.h"
#include "Pokemon.h"
Player::Player(std::string Name){
	name = Name;
	p = Pokemon("pikachu");
}

std::string Player::getName(){
	return name;
}

std::string Player::getPokemon(){
	return	p.getName();
}
