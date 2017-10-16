#pragma once

#include <string>
using namespace std;

class Sales
{
public:
	enum {MONTH = 12};
	
	class bad_index:public logic_error
	{
	public:
		explicit bad_index(int ix, const string& s = "Index error in Sales object\n");
		virtual ~bad_index() throw() {};

		int bi_val() const { return bi; };		

	private:
		int bi;
	};

	

	explicit Sales(int yy = 0);
	Sales(int yy, const double * gr, int n);
	virtual ~Sales() {};
	int Year() const { return year; };

	virtual double operator[](int i) const;
	virtual double & operator[](int i);


private:
	double gross[MONTH];
	int year;
};


class LabeledSales:public Sales
{
public:

	class nbad_index:public Sales::bad_index
	{
	public:
		nbad_index(const string& lb, int ix, const string& s = "Index error in LabeledSales object\n");
		virtual ~nbad_index() throw() {};

		const string& lable_val() const { return lbl; };
	private:
		string lbl;
	};

	
	explicit LabeledSales(const string& lb = "none", int yy = 0);
	LabeledSales(const string& lb, int yy, const double *gr, int n);
	virtual ~LabeledSales() {};

	const string& Label() const { return label; };
	virtual double operator[](int i) const;
	virtual double& operator[](int i);

private:
	string label;
};

