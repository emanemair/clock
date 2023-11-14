#include"clockType.h"


void clockType::setHour(int h)
{
	if (h >= 0 && h < 24)
	{
		this->hr = h;
	}
	else
	{
		this->hr = 0; 
	}
}

void clockType::setMin(int m)
{
	if (m >= 0 && m < 60)
	{
		this->min = m; 
	}
	else {
		this->min = 0; 
	}
}
void clockType::setSec(int s)
{
	if (s >= 0 && s < 60)
	{
		this->sec = s; 
	}
	else
	{
		this->sec = 0; 
	}
}
void clockType::setTime(int h, int m, int s)
{
	setHour(h); 
	setMin(m); 
	setSec(s); 
}


int clockType::getHour()const
{
	return this->hr; 
}

int clockType::getMinute()const
{
	return this->min;
}
int clockType::getSecond() const
{
	return this->sec; 
}

void clockType::getTime(int& h , int& m , int& s)const {
	h = getHour(); 
	m = getMinute(); 
	s = getSecond(); 
}
void clockType::setDay(int d)
{
	if (d > 0 && d <= 7)
	{
		clockType::day = d; 
	}
	else {
		clockType::day = 1; 
	}
}
int clockType::getDay() const {
	return clockType::day; 
}
void clockType::getDay(int& d) const 
{
	d = this->getDay(); 
}
void clockType::printTime() const
{
	cout << this->hr << " : " << this->min << " : " << this->sec << endl; 
}


bool clockType::equalTime(const clockType& c)const
{
	return  (this->hr == c.hr && this->min == c.min&& this->sec == c.getSecond()); 
}

void clockType::printDay() const
{
	switch (this->getDay())
	{
	case 1 : 
		cout << "Sunday" << endl; 
		break; 
	case 2 : 
		cout << "Monday" << endl; 
		break; 
	case 3 : 
		cout << "Tuesday" << endl; 
		break; 
	case 4: 
		cout << "Wedensday" << endl; 
		break; 
	case 5: 
		cout << "Thursday" << endl; 
		break; 
	case 6: 
		cout << "Firday" << endl; 
		break; 
	case 7 : 
		cout << "Saturday" << endl; 
		break; 
	default:
		cout << "Sunday" << endl; 
		break; 
	}
}

clockType::clockType()
{
	this->hr = 0;
	this->min = 0; 
	this->sec = 0; 
}

clockType::clockType(int h, int m, int s , int d )
{
	setTime(h, m, s); 
	setDay(d); 
}

void clockType::incrementHour()
{
	if (this->hr == 23)
	{
		this->hr = 0; 
	}
	else
	{
		this->hr++; 
	}
}
void clockType::incrementMinute()
{
	if (this->min == 59)
	{
		this->min = 0; 
		incrementHour(); 
	}
	else
	{
		this->min++; 
	}
}
void clockType::incrementSecond() {
	if (this->sec == 59)
	{
		this->sec = 0; 
		incrementMinute(); 
	}
	else {
		this->sec++; 
	}
}

clockType::clockType(int h)
{
	this->setHour(h); 
	this->min = 0; 
	this->sec = 0; 
}


clockType::~clockType()
{

}