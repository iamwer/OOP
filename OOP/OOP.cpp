#include <iostream>
#include <string>
using namespace std;


class Channel
{	
private:
public:
	int m_subs;
	string m_name;
	int dayExpance;

	void show()
	{
		cout << m_name << ' ' << m_subs << endl;
	}
	int subsAfter(int days)
	{
		return m_subs + dayExpance * days;
	}

};





int main()
{
	Channel iamwer;
	iamwer.m_name = "Iamwer";
	iamwer.m_subs = 1000;
	iamwer.dayExpance = 50;
	iamwer.show();
	cout << iamwer.subsAfter(30) << endl;


	Channel iamwer1;
	iamwer1.m_name = "Second variable";
	iamwer1.m_subs = 500;
	iamwer1.dayExpance = 30;
	iamwer1.show();
	cout << iamwer1.subsAfter(15);




	system("pause > 0");
	return 0;
}