#pragma once
class Pokemon
{
public:
	const char* name;
public:
	Pokemon(const char *name);
	~Pokemon();
	Pokemon(const Pokemon& obj);

};

