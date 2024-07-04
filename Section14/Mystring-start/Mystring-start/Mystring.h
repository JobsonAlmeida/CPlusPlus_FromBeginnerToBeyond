#pragma once

class Mystring {

private:
	char* str;
public:
	Mystring();
	Mystring(const char* s);
	Mystring(const Mystring& source);
	Mystring(Mystring &&source);

	~Mystring();

	Mystring& operator=(const Mystring& rhs);
	Mystring& operator=(Mystring&& rhs);

	Mystring operator-() const;
	Mystring operator+(const Mystring &rhs) const;
	bool operator==(const Mystring &rhs) const;

	void display() const;
	int get_length() const;
	const char* get_str() const;

	bool operator==(const Money& rhs) const;

	bool operator!=(const Money& rhs) const;

};