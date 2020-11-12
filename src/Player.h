#pragma once
#include "includes.h"
#include "Pokemon.h"
#include "Obj.h"

class Player: public Obj{
	protected:
		Pokemon p;
	public:
		Player(std::string Name, Pokemon pokemon);
		std::string getPokemon();
};
