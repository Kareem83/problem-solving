#include <iostream>
#include <string>
#include <stack>
#include <deque>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;

	bool reverse = 0;
	deque<int> dq;

	for (int i = 0; i < n; i++)
	{

		string s;
		cin >> s;

		if (s == "back")
		{
			if (!reverse)
			{
				if (dq.empty())
				{
					cout << "No job for Ada?" << endl;
				}
				else
				{
					cout << dq.back() << endl;
					dq.pop_back();
				}
			}
			else
			{
				if (dq.empty())
				{
					cout << "No job for Ada?" << endl;
				}
				else
				{
					cout << dq.front() << endl;
					dq.pop_front();
				}
			}
		}

		else if (s == "front")
		{
			if (!reverse)
			{
				if (dq.empty())
				{
					cout << "No job for Ada?" << endl;
				}
				else
				{
					cout << dq.front() << endl;
					dq.pop_front();
				}
			}
			else
			{
				if (dq.empty())
				{
					cout << "No job for Ada?" << endl;
				}
				else
				{
					cout << dq.back() << endl;
					dq.pop_back();
				}
			}
		}

		else if (s == "push_back")
		{
			int val;
			cin >> val;
			if (!reverse)
			{
				dq.push_back(val);
			}
			else
			{
				dq.push_front(val);
			}
		}

		else if (s == "toFront")
		{
			int val;
			cin >> val;
			if (!reverse)
			{

				dq.push_front(val);
			}
			else
			{

				dq.push_back(val);
			}
		}

		else if (s == "reverse")
		{
			reverse = !reverse;
		}
	}
}
