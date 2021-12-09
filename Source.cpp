#include<iostream>
#include <deque>
#include "Header.h"

int main() {

	Students stud;

	stud.add();
	stud.add();

	std::cout << " - - - " << std::endl;

	stud.print(&stud);

}