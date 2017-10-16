#include "stdafx.h"
#include <iostream>
#include "tabtenn0.h"


TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht)
	:firstname(fn),lastname(ln),hasTable(ht)
{
}

TableTennisPlayer::~TableTennisPlayer()
{
}

void TableTennisPlayer::Name() const
{
	cout << lastname << ", " << firstname;
}
