#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP

#include "gtest/gtest.h"
#include "Div.cpp"

TEST(DivTest, DivEvaluationReg){
   Op* op1 = new Op(8);
   Op* op2 = new Op(2);
   Div* test = new Div(op1, op2);
   EXPECT_EQ(test->evaluate(), 4);
}

TEST(DivTest, DivStringDecimalDividesNum){
  Op* op1 = new Op(7.5);
  Op* op2 = new Op(2);
  string result = "7.5 / 2";
  Div* test = new Mult (op1, op2);
  EXPECT_EQ(test->stringify(), result);
}

TEST(DivTest, DivEvaluateZeroDec){
  Op* op1 = new Op(0.0);
  Op* op2 = new Op(7);
  Div* test = new Div(op1, op2);
 EXPECT_EQ(test->evaluate(), 0);
}

TEST(DivTest, DivEvaluateTwoNeg){
  Op* op1 = new Op(-4);
  Op* op2 = new Op(-4);
  Div* test = new Div(op1, op2);
 EXPECT_EQ(test->evaluate(), 1);
}

TEST(DivTest, DivEvaluateNegAndPosDec){
  Op* op1 = new Op(-6);
  Op* op2 = new Op(2.5);
  Div* test = new Div(op1, op2);
 EXPECT_EQ(test->evaluate(), -2.4);
}

TEST(DivTest, DivStringTwoNegDec){
  Op* op1 = new Op(-7.5);
  Op* op2 = new Op(-2.5);
  Div* test = new Div(op1, op2);
  string result = "-7.5 / -2.5";
 EXPECT_EQ(test->stringify(), result);
}

TEST(DivTest, DivStringTwoZeroes){
  Op* op1 = new Op(0);
  Op* op2 = new Op(0);
  Div* test = new Div(op1, op2);
  string result = "0 / 0";
 EXPECT_EQ(test->stringify(), result);
}

#endif
