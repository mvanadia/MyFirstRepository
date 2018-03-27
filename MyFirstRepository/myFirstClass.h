#include <iostream>


class myFirstClass{
	
	public:
	    //default constructor
		myFirstClass();
		//printHello method
		void printHello();
		
		void setNumberOfHellos(int numberOfHellos){m_numberOfHellos=numberOfHellos;};
		int getNumberOfHellos(){return m_numberOfHellos;}
		void setName(std::string name){m_name=name;}
		std::string getName(){return m_name;};
	
	private:	
        //variable that contains how many hellos we want		
		int m_numberOfHellos;
		//variable with the name of our object
		std::string m_name;
};
