#pragma once
#ifndef TABTENN1_H_
#define TABTENN1_H_

#include <string>

using namespace std;

class TableTennisPlayer
{
public:
	TableTennisPlayer(const string & fn = "none", const string &ln = "none", bool ht = false);
	~TableTennisPlayer();

	void Name() const;
	bool HasTable() const { return hasTable; };
	void ResetTable(bool v) { hasTable = v; };
private:
	string firstname;
	string lastname;
	bool hasTable;
};


class RatedPlayer :public TableTennisPlayer
{
public:
	RatedPlayer(unsigned int r = 0, const string & fn = "none", const string & ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
	~RatedPlayer();

	unsigned int Rating() const { return rating; };
	void ResetRating(unsigned int r) { rating = r; };

private:
	unsigned int rating;
};


#endif