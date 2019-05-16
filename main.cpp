#include <iostream>
#include "timer.h"

using namespace std;

static void OnTimer(int timeID) {
	cout << "Hit Timer" << timeID << endl;
}

int main() {
	
		MyTimer timer;
		timer.startTimer(0, 333, OnTimer);
	while(1){	}
	
}