# Timer-in-thread
A timer that works within a thread using C++  
Easy to use!  
只需要
```C
#include "timer.h"
```
在你的项目里初始化MyTimer类，并且修改OnTimer函数就可以添加一个以线程实现的计时器  
```C
int main() {
		MyTimer timer;
		timer.startTimer(0, 333, OnTimer);
    //startTimer(计时器的编号，计时器等待的毫秒时间，计时器执行的函数指针)
	while(1){	}
}
```
PS OnTimer函数可以指定计时器的编号
```C
static void OnTimer(int timeID) {
	cout << "Hit Timer" << timeID << endl;
}
```
