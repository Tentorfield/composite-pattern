#include "Add.hpp"
// #include "stdlib.h"
#include "op.hpp"

Add::Add(Base* left, Base* right){

       this->str_val = "+";
	// recursively adds the values in that subtree	
        left_val = left->evaluate();
        right_val = right->evaluate();
	
	lhs = left->stringify();
	rhs = right->stringify();
}

double Add::evaluate(){
	this->val = left_val + right_val;
	return val;
}

string Add::stringify(){
        return lhs + " + " + rhs;
}
