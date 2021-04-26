// -----------------------------------------program for creating default constructors----------------------------------------------------------------------
# include<iostream>
using namespace std;
    
class rectangle
{
private:
	int length;
	int breadth;
public:
	rectangle() // constructor
	{
		length=1;
		breadth=1;
	}
	int area()
	{
		return length*breadth;
	}
};
int main()
{
	rectangle r1;
	cout<<r1.area()<<endl;
}