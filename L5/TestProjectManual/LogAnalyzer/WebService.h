// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the LOGANALYZER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// LOGANALYZER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#include <string>
#include <memory>

#ifdef LOGANALYZER_EXPORTS
#define LOGANALYZER_API __declspec(dllexport)
#else
#define LOGANALYZER_API __declspec(dllimport)
#endif

// This class is exported from the LogAnalyzer.dll
class LOGANALYZER_API WebService {
public:
	virtual void logError(const std::string& errorMsg) = 0;
	virtual ~WebService() {};//public:
	// TODO: add your methods here.
};

extern LOGANALYZER_API int nLogAnalyzer;

LOGANALYZER_API int fnLogAnalyzer(void);
