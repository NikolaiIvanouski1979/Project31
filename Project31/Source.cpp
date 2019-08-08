# include <iostream>
using namespace std;

class Counter
{
private:
	unsigned int count;
public:
	Counter() : count(0)
	{
		cout << "Counter" << endl;
	}
	~ Counter()
	{
		cout << "Destructor" << endl;
	}
	void inc_count()
	{
		count++;
	}
	int get_count()
	{
		return count;
	}
};

int main()
{
	Counter c1, c2;
	cout << "c1= " << c1.get_count();
	cout << "c2= " << c2.get_count() << endl;
	c1.inc_count();
	c2.inc_count();
	c2.inc_count();
	cout << "c1= " << c1.get_count();
	cout << "c2= " << c2.get_count();
	cout << endl;
	system("pause");
	return 0;
}