#pragma once
#include "includes.h"
#include "Obj.h"

class Pokemon: public Obj{
	private:
		int type;
	public:
		Pokemon();
		Pokemon(std::string Name, int Type);
		int getType();
};
