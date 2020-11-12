#include "includes.h"
#include "Pokemon.h"
#include "Player.h"
#include "Obj.h"

int main(){
	std::cout << "Project Pokemon" << std::endl;
	Pokemon p1("pikachu", 8);
	std::cout << p1.getName() << " " << p1.getType() << std::endl;

	Player Suban("Suban", p1);
	std::cout << Suban.getName() << std::endl;
	std::cout  << Suban.getPokemon() << std::endl;
}
