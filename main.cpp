#include <iostream>
#include "generator.h"
#include "utils.h"

int main(int argc, char **argv)
{
	generator(5);
	int t[] = { 1, 2, 3 };
	utils( t, 3);
	std::cin.get();
	return 0;
}

