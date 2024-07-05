#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Mystring2.h"

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

Mystring::Mystring(Mystring&& source) :str(source.str)
{
	source.str = nullptr;
	std::cout << "Move constructor used" << std::endl;
}

//Remember, this you're responsible for de-allocating the memory that you allocate.
Mystring::~Mystring()
{
	delete[] str;
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

//Equality
//Remember: this is a regular function, not a member function. 
bool operator==(const Mystring& lhs, const Mystring& rhs)
{
	return (std::strcmp(lhs.str, rhs.str)==0);
}


//Make lowercase
Mystring operator-(const Mystring& obj)
{
	//remember: this memory alocate is not dealocate by the compilator. We must deallocate it manually when 
	// we are not using it anymore. 
	char* buff = new char[std::strlen(obj.str) + 1];

	std::strcpy(buff, obj.str); 

	for (size_t i = 0; i <= std::strlen(buff); i++)
	{
		buff[i] = std::tolower(buff[i]);  
	}
	
	Mystring temp{ buff };

	delete[] buff; //here we're dealocating the memory we are not using anymore. 

	return temp;

}

//Concatenation
Mystring operator+(const Mystring& lhs, const Mystring& rhs)
{
	char* buffer = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1]; //here we alocate memory
	std::strcpy(buffer, lhs.str);
	std::strcat(buffer, rhs.str);

	Mystring temp{ buffer };

	delete[] buffer; // here we dealocate the memory we have allocated

	return temp;
}