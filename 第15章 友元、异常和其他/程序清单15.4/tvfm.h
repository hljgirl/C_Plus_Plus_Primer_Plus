#pragma once
#ifndef TVFM_H_
#define TVFM_H_

class Tv;

class Remote
{
public:
	enum State{ off, on };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };

	Remote(int m = TV) :mode(m) {};
	~Remote() {};

	bool romote_volup(Tv& t);
	bool romote_voldown(Tv& t);
	void romote_onoff(Tv& t);
	void romote_chanup(Tv& t);
	void romote_chandown(Tv& t);
	void romote_set_mode(Tv& t);
	void romote_set_input(Tv& t);
	void romote_set_chan(Tv& t, int c);

private:
	int mode;
};


class Tv
{
public:
	enum State { off, on };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };

	Tv(int s = off, int mc = 125) :state(s),volume(5), maxchannel(mc),channel(2),mode(Cable), input(TV) {};
	~Tv() {};

	void tv_onoff() { state = (state == on) ? off : on; };
	bool tv_ison() const { return state == on; };
	bool tv_volup();
	bool tv_voldown();
	void tv_chanup();
	void tv_chandown();
	void tv_set_mode() { mode = (mode == Antenna) ? Cable : Antenna; };
	void tv_set_input() { input = (input == TV) ? DVD : TV; };
	void tv_setting() const;

	friend void Remote::romote_set_chan(Tv& t, int c);

private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};


inline bool Remote::romote_volup(Tv& t) { return t.tv_volup(); };
inline bool Remote::romote_voldown(Tv& t) { return t.tv_voldown(); };
inline void Remote::romote_onoff(Tv& t) { t.tv_onoff(); };
inline void Remote::romote_chanup(Tv& t) { t.tv_chanup(); };
inline void Remote::romote_chandown(Tv& t) { t.tv_chandown(); };
inline void Remote::romote_set_mode(Tv& t) { t.tv_set_mode(); };
inline void Remote::romote_set_input(Tv& t) { t.tv_set_input(); };
inline void Remote::romote_set_chan(Tv& t, int c) { t.channel = c; };

#endif
