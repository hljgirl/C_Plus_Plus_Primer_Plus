#pragma once
#ifndef STONEWT1_H_
#define STONEWT1_H_

namespace STONEWT
{
	class Stonewt
	{
	public:
		Stonewt();
		Stonewt(double lbs);
		Stonewt(int stn, double lbs);
		~Stonewt();

		void show_lbs() const;
		void show_stn() const;

		operator int();
		operator double();

	private:
		static const int Lbs_per_stn = 14;

		int stone;
		double pds_left;
		double pounds;
	};

}

#endif