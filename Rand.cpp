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
	str_val = to_string(val);
                string Zero = "0";
                string Dot = ".";
                size_t found_Zero = str_val.find_last_not_of(Zero);
                size_t found_Dot = str_val.find_last_not_of(Dot);
                if (found_Zero != string::npos){
                        str_val.erase(found_Zero + 1);
                }
                if (found_Dot != string::npos){
                        str_val.erase(found_Dot + 1);
                }
                else{
                        str_val.clear();
                }

	return str_val;
}
