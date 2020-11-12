#include<iostream>
using namespace std;

void and_func( int a,int b, int c){
    bool d; 
    d= a & b & c; 
    cout << a << " "<< b <<" "<< c << " "<< d << "\n";
}
void or_func( int a,int b, int c){
    bool d; 
    d= a | b | c; 
    cout << a << " "<< b <<" "<< c << " "<< d << "\n";
}


int main()
{
    for(int x=0;x<=1;++x)
		for(int y=0;y<=1;++y)
			for(int z=0;z<=1;++z)
			{
                or_func( x, y, z);
			}
    cout << "\n";
    for(int x=0;x<=1;++x)
		for(int y=0;y<=1;++y)
			for(int z=0;z<=1;++z)
			{
				and_func( x, y, z);
			}
    
}
