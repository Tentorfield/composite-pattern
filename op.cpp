#include "op.hpp"


        Op::Op(double value){
		val = value;
	}

        virtual double Op::evaluate(){
  		return val;
	}

        virtual string Op::stringify(){
		string_val = to_string(value);
	        return string_val; 	
	}

