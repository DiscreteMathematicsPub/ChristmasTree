// ChrismasTree.cpp : Defines the entry point for the console application.
//

#include "ChristmasTree.h"
#include <iostream>
#include <stdio.h>


int main(int argc, char* argv[])
{
	int branchesLevel, rootLevel;

	printf("Hola que tal\n");
	std::cout << "Hello world \n";

	std::cout << "Enter number of leafs levels \n";
	std::cin >> branchesLevel;

	std::cout << "Enter number of root levels \n";
	std::cin >> rootLevel;

	drawTree(branchesLevel, rootLevel);
	std::cin >> rootLevel;

	return 0;
}

void drawTree(int bl, int rl) {
	drawLeaves(bl);
	drawRoot(bl,rl);
}

void drawLeaves(int bl) {
	for (int i=1; i<=bl; i++) {
		for (int j=1; j<=bl-i; j++) {
			std::cout << " ";
		}
		for (int j=1; j<=i*2-1; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
}

void drawRoot(int bl, int rl) {
	for (int i=0; i<rl; i++) {
		for (int j=1; j<bl-1; j++) {
			std::cout << " ";
		}
		std::cout << "| |\n";
	}
}
