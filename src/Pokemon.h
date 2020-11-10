#pragma once
#include "includes.h"
#include "Obj.h"

class Pokemon: public Obj{
	private:
		int type;
	public:
		Pokemon(std::string Name, int Type);
		std::string getName();
		int getType();
};
