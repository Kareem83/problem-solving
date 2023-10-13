#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
	string s;

	stack<char> stak;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			char c = s[j];

			if (c == '{' || c == '(' || c == '[')
			{
				stak.push(c);                                                     //{(([])[])[]]}
			}
			else
			{
				if ((!stak.empty() && stak.top() == '(' && c == ')') || (!stak.empty() && stak.top() == '{' && c == '}') || (!stak.empty() && stak.top() == '[' && c == ']'))
				{
					stak.pop();
				}
				else
				{
					cout << "NO"<<endl;
					goto jump;
				}
			}
		}
		if (stak.empty())
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		jump:
		while (!stak.empty())
		{
			stak.pop();
		}
	}

}
