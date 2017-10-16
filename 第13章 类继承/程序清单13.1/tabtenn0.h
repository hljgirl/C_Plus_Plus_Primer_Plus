#pragma once
#ifndef TABTENN0_H_
#define TABTENN0_H_

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


#endif