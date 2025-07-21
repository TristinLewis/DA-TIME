#ifndef Time_h
#define Time_h
class Time{
private:
	int days, hours, minutes, seconds; 
public:
	Time();
	Time(int days, int hours, int months);
	Time(int hours, int minutes, int seconds);

	void setDays();
	void setHours();
	void setMinutes();
	void setSeconds();

	int getDays();
	int getHours();
	int getMinutes();
	int getSeconds();





};
#endif


