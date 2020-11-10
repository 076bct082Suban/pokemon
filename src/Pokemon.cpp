#include "Pokemon.h"

Pokemon::Pokemon(std::string Name, int Type){
	name = Name;
	type = Type;
}

std::string Pokemon::getName(){
	return name;
}

int Pokemon::getType(){
	return type;
}
