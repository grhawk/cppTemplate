#include<gtest/gtest.h>

#include<example.h>

TEST(Example, ExampleTest){
    ASSERT_EQ(sayHello(), "Hello!");
}

TEST(Example, ExpectedToFail){
    ASSERT_EQ(sayHello(), "Hello");
}