#include "stdafx.h"
#include <iostream>
#include "tabtenn1.h"


TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht)
	:firstname(fn), lastname(ln), hasTable(ht)
{
}

TableTennisPlayer::~TableTennisPlayer()
{
}

void TableTennisPlayer::Name() const
{
	cout << lastname << ", " << firstname;
}



RatedPlayer::RatedPlayer(unsigned int r, const string & fn, const string & ln, bool ht)
	:rating(r), TableTennisPlayer(fn, ln, ht)
{
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
	:rating(r), TableTennisPlayer(tp)
{
}

RatedPlayer::~RatedPlayer()
{
}

