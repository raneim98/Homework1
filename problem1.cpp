#include<iostream>
using namespace std;

void func_circle( double d,double area, double circum){
    double r=d/2;
     circum=2*r*3.14;
     area=3.14*r*r;
     cout << "area : " << area <<", Circumference: "<<circum<<"\n";
}

int main()
{
        double  d, area, circum;
	cout<<"Enter the circum of the circle :";
        cin>>d;
        func_circle(d, area, circum);

}

 
