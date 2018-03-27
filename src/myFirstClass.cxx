#include "myFirstClass.h"

//default constructor
myFirstClass::myFirstClass()
{
	m_numberOfHellos=1;
	m_name="myFirstClass";
}
void myFirstClass::printHello()
{
	for(int i=0; i<getNumberOfHellos(); i++)
	{
	  std::cout<<"Hello number "<<(i+1)<<" from "<<getName()<<std::endl;
    }
    
    return;
}
