#include <format>
#include <iostream>
#include <memory>

using namespace std;

class Point3D{
	public:
		double m_x,m_y,m_z;
		Point3D(double x,double y,double z);
};

Point3D::Point3D(double x,double y,double z):m_x{x},m_y{y},m_z{z}{

}

void Print_Point_Position(const Point3D& point){
	cout<<"The position of the point is: "<<format("x:{},y:{},z:{}",point.m_x,point.m_y,point.m_z)<<endl;
}
int main()
{
	auto anpoint{make_unique<Point3D>(1,2,3)};
	Print_Point_Position(*(anpoint.get()));
}
