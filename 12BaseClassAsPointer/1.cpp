//------------------------------program base class pointer derived class object
#include <iostream>
using namespace std;

class rectangle
{
public:
	void area()
	{
		cout << "area of rectangle" << endl;
	}
};
class cuboid : public rectangle
{
public:
	void volume()
	{
		cout << "cuboid volume" << endl;
	}
};
int main()
{
	cuboid c;
	rectangle *p = &c;
	c.area();
	c.volume();
	p->area();
	// p->volume(); // as in the base class there is no volume class.
	//As the pointer is of base class so it will check only its base class weather he has the address of deroved class in it.
	return 0;
}