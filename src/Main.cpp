#include "includes.h"
#include "Pokemon.h"

int main(){
	std::cout << "Project Pokemon" << std::endl;
	Pokemon p1("pikachu", 8);
	std::cout << p1.getName() << std::endl << p1.getType() << std::endl;
}
