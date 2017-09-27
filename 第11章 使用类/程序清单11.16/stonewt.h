#pragma once
#ifndef STONEWT_H_
#define STONEWT_H_

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

	private:
		static const int Lbs_per_stn = 14;

		int stone;
		double pds_left;
		double pounds;
	};

}

#endif