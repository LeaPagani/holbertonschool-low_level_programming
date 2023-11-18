#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - Function that prints a name
* @name: String
* @f: Pointer to function
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	f(name);
}
