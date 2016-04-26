#include "gtest/gtest.h"
#include "LogAnalyzer.h"

LogAnalyzer pl;
/*
TEST(LogAnalyzer1, IsValidLogFileName_ValidFileName_ReturnsTrue)
{
	EXPECT_TRUE(pl.endsWith("hyslr"));
};

TEST(LogAnalyzer2, myLogTest2)
{
    EXPECT_EQ(false, pl.endsWith("hyslr"));	
}
*/
class Log_Analyzer_Test : public ::testing::Test{
public:
	//ha 3 karakternel roidebb filenev dobjon kivetelt
	//olyan teszt ami jelenti hogy kivetel dobodott-e
	LogAnalyzer* log;
	void SetUp()
	{	
		log=new LogAnalyzer();
	}
	void TearDown()
	{
		delete log;
	}
};

/*TEST(Log_Analyzer_Test,IsValidLogFileName_ValidFileName_ReturnsTrue){
	string s;
	ASSERT_TRUE(pl.endsWith("shgfslr"));
}*/


class LogAnalyzerParamTest : public::testing::TestWithParam<string>
{
 
};

TEST_P(LogAnalyzerParamTest, kivetel)
{
	string file_name = GetParam();
	try {
		bool x = pl.isValidFileName(file_name);
		EXPECT_EQ(true, x);
		return;
	}
	catch (rosszfilenev& e)
	{
		SUCCEED();
		return;
	}
	ADD_FAILURE() << "Rossz teszt,nincs kivetel";
} 

//test case-ek letrehozasa
//INSTANTIATE_TEST_CASE_P(kivetelesteszt, LogAnalyzerParamTest, testing::Values("proba.jpg", "test", "aa", "a"));

/*
TEST(Log_Analyzer_Test,IsValidLogFileName_ValidFileName_ReturnsTrue){
	string s;
	ASSERT_TRUE(pl.isValidFileName("sjut"));
}
*/
//parametrizalt test

//test feacture