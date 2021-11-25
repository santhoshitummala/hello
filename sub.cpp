#include<iostream>
using namespace std;
int sub(int x,int y)
{
	return x-y;
}
double sub(double x,double y)
{
	return x-y;
}
int sub(int x,int y,int z)
{
	return x-y-z;
}
double sub(int x,double y)
{
	return x-y;
}
int main()
{
	cout<<"the sub of two integers:"<<sub(10,20)<<endl;
	cout<<"the sub of two floats:"<<sub(10.5,20.7)<<endl;
	cout<<"the sub of three integers:"<<sub(10,20,30)<<endl;
	cout<<"the sub of integer and double:"<<sub(10,20.5)<<endl;
}

