// Calc.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int a =1,b=2;
	int c = 0;
	string str = "=======�}�l�B��=========\r\n";

	c = b*a;
	cout<<(str);
	printf("c=%d\r\n",c); 

	printf("c=%d\r\n",c);      // �Ĥ@���B��C

	c++;
	printf("c++=%d\r\n",c);     // �ĤG���B��C

	c--;
	printf("c--=%d\r\n",c);     // �ĤT���B��C

	printf("++c=%d\r\n",++c);   // �ĥ|���B��C

	printf("c++=%d\r\n",c++);   // ��5���B��C
	str = "======�q�{�������ݥX++C�PC++���t�O��?=========\r\n";
	cout<<(str);
	cin>>c;
	return 0;
}

