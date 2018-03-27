#include "complexNumber.h"
#include <cmath>

//default constructor

complexNumber::complexNumber()
{
	m_a=0;
	m_b=0;
}//end of complexNumber::complexNumer()

//another constructor
complexNumber::complexNumber(double re, double im)
{
	m_a=re;
	m_b=im;
}//end of complexNumber::complexNumer()

//get the Norm of the complex number
double complexNumber::getNorm()
{
	double norm=sqrt(pow(m_a,2)+pow(m_b,2));
	return norm;
}//end of complexNumber::getNorm()

void complexNumber::sum(complexNumber b)
{
	m_a+=b.getRealPart();
	m_b+=b.getImaginaryPart();
	return;
}
complexNumber complexNumber::getSumWith(complexNumber c)
{
	complexNumber out= complexNumber(m_a+c.getRealPart(),m_b+c.getImaginaryPart());
	return out;
}
complexNumber complexNumber::operator+(complexNumber &c)
{
	//complexNumber out= complexNumber(m_a+c.getRealPart(),m_b+c.getImaginaryPart());
	//return out;
	return this->getSumWith(c);
}
