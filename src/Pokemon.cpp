#include "Pokemon.h"

Pokemon::Pokemon(){
	name = "";
	type = 0;
}

Pokemon::Pokemon(std::string Name, int Type){
	name = Name;
	type = Type;
}

int Pokemon::getType(){
	return type;
}
