#include "Obj.h"
#include "includes.h"

Obj::Obj(){
	name = "";
}

Obj::Obj(std::string Name){
	name = Name;
}

std::string Obj::getName(){
	return name;
}
