#pragma once
#include "includes.h"
#include "Pokemon.h"
class Player{
	private:
		std::string name;
		Pokemon p;
	public:
		Player();
		Player(std::string Name);
		std::string getName();
		std::string getPokemon();
};
