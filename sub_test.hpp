#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP

#include "gtest/gtest.h"
#include "Sub.cpp"

TEST(SubTest, SubEvaluationReg){
	Op* op1 = new Op(5);
	Op* op2 = new Op(3);
	Sub* test = new Sub(op1, op2);
        EXPECT_EQ(test->evaluate(), 2);
}


TEST(SubTest, SubStringDecimalMinusNum){
        Op* op1 = new Op(7.5);
        Op* op2 = new Op(9);
        std::string result = "7.5 - 9";
	Sub* test = new Sub (op1, op2);
	EXPECT_EQ(test->stringify(), result);
}


TEST(SubTest, SubEvaluateTwoNeg){
	Op* op1 = new Op(-4);
	Op* op2 = new Op(-4);
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->evaluate(), 0);
}


TEST(SubTest, SubEvaluateNegAndPosDec){
	Op* op1 = new Op(-6);
	Op* op2 = new Op(2.5);
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->evaluate(), -8.5);
}


TEST(SubTest, SubStringTwoNegDec){
	Op* op1 = new Op(-7);
	Op* op2 = new Op(-12.5);
	Sub* test = new Sub(op1, op2);
	std::string result = "-7 - -12.5";
	EXPECT_EQ(test->stringify(), result);
}


TEST(SubTest, SubStringTwoZeroes){
	Op* op1 = new Op(0.0);
	Op* op2 = new Op(0);
	std::string result = "0 - 0";
        Sub* test = new Sub(op1, op2);  	
	EXPECT_EQ(test->stringify(), result);
}

#endif
