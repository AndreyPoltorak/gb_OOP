#include "RGBA.h"
#include <iostream> 

void RGBA::print()
{
	std::cout << "m_red = " << this->m_red << std::endl;
	std::cout << "m_green = " << this->m_green << std::endl;
	std::cout << "m_blue = " << this->m_blue << std::endl;
	std::cout << "m_alpha = " << this->m_alpha << std::endl;
}
