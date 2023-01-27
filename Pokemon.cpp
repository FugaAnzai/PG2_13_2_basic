#include "Pokemon.h"
#include <stdio.h>

Pokemon::Pokemon(const char *name) {
	this->name = name;
}

Pokemon::~Pokemon() {

}

Pokemon::Pokemon(const Pokemon& obj) {
	printf("%s‚ğƒRƒs[\n", obj.name);
	name = obj.name;
}