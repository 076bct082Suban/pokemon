#include "Player.h"
#include "Pokemon.h"
Player::Player(std::string Name, Pokemon pokemon){
	name = Name;
	p = pokemon;
}
std::string Player::getPokemon(){
	return	p.getName();
}

