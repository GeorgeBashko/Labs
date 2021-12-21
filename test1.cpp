#include "gtest/gtest.h"
#include "class.h"
Student student1(1, 4, "Bob", "22848", 1, 2, 3, 6);
TEST(test,asd)
{
ASSERT_EQ(student1.getcourse(),1);
}
TEST(test1,asd1)
{
    ASSERT_EQ(4,student1.getgroup());
}
TEST(test2,asd2)
{
    ASSERT_EQ("Bob",student1.getname());
}
TEST(test3,asd3)
{
    ASSERT_EQ("22848",student1.getzachetka());
}



