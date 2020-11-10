#include "Pokemon.h"

Pokemon::Pokemon(std::string Name){
	name = Name;
}

std::string Pokemon::getName(){
	return name;
}
