#include "stdafx.h"
#include <iostream>
#include "tvfm.h"

using namespace std;

bool Tv::tv_volup()
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

bool Tv::tv_voldown()
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

void Tv::tv_chanup()
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

void Tv::tv_chandown()
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


void Tv::tv_setting() const
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
