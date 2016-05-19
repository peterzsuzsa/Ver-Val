#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\LogAnalyzer\LogAnalyzer.h"
#include <memory>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProjectManual
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		

		TEST_METHOD(isValidFileName_ValidFileName_ReturnsTrue)
		{
			std::shared_ptr<WebService> webService(
				std::shared_ptr<ManualMockService>(new ManualMockService)
				);

			CLogAnalyzer la(webService);

			la.isTheFileValid("xyaa");
			string a = "xyaa";
			Assert::AreEqual(a, std::dynamic_pointer_cast<ManualMockService>(webService)->getError());
		}
	};
}