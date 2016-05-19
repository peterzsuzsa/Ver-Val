#include <iostream>
 
 using namespace std;
 
 class invalidFileName : public exception {
 
   public:
     const char *what() { return "File name is invalid"; };
 };
 
 
 class someException : public exception {
 
   public:
     const char *what() { return "Some other exception."; };
 };
 
 
 
 class LogAnalyzer
 {
 	public: bool endsWith(string s);
 			bool isValidFileName(string s);
 };