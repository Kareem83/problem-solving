#include <iostream>
#include <deque>
using namespace std;
int main()
{
	int n;
	cin >> n;
	deque<int> pos, neg, zero;

	for (int i = 0; i < n; i++)
	{
		int c;
		cin >> c;

		if (c < 0)
		{
			neg.push_back(c);
		}
		else if (c > 0)
		{
			pos.push_back(c);
		}
		else
		{
			zero.push_back(c);
		}
	}

	if (neg.size() % 2 == 0)
	{
		zero.push_back(neg.at(neg.size() - 1));
		neg.pop_back();
	}

	if (pos.empty())
	{
		pos.push_back(neg.at(neg.size() - 1));
		pos.push_back(neg.at(neg.size() - 2));
		neg.pop_back();
		neg.pop_back();
	}

	cout << neg.size() << " ";
	for (int i = 0; i < neg.size(); i++)
	{
		cout << neg[i] << " ";
	}
	cout << endl;

	cout << pos.size() << " ";
	for (int i = 0; i < pos.size(); i++)
	{
		cout << pos[i] << " ";
	}
	cout << endl;

	cout << zero.size() << " ";
	for (int i = 0; i < zero.size(); i++)
	{
		cout << zero[i] << " ";
	}

}
