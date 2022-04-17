/*
FileName: T5_15.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <string>

class GradeBook
{
public:
	explicit GradeBook(std::string);
	void setCourseName(std::string);
	std::string getCourseName()const;
	void displayMessage()const;
	void inputGrades();
	void displayGradeReport()const;
private:
	std::string courseName;
	unsigned int aCount;
	unsigned int atotal=0;
	unsigned int bCount;
	unsigned int btotal=0;
	unsigned int cCount;
	unsigned int ctotal=0;
	unsigned int dCount;
	unsigned int dtotal=0;
	unsigned int fCount;
	unsigned int ftotal=0;
	unsigned int total = atotal + btotal + ctotal + dtotal + ftotal;
	unsigned int counter = aCount + bCount + cCount + dCount + fCount;
};
