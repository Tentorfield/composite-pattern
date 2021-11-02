#include "Rand.hpp"
#include "stdlib.h"

Rand::Rand(){
       this->val = rand() % 100;
       this->str_val = to_string(val);

}

double Rand::evaluate(){
	return val;
}

string Rand::stringify(){
	return str_val;
}
