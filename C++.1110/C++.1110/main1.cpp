#include <iostream>
#include <string>
using namespace std;

//判断一个字符串是不是回文串
int is_str(string& str)
{
	int begin = 0;
	int end = str.size() - 1;

	while (begin < end)
	{
		if (str[begin] != str[end])
		{
			return 0;
		}
		begin++;
		end--;
	}
	return 1;
}

void reback()
{
	string str1;
	string str2;
	getline(cin, str1);
	getline(cin, str2);
	int count = 0;
	int l = str1.size();

	for (int i = 0; i <= l; i++)
	{
		string s1 = str1;//每次重置str1
		s1.insert(i, str2);
		if (is_str(s1))
		{
			count++;
		}
	}
	cout << count << endl;
}

int main1()
{
	reback();

	system("pause");
	return 0;
}