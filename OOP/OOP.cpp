#include <iostream>
#include <string>
using namespace std;


class Channel
{	
	int m_subs;
	string m_name;
	int m_dayExpance;

public:
	string getName() { return m_name;}
	void setName(string name) { m_name = name; }

	int getSubs() { return m_subs; }
	void setSubs(int subs) { m_subs = subs; }

	int getdayExpance() { return m_dayExpance; }
	void setdayExpance(int dayExpance) { m_dayExpance = dayExpance; }


	void show()
	{
		cout << m_name << ' ' << m_subs << endl;
	}
	int subsAfter(int days)
	{
		return m_subs + m_dayExpance * days;
	}

};





int main()
{
	Channel iamwer;
	iamwer.setName("Iamwer resolution");
	iamwer.setSubs(100000);
	iamwer.setdayExpance(5555);
	iamwer.show();
	cout << iamwer.subsAfter(260);





	system("pause > 0");
	return 0;
}