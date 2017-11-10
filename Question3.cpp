# include<iostream>
using namespace std;
class rectangle
{
	public:
		double perimeter(double len,double bre);
		double area(double len, double bre);
		double length;
		double breadth;
};
double rectangle::perimeter(double len,double bre)
{
	return 2*(len+bre);
}
double rectangle::area(double len,double bre)
{
	return len*bre;
}
int main(void)
{
    rectangle rect1,rect2;
    cout<<"enter the length and breadth of 1st rectangle.\n";
    cin>>rect1.length;
    cin>>rect1.breadth;
    cout<<"enter the length and breadth of 2nd rectangle.\n";
    cin>>rect2.length;
    cin>>rect2.breadth;
    cout<<"for the 1st rectangle:\narea = "<<rect1.area(rect1.length,rect1.breadth)<<"\nperimeter = "<<rect1.perimeter(rect1.length,rect1.breadth)<<endl;
    cout<<"for the 2nd rectangle:\narea = "<<rect2.area(rect2.length,rect2.breadth)<<"\nperimeter = "<<rect2.perimeter(rect2.length,rect2.breadth)<<endl;
    return 0;
}
