#include "Sub.hpp"
// #include "stdlib.h"

Sub::Sub(Base* left, Base* right){

       this->str_val = "-";
	// recursively adds the values in that subtree	
        left_val = left->evaluate();
        right_val = right->evaluate();
	
	lhs = left->stringify();
	rhs = right->stringify();
}

double Sub::evaluate(){
	this->val = left_val - right_val;
	return val;
}

string Sub::stringify(){
        return lhs + " - " + rhs;
}
