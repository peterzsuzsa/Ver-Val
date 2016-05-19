#include <iostream>
#include "stdafx.h"

#ifdef LOGANALYZER_EXPORTS
#define LOGANALYZER_API __declspec(dllexport)
#else
#define LOGANALYZER_API __declspec(dllimport)
#endif

class LOGANALYZER_API ManualMockService : public WebService
{
public:
	virtual void logError(const std::string& errorMsg);
	std::string getError() const;

private:
	std::string error;
};



extern LOGANALYZER_API int nLogAnalyzer;

LOGANALYZER_API int fnLogAnalyzer(void);