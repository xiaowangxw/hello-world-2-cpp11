// helloworld2cpp11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	vector<string> outStrVec{
		"*** Program startting ***",
		"==============================",
		"Hello, World! Written in CPP11.",
		"==============================",
		"*** The end. press enter to exit. ***"
	};

	for (auto str : outStrVec)
	{
		cout << str << endl;
	}

	string inStr;
	cin.clear();
	while (cin.rdbuf()->in_avail()) getline(cin, inStr);
	getline(cin, inStr);

	return 0;
}

