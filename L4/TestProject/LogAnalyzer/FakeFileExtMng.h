#include <iostream>
#include "stdafx.h"

using namespace std;

#ifdef LOGANALYZER_EXPORTS
#define LOGANALYZER_API __declspec(dllexport)
#else
#define LOGANALYZER_API __declspec(dllimport)
#endif

class LOGANALYZER_API CFakeFileExtMng:public CFileExtMng{
private:
	bool v;
public:
	CFakeFileExtMng();
	~CFakeFileExtMng();
	bool isExtensionValid(std::string name);
	void setErtek(bool v);
};

extern LOGANALYZER_API int nLogAnalyzer;

LOGANALYZER_API int fnLogAnalyzer(void);