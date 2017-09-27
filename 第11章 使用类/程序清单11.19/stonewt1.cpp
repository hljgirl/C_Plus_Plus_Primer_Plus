#include <iostream>
#include "stonewt1.h"

namespace STONEWT
{

	Stonewt::Stonewt()
	{
		stone = 0;
		pds_left = 0.0;
		pounds = 0.0;
	}


	Stonewt::Stonewt(double lbs)
	{
		stone = (int)lbs / Stonewt::Lbs_per_stn;
		pds_left = (int)lbs % Stonewt::Lbs_per_stn + lbs - (int)lbs;

		pounds = lbs;
	}


	Stonewt::Stonewt(int stn, double lbs)
	{
		stone = stn;
		pds_left = lbs;
		pounds = stn * Stonewt::Lbs_per_stn + lbs;

	}

	Stonewt::~Stonewt()
	{
	}

	void Stonewt::show_lbs() const
	{
		std::cout << pounds << " pounds\n";
	}


	void Stonewt::show_stn() const
	{
		std::cout << stone << " stone, " << pds_left << " pounds\n";
	}

	Stonewt::operator int()
	{
		return int(pounds + 0.5);
	}

	Stonewt::operator double()
	{
		return pounds;
	}
}