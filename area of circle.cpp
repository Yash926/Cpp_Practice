// c++ program to demonstrate public
#include<iostream>
using namespace std;
class circle
{
	public:
		double radius;
		double area()
		{
			return 3.14*radius*radius;
		}
};
int main()
{
	circle obj;
	obj.radius=5.5;
	cout<<"Radius is:"<<obj.radius<<"\n";
	cout<<"Area is:"<<obj.area();
	return 0;
}



// c++ program to demonstrate private
#include<iostream>
using namespace std;
class circle
{
	private:
		double radius;
	public:
		vpid area(double r)
		{
			radius=r;
			return 3.14*radius*radius;
		}
};
int main()
{
	circle obj;
	obj.radius=5.5;
	cout<<"Radius is:"<<obj.radius<<"\n";
	cout<<"Area is:"<<obj.area();
	return 0;
}







