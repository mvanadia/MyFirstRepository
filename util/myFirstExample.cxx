#include <iostream>
#include "myFirstClass.h"
#include "complexNumber.h"
 
int main()
{
  std::cout << "welcome in myFirstExample!" << std::endl;

  myFirstClass mfc_pippo= myFirstClass();
  //mfc_pippo.m_name="pippo";  THIS WOULD CASE AN ERROR DURING COMPILATION
  mfc_pippo.setName("pippo");
  mfc_pippo.setNumberOfHellos(3);
  
  mfc_pippo.printHello();
  
  complexNumber c= complexNumber(1,3);
  std::cout<<" c is "<<c.getRealPart()<<" +i*"<<c.getImaginaryPart()<<" with norm "<<c.getNorm()<<std::endl;
  complexNumber d= complexNumber(2,4);
  std::cout<<" d is "<<d.getRealPart()<<" +i*"<<d.getImaginaryPart()<<" with norm "<<d.getNorm()<<std::endl;
  
  //d.sum(c);
  complexNumber e=d.getSumWith(c);
  std::cout<<" e is "<<e.getRealPart()<<" +i*"<<e.getImaginaryPart()<<" with norm "<<e.getNorm()<<std::endl;
  
  complexNumber f=c+d;
  std::cout<<" f is "<<f.getRealPart()<<" +i*"<<f.getImaginaryPart()<<" with norm "<<f.getNorm()<<std::endl;
  
  
  return 0;
}
