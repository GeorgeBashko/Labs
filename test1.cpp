//
// Created by Детский on 09.11.2021.
//
#include "gtest/gtest.h"
#include "drob.h"

TEST(BASICTEST1, TestName1) {
    Fraction a(-1,5);
    Fraction b(3,4);
    ASSERT_EQ(2,a.sokr(2,6));
}
TEST(BASICTEST2, TestName2) {
    Fraction a(-1,5);
    Fraction b(3,4);
    Fraction c(1,1);
    ASSERT_EQ(11,c.sumchisl(a,b));
}
TEST(BASICTEST3, TestName3) {
    Fraction a(-1,5);
    Fraction b(3,4);
    Fraction c(1,1);
ASSERT_EQ(20,c.sumznam(a,b));
}
TEST(BASICTEST4, TestName4) {
    Fraction a(-1,5);
    Fraction b(3,4);
    Fraction c(1,1);
    ASSERT_EQ(20,c.umnznam(a,b));
}
TEST(BASICTEST5, TestName5) {
    Fraction a(-1,5);
    Fraction b(3,4);
    Fraction c(1,1);
    ASSERT_EQ(-3,c.umnchisl(a,b));
}
TEST(BASICTEST6, TestName6) {
    Fraction a(-1,5);
    Fraction b(3,4);
    Fraction c(1,1);
    ASSERT_EQ(-4,c.delchisl(a,b));
}
TEST(BASICTEST7, TestName7) {
    Fraction a(-1,5);
    Fraction b(3,4);
    Fraction c(1,1);
    ASSERT_EQ(15,c.delznam(a,b));
}
