#include "stdafx.h"
#include <iostream>
#include "tv.h"

using namespace std;

bool Tv::volup()
{
	if (volume < MaxVal)
	{
		volume++;
		return true;
	}
	else
	{
		return false;
	}
}

bool Tv::voldown()
{
	if (volume > MinVal)
	{
		volume--;
		return true;
	}
	else
	{
		return false;
	}
}

void Tv::chanup()
{
	if (channel < maxchannel)
	{
		channel++;
	}
	else
	{
		channel = 1;
	}
}

void Tv::chandown()
{
	if (channel > 1)
	{
		channel--;
	}
	else
	{
		channel = maxchannel;
	}
}


void Tv::setting() const
{
	cout << "TV is " << (state == off ? "Off" : "On") << endl;

	if (state == on)
	{
		cout << "Volume setting = " << volume << endl;
		cout << "Channel setting = " << channel << endl;
		cout << "Mode = " << (mode == Antenna ? "Antenna" : "cable") << endl;
		cout << "Input = " << (input == TV ? "TV" : "DVD") << endl;
	}
}
