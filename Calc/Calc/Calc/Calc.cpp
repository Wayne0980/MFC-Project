// Calc.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int a =1,b=2;
	int c = 0;
	string str = "=======開始運算=========\r\n";

	c = b*a;
	cout<<(str);
	printf("c=%d\r\n",c); 

	printf("c=%d\r\n",c);      // 第一次運算C

	c++;
	printf("c++=%d\r\n",c);     // 第二次運算C

	c--;
	printf("c--=%d\r\n",c);     // 第三次運算C

	printf("++c=%d\r\n",++c);   // 第四次運算C

	printf("c++=%d\r\n",c++);   // 第5次運算C
	str = "======從程式中有看出++C與C++的差別嗎?=========\r\n";
	cout<<(str);
	cin>>c;
	return 0;
}

