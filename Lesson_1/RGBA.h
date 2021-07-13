#pragma once
#include <cstdint>

class RGBA
{
	std::uint8_t m_red{}, m_green{}, m_blue{}, m_alpha{};
public:
	RGBA() 
	{
		m_red = 0;
		m_green = 0;
		m_blue = 0;
		m_alpha = 255;
	}
	RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha)
	{
		m_red = red;
		m_green = green;
		m_blue = blue;
		m_alpha = alpha;
	}

	void print();
};

