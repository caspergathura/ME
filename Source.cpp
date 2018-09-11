#include <iostream>
#include <string>
using namespace std;
class school {
	int semester;
	string name, prefered;
	string grade;
public:
	void getdetails();
	void printdetails();
};
void school::getdetails() {
	cout << "PLEASE ENTER YOUR NAME" << endl;
	cin >> name;
	cout << "PLEASE ENTER THE SEMESTER YOU ARE IN" << endl;
	cin >> semester;
	cout << "PLEASE ENTER YOUR PREFERED COURSE:EITHER DIPLOMA OR DEGREE" << endl;
	cin >> prefered;
	cout << "GRADE :" << grade << endl;
}
void school::printdetails() {
	cout << "NAME :" << name << endl;
	cout << "SEMESTER :" << semester << endl;
	cout << "PREFERED COURSE :" << prefered << endl;
}

class Diploma :public school {
	int diplomacats, diplomamains,diplomatotals;
public:
	void getgrade();
	void gradestudent();
	void printdetails();

};
void Diploma::getgrade(){
	cout << "PLEASE ENTER YOUR DIPLOMA CAT MARKS" << endl;
	if (diplomacats > 0 && diplomacats <= 40){
		cout << diplomacats << endl;
	}
	cin >> diplomacats;
	cout << "PLEASE ENTER YOUR DIPLOMA MAIN MARKS" << endl;
	if (diplomamains > 0 && diplomamains <= 100){
		cout << diplomamains << endl;
	}
	cin >> diplomamains;
	diplomatotals = diplomacats + diplomamains;
	cout << "YOUR TOTAL FOR DIPLOMA IS :" << diplomatotals << endl;
}
void  Diploma::gradestudent(){
	if (diplomatotals >= 90)
		cout << "EXCELLENT" << endl;
	if (diplomatotals >= 80 && diplomatotals < 90)
		cout << "WELL DONE" << endl;
	if (diplomatotals>= 70 && diplomatotals < 80)
		cout << "GOOD" << endl;
	if (diplomatotals >= 60 && diplomatotals < 70)
		cout << "NEEDS IMPROVEMENT" << endl;
	if (diplomatotals < 50 && diplomatotals < 60)
		cout << "FAILED" << endl;
}
void Diploma::printdetails(){
	cout << "DIPLOMA TOTALS IS :" << diplomatotals << endl;
}
class Degree :public school{
	int degreecats, degreemains,degreetotals;
public:
	void getgrade();
	void gradestudent();
	void printdetails();
};
void Degree::getgrade(){
	cout << "PLEASE ENTER YOUR DEGREE CAT MARKS " << endl;
	if (degreecats > 0 && degreecats <= 30){
		cout << degreecats << endl;
	}
	cin >> degreecats;
	cout << "PLEASE ENTER  YOUR DEGREE MAIN MARKS" << endl;
	if (degreemains > 0 && degreemains <= 100){
		cout << degreemains << endl;
	}
	cin >> degreemains;
	degreetotals = degreecats + degreemains;
	cout << "YOUR DEGREE TOTAL IS :" << degreetotals << endl;
}
void Degree::gradestudent(){
	if (degreetotals >= 90)
		cout << "EXCELLENT" << endl;
	if (degreetotals >= 80 && degreetotals < 90)
		cout << "WELL DONE" << endl;
	if (degreetotals >= 70 && degreetotals < 80)
		cout << "GOOD" << endl;
	if (degreetotals >= 60 && degreetotals < 70)
		cout << "NEEDS IMPROVEMENT" << endl;
	if (degreetotals < 50 && degreetotals < 60)
		cout << "FAILED" << endl;
}
void Degree::printdetails(){
	cout << "DEGREE TOTAL MARKS :" << degreetotals << endl;
}
int main()
{
	school all;
	Diploma all1;
	Degree all2; 
	all.getdetails();
	all1.getgrade();
	all1.gradestudent();
	all.printdetails();
	all2.getgrade();
	all2.gradestudent();
	all1.printdetails();
	all2.printdetails();
	system("pause");
	return 0;
}
