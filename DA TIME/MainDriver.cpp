#include <iostream>
#include "Time.h"

using namespace std; 

void assignmentTest(); 
void assignmentTestAddition();
void assignmentTestSubtraction();


int main() {


	assignmentTest();
	assignmentTestAddition();
	assignmentTestSubtraction();





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
		" , " << try2.getMinutes() << " , " << try2.getSeconds() << endl; 

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
		" , " << results.getMinutes() << " , " << results.getSeconds() << endl;
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
		" , " << results.getMinutes() << " , " << results.getSeconds() << endl;
	

}
