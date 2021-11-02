#ifndef __ADD_HPP__ 
#define __ADD_HPP__

#include "base.hpp"
#include <string>
#include <iostream>

using namespace std;

class Add : public Base {
      public: 
      	Add();
      	virtual double evaluate();
      	virtual std::string stringify();
      protected:

	double operator1;
	double operator2;
};

#endif 
