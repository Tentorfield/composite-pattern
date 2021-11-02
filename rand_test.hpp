#ifndef __RAND__TEST_HPP__
#define __RAND__TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "Rand.hpp"
#include <string>
#include <stdlib.h>



TEST(randTest, EvalutateLT101){
    Rand* test = new Rand();
    EXPECT_LT(101, test->evaluate());
}

TEST(randTest, EvaluateGTNegOne){
     Rand* test = new Rand();
     EXPECT_GT(test->evaluate(), -1);
}

TEST(randTest, StringifyNot101){
    Rand* test = new Rand();
    std::string result = "101";
    EXPECT_NE(test->stringify(), result);
}

TEST(randTest, EvauateVal83){
    srand(2);
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), 90);
}

TEST(randTest, StringVal83){
    srand(2);
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), "90");
}


#endif
