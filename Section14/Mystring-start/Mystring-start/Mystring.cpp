#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <string.h>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring() : str{ nullptr }
{
	str = new char[1];
	*str = '\0';
}

Mystring::Mystring(const char* s) : str{ nullptr }
{
	if (s == nullptr)
	{
		str = new char[1];
		*str = '\0';
	}
	else
	{
		str = new char[std::strlen(s) + 1]; // takes the leght of s and sums 1 on that. 
		std::strcpy(str, s); //strcpy copies s to str. 
	}
}

Mystring::Mystring(const Mystring& source) : str{ nullptr }
{
	str = new char[std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
}

Mystring::Mystring(Mystring &&source):str(source.str)
{
	source.str = nullptr;
	std::cout << "Move constructor used" << std::endl;

}

//Remember, this you're responsible for de-allocating the memory that you allocate.
Mystring::~Mystring()
{
	delete [] str;
}

//Copy assignment operator
Mystring& Mystring::operator=(const Mystring& rhs)
{
	std::cout << "Copy assignment" << std::endl;

	if (this == &rhs)
	{
		return *this;
	}

	delete this->str;

	str = new char[std::strlen(rhs.str) + 1]; 

	std::strcpy(this->str, rhs.str);

	return *this;

}

//Move assignment
Mystring& Mystring::operator=(Mystring&& rhs)
{
	std::cout << "Using move assignment" << std::endl;

	if (this == &rhs)
	{
		return *this;
	}

	delete[] str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

//Equality
bool Mystring::operator==(const Mystring& rhs) const
{
	return (std::strcmp(str, rhs.str) == 0);

}

//Make lowercase 
Mystring Mystring:: operator-() const
{
	char* buff = new char[std::strlen(str) + 1];

	std::strcpy(buff, str);
	for (size_t i = 0; i < std::strlen(buff); i++)
		buff[i] = std::tolower(buff[i]);

	Mystring temp{ buff };

	delete[] buff;

	return temp;
}

//Concatenate method
Mystring Mystring::operator+(const Mystring &rhs) const
{
	char* buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
	std::strcpy(buff, str);
	std::strcat(buff, rhs.str);
	Mystring temp{ buff };

	delete[] buff;
	return temp;

}

void Mystring::display() const
{
	std::cout << str << ":" << get_length() << std::endl;
}

int Mystring::get_length() const
{
	return std::strlen(str);
}

const char* Mystring::get_str() const
{
	return str;
}