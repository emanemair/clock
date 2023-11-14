#include<iostream> 
#include<string>
using namespace std; 


class clockType
{
private : 
	int hr, min, sec;
public : 
	static int day; // indicate the number of day start from sunday 

	void setHour(int); 
	void setDay(int); 
	int getDay() const ;
	void getDay(int&) const; 
	void printDay() const; 
	void setMin(int); 
	void setSec(int); 
	void setTime(int, int, int);
	void getTime(int&, int&, int&) const; 
	int getHour() const; 
	int getMinute() const; 
	int getSecond() const; 
	void printTime() const; 
	bool equalTime(const clockType& c)const; 
	clockType(); 
	clockType(int, int, int , int ); 
	clockType(int); 
	void incrementHour(); 
	void incrementSecond(); 
	void incrementMinute(); 
	~clockType();

	

};