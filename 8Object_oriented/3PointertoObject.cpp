// --------------------------------------------program for writing pointer to an object--------------------------------------------
# include<iostream>
using namespace std;   
class rectangle
{
public:
	int length;
	int breadth;
	int area()
	{
		return length*breadth;
	}
	int perimeter()
        {
		return  2*(length+breadth);
	}
};
int main()
{	
	rectangle r1;
	rectangle *ptr;
	ptr=&r1;
	ptr->length=10;  // For Pointer we use arrow operator.
	ptr->breadth=5;
	cout<<ptr->area()<<endl;
	cout<<ptr->perimeter()<<endl;    
}