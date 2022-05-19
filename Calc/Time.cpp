#include "Time.h"

Time::Time(void)
{
	hours = 0;
	min = 0;
	sec = 0;
}
Time::Time(int a, int b, int c)
{
	hours = a;
	min = b;
	sec = c;
}

Time& Time::operator+= (const Time& t)
{
	int buf = hours * 60 * 60 + min * 60 + sec + t.hours * 60 * 60 + t.min * 60 + t.sec;
	hours = (buf / 60 / 60) % 24;
	min = (buf / 60) % 60;
	sec = buf % 60 % 60;
	return *this;
}
Time& Time::operator-= (const Time& t)
{
	int buf = (hours * 60 * 60 + min * 60 + sec) - (t.hours * 60 * 60 + t.min * 60 + t.sec);
	hours = (buf / 60 / 60) % 24;
	min = (buf / 60) % 60;
	sec = buf % 60 % 60;
	return *this;
}
Time& Time::operator= (const Time& t)
{
	hours = t.hours;
	min = t.min;
	sec = t.sec;
	return *this;
}
Time& Time::operator*= (const int n)
{
	long int buf = hours * 60 * 60 + min * 60 + sec;
	buf *= n;
	hours = (buf / 60 / 60) % 24;
	min = (buf / 60) % 60;
	sec = buf % 60 % 60;
	return *this;
}
Time& Time::operator/= (const int n)
{
	int buf = hours * 60 * 60 + min * 60 + sec;
	buf /= n;
	hours = (buf / 60 / 60) % 24;
	min = (buf / 60) % 60;
	sec = buf % 60 % 60;
	return *this;
}

int Time::get_hours()
{
	return hours;
}
int Time::get_min()
{
	return min;
}
int Time::get_sec()
{
	return sec;
}