#include <iostream>

using namespace std;

extern double warming;


void update(double dt);
void local();

void update(double dt)
{
	//extern double warming;
	warming += dt;
	cout << "Updating global warming to " << warming;
	cout << " degrees.\n";
}

void local()
{
	double warming = 0.8;
	cout << "Local warming = " << warming;
	cout << " degrees.\n";

	cout << "But global warming = " << ::warming;
	cout << " degrees.\n";
}
