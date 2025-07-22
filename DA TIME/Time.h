#ifndef Time_h
#define Time_h
class Time{
private:
	int days, hours, minutes, seconds; 

	Time regularTime(int d, int h, int m, int s) const; 
public:
	Time();
	Time(int d, int h, int m, int s);
	Time(int h, int m, int s);
	Time(int h, int m);

	int getDays()const;
	int getHours()const;
	int getMinutes()const;
	int getSeconds()const;

	Time operator+(const Time& other) const;
	Time operator-(const Time& other) const;

	int totalSeconds()const;
	bool operator==(const Time& other) const; 
	bool operator!=(const Time& other) const;
	bool operator<(const Time& other) const;
	bool operator<=(const Time& other) const;
	bool operator>(const Time& other) const;
	bool operator>=(const Time& other) const;

	friend ostream& operator<<(ostream& o, const Time& t); 
};
#endif


