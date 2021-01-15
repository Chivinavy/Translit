#include "pch.h"
#include "gtest/gtest.h"
using namespace std;


TEST(Test1, TestName1) {
	ASSERT_STREQ("!", trans("!"));
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
TEST(Test1, TestName1) {
	ASSERT_STREQ("YA vernus'!", trans("Я вернусь!"));
}
TEST(Test2, TestName2) {
	ASSERT_STREQ("Luchshe pozdno, chem nikogda.", trans("Лучше поздно, чем никогда."));
}
TEST(Test3, TestName3) {
	ASSERT_STREQ("Ty znaesh' chto takoe bezumie?", trans("Ты знаешь что такое безумие?"));
}
TEST(Test4, TestName4) {
	ASSERT_STREQ("Prosto 13-y test dlya kruglogo chisla", trans("Просто 10-й тест для круглого числа"));
}
TEST(Test5, TestName5) {
	ASSERT_STREQ("", trans(""));
}
TEST(Test6, TestName6) {
	ASSERT_STREQ(" ", trans(" "));
}