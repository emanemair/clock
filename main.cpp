#include"clockType.h"

void main()
{
	
	clockType c; 
	c.printDay();
	/*
	clockType c2(4, 36, 0); 
	clockType c3; */
	clockType arrivalTimeEmp[5]; 

	for (int i = 0; i < 5; i++)
	{
		arrivalTimeEmp[i].printTime(); 
	}
	/*
	cout << c.getHour() << endl; 
	c.printTime(); 
	c.setTime(23, 59, 0); 
	c.printTime(); 
	c.incrementMinute();
	c.incrementHour(); 

	if (c.equalTime(c2))
	{
		cout << "equal" << endl; 
		c.printTime(); 
		c2.printTime(); 
	}
	else
	{
		cout << "not equal" << endl;
		c.printTime();
		c2.printTime();
	}*/

 

}