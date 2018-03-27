

class complexNumber{
	
	public:
		//default contructor
		complexNumber();
		//another contructor
		complexNumber(double a, double b);
		
		void setRealPart(double a){m_a=a;}
		double getRealPart(){return m_a;}
		void setImaginaryPart(double b){m_b=b;}
		double getImaginaryPart(){return m_b;}
		void setNumber(double a, double b){m_a=a; m_b=b;}
		double getNorm();
		
		void sum(complexNumber c);
		complexNumber getSumWith(complexNumber c);
		complexNumber operator+(complexNumber &c);
	
	private:
		//the complex number is z=a+ib
		double m_a;
		double m_b;
	
};
