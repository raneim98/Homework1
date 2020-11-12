
#include <iostream>

using namespace std;


void min_max(double array[], int size,double min, double max){
   
    max = array[0];
    min = array[0];
    for(int i=1; i<size; i++)
    {
        if(array[i] > max)
            max = array[i];
        if(array[i] < min)
            min = array[i];
    }
    // Print maximum and minimum element
    cout<<"\nMaximum element =" << max << "\n";
    cout<<"Minimum element =" << min << "\n";
}

int main () 
{
    int size;
    double min, max;
    cout<<"Enter size of the array: ";
    cin>>size;
    double array[size];
    cout<<"\n Enter the elements in the array: ";
    for(int i=0; i<size; i++)
        cin>>array[i];
    min_max( array,  size, min,  max);
    
}

