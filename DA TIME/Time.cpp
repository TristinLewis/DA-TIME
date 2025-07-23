#include "Time.h"
#include <iostream> 
using namespace std;

Time Time::regularTime(int d,int h, int m, int s) const {
	int totalSeconds, newDays, newHours, newMinutes, newSeconds; 

	totalSeconds = s + m * 60 + h * 3600 + d * 86400; 

	newDays = totalSeconds / 86400; 
	totalSeconds %= 86400; 
	
	newHours = totalSeconds / 3600; 
	totalSeconds %= 3600;

	newMinutes = totalSeconds / 60; 

	newSeconds = totalSeconds % 60; 
	

	return Time(newDays, newHours, newMinutes, newSeconds); 
}

Time::Time()
	: days(0), hours(0), minutes(0), seconds(0)
{

}
Time::Time(int d, int h, int m, int s)
	: days(d), hours(h), minutes(m), seconds(s) 
{

}
Time::Time(int h, int m, int s)
	: days(0), hours(h), minutes(m), seconds(s)
{

}
Time::Time(int h, int m) 
	: days(0), hours(h), minutes(m), seconds(0)
{

}

int Time::getDays() const{
	return days; 
}
int Time::getHours() const{
	return hours;
}
int Time::getMinutes() const{
	return minutes;
}
int Time::getSeconds() const{
	return seconds; 
}
Time Time::operator+(const Time& other)const{
	int d = days + other.days; 
	int h = hours + other.hours;
	int m = minutes + other.minutes;
	int s = seconds + other.seconds;

	return regularTime(d, h, m, s);
}
Time Time::operator-(const Time& other)const{
	int d = days - other.days;
	int h = hours - other.hours;
	int m = minutes - other.minutes;
	int s = seconds - other.seconds;

	return regularTime(d, h, m, s);

}
/*int totalSeconds()const {												Dont need this anymore have time conversion for. 
return days * 86400 + hours * 3600 + minutes * 60 + seconds;
}*/
bool Time::operator==(const Time& other) const {
	return operator int() == other.operator int();
}
bool Time::operator!=(const Time& other) const {
	return operator int() != other.operator int();
}
bool Time::operator<(const Time & other) const {
	return operator int() < other.operator int();
}
bool Time::operator<=(const Time& other) const {
	return operator int() <= other.operator int();
}
bool Time::operator>(const Time& other) const {
	return operator int() > other.operator int();
}
bool Time::operator>=(const Time& other) const {
	return operator int() >= other.operator int();
}
std::ostream& operator<<(std::ostream& stream, const Time& t) {

	stream << "Testing out stream op " << t.days << "days, "
		<< t.hours << " hours, " << t.minutes << " minutes, " <<
		t.seconds << " seconds."; 

	return stream; 

}
Time::operator int() const {
	return days * 86400 + hours * 3600 + minutes * 60 + seconds;
}





