#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP

#include "gtest/gtest.h"
#include "add_test.hpp"
#include "Mult.cpp"

TEST(MultTest, MultEvaluationReg){
   Op* op1 = new Op(5);
   Op* op2 = new Op(3);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 15);
}

TEST(MultTest, MultStringDecimalTimesNum){
  Op* op1 = new Op(7.5);
  Op* op2 = new Op(9);
  std::string result = "7.5 * 9";
  Mult* test = new Mult(op1, op2);
  EXPECT_EQ(test->stringify(), result);
}

TEST(MultTest, MultEvaluateDecimalTimesAddNum){
  Op* op1 = new Op(7.5);
  Op* op2 = new Op(9);
  Mult* test = new Mult(op1, op2);
  Op* op3 = new Op(4);
  Add* add = new Add(test, op3);
  EXPECT_EQ(add->evaluate(), 71.5);
}


TEST(MultTest, MultStringFromAdd){
  Op* op1 = new Op(3);
  Op* op2 = new Op(4);
  Mult* mult1 = new Mult(op1, op2);
  Op* op3 = new Op(5);
  Add* test = new Add(mult1, op3);
  string result = "3 * 4 + 5";
  EXPECT_EQ(test->stringify(), result);
}   
  
TEST(MultTest, MultEvaluateFromAdd){
  Op* op1 = new Op(3);
  Op* op2 = new Op(4);
  Mult* mult1 = new Mult(op1, op2);
  Op* op3 = new Op(5);
  Add* test = new Add(mult1, op3);
  EXPECT_EQ(test->evaluate(), 17);
}

TEST(MultTest, MultEvaluateZeroDec){
  Op* op1 = new Op(0.0);
  Op* op2 = new Op(7);
  Mult* test = new Mult(op1, op2);
 EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, MultEvaluateTwoNeg){
  Op* op1 = new Op(-4);
  Op* op2 = new Op(-4);
  Mult* test = new Mult(op1, op2);
 EXPECT_EQ(test->evaluate(), 16);
}

TEST(MultTest, MultEvaluateNegAndPosDec){
  Op* op1 = new Op(-6);
  Op* op2 = new Op(2.5);
  Mult* test = new Mult(op1, op2);
 EXPECT_EQ(test->evaluate(), -15);
}

TEST(MultTest, MultStringTwoNegDec){
  Op* op1 = new Op(-7);
  Op* op2 = new Op(-12.5);
  Mult* test = new Mult(op1, op2);
  std::string result = "-7 * -12.5";
 EXPECT_EQ(test->stringify(), result);
}

TEST(MultTest, MultStringTwoZeroes){
  Op* op1 = new Op(0);
  Op* op2 = new Op(0);
  Mult* test = new Mult(op1, op2);
  std::string result = "0 * 0";
 EXPECT_EQ(test->stringify(), result);
}

#endif
