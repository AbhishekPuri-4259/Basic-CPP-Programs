#include<iostream>
using namespace std;

class line
{
	public:
	int len;
	int area;
	int volume;

	void lengthofline(int l)
	{
		len = l;
	}

	void display(int opt)
	{
	
		if (opt == 1)
		{
			cout << " Length of line: " << len << endl;
		}
		else if (opt == 2)
		{
			cout << " Area of Rectangle: " << area << endl;
		}
		else if (opt == 3)
		{
			cout << " Volume of Cuboid: " << volume << endl;
		}
	}
};

class Rectangle : public line
{
	public:
	void R_area(int l, int b)
	{
		area = l * b;
	}
};

class Cuboid : public Rectangle
{
	public:
	void C_volume(int l, int b, int h)
        {
                volume = l * b * h;
        }
};

int main()
{
	Rectangle R1;
	R1.lengthofline(5);
	R1.display(1);
	
	R1.R_area(5, 4);
	R1.display(2);

	Cuboid C1;
	C1.C_volume(5, 4, 3);
        C1.display(3);
}
