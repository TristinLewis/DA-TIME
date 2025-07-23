#include <iostream>
#include "Time.h"

using namespace std; 

void assignmentTest(); 
void assignmentTestAddition();
void assignmentTestSubtraction();
void assignmentTestRelationalOps();
void assignmentTestOstream();
void assignmentTestTimeInt();



int main() {


	assignmentTest();
	assignmentTestAddition();
	assignmentTestSubtraction();
	assignmentTestRelationalOps();
	assignmentTestOstream();
	assignmentTestTimeInt();




	return 0; 
}
void assignmentTest() {
	Time try1(2, 24, 55, 32);
	Time try2;

	try2 = try1;
	cout << "RegularTest" << endl; 
	cout << "   Days, Hours, Minutes, Seconds." << endl;

	cout << "Try # 1: " << try1.getDays() << " , " << try1.getHours() <<
		" , " << try1.getMinutes() << " , " << try1.getSeconds() << endl; 
	cout << "Try # 2: " << try2.getDays() << " , " << try2.getHours() <<
		" , " << try2.getMinutes() << " , " << try2.getSeconds() << endl << endl << endl; 

}
void assignmentTestAddition() {
	Time try1(2, 24, 55, 32);
	Time try2(0, 7, 34, 46); 

	cout << "Before+" << endl << "   Days, Hours, Minutes, Seconds." << endl;
	cout << "Try # 1: " << try1.getDays() << " , " << try1.getHours() <<
		" , " << try1.getMinutes() << " , " << try1.getSeconds() << endl;
	cout << "Try # 2: " << try2.getDays() << " , " << try2.getHours() <<
		" , " << try2.getMinutes() << " , " << try2.getSeconds() << endl;

	Time results = try1 + try2; 

	cout  << "After +" << endl << "   Days, Hours, Minutes, Seconds." << endl;
	cout << "Try result: " << results.getDays() << " , " << results.getHours() <<
		" , " << results.getMinutes() << " , " << results.getSeconds() << endl << endl << endl << endl;
}
void assignmentTestSubtraction() {
	Time try1(2, 24, 55, 32);
	Time try2(0, 7, 34, 46);

	cout << "Before-" << endl << "   Days, Hours, Minutes, Seconds." << endl;
	cout << "Try # 1: " << try1.getDays() << " , " << try1.getHours() <<
		" , " << try1.getMinutes() << " , " << try1.getSeconds() << endl;
	cout << "Try # 2: " << try2.getDays() << " , " << try2.getHours() <<
		" , " << try2.getMinutes() << " , " << try2.getSeconds() << endl;

	Time results = try1 - try2;


	cout << "After-" << endl << "   Days, Hours, Minutes, Seconds." << endl;
	cout << "Try result: " << results.getDays() << " , " << results.getHours() <<
		" , " << results.getMinutes() << " , " << results.getSeconds() << endl << endl << endl << endl;
	

}
void assignmentTestRelationalOps() {
	Time try1(2, 24, 55, 32);
	Time try2(0, 7, 34, 46);
	Time try3(0, 7, 34, 46);

	cout << "1 True, 0 False" << endl; 
	cout << "Try 3 == vs Try 2:" << (try3 == try2) << endl;
	cout << "Try 1 != vs Try 3:" << (try1 != try3) << endl;
	cout << "Try 1 <  vs Try 3:" << (try1 < try3) << endl;
	cout << "Try 1 <= vs Try 2:" << (try1 <= try2) << endl;
	cout << "Try 1 >  vs Try 2:" << (try1 > try2) << endl;
	cout << "Try 1 >= vs Try 2:" << (try1 >= try2) << endl << endl << endl << endl;
}
void assignmentTestOstream() {
	Time try1(2, 24, 55, 32);
	cout << "Ostream Tester"; 
	cout << try1 << endl << endl << endl << endl;
}
void assignmentTestTimeInt() {
	Time try1(1, 1, 1, 1); 
	cout << "Time try 1: " << try1 << endl; 
	int seconds = try1; 
	cout << "Converted to seconds: " << seconds << endl << endl; 
	
	//Number of seconds using 1 of all
	if (seconds == 90061) {
		cout << "Conversion succsseful" << endl << endl; 
	}
}