#include <string>
#include "Student.h"
#include "Chain.h"
#include "IOHandler.h"
#include "TaskManager.h"
using namespace std;

int main(){
	Chain stdList;
	TaskManager tm;
	string fileName;

	cout << "학생의 이름과 학번이 저장된 파일의 이름을 입력하세요 : ";
	cin >> fileName;
	IOHandler dataFile(fileName);

	try{
		tm.loadingFunction(dataFile, stdList);
		tm.perform(stdList);
	}
	catch (char* msg){
		cout << msg << endl;
	}
	return 0;
}