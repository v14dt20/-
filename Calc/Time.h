#pragma once
class Time
{
protected:
	int hours;
	int min;
	int sec;
public:
	Time(void);
	Time(int, int, int);

	~Time() = default;

	int get_hours();
	int get_min();
	int get_sec();

	Time& operator+= (const Time&);
	Time& operator-= (const Time&);
	Time& operator= (const Time&);
	Time& operator*= (const int);
	Time& operator/= (const int);
};

