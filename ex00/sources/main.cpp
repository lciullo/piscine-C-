#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Tom("Tom");
	ClapTrap Jerry("Jerry");
	std::cout << std::endl;
	Tom.attack("Jerry");
	Jerry.takeDamage(11);
	Jerry.beRepaired(11);
	Jerry.attack("Tom");
	Tom.takeDamage(11);
	Tom.beRepaired(11);
	std::cout << std::endl;
	return (0);
}