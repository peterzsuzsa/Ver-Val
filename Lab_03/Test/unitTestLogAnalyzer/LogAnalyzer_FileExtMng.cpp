#include "gtest/gtest.h"
#include "LogAnalyzer.h"
#include <string.h>

TEST(LogAnalyzer, isValidFileName_ValidFileName_ReturnsTrue) {

	FakeFileExtMng* fem = new FakeFileExtMng();
	fem->setErtek(true);
	LogAnalyzer la(fem);
	string s = "filename.txt";
	ASSERT_TRUE(la.isValidFileName(s));
}


TEST(LogAnalyzer, isValidFileName_ValidFileName_ReturnsFalse) {

	FakeFileExtMng* fem = new FakeFileExtMng();
	fem->setErtek(true);
	LogAnalyzer la(fem);
	string s = "fi";
	ASSERT_TRUE(la.isValidFileName(s));
}