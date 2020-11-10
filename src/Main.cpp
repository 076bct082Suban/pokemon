#include "includes.h"
#include "Player.h"
#include "Pokemon.h"
//you forget to define the default constructor for Pokemon p in Player.h
int main(){
	std::cout << "Project Pokemon" << std::endl;
	Player p1("Suban");
	std::cout << p1.getName() << std::endl;
	std::cout << p1.getPokemon() << std::endl;
}
