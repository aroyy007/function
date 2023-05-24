//C++ program to find maximum and minimum elements in array using functions
#include<bits/stdc++.h>
using namespace std;
int max(int array[],int size)
{
    int max = array[0];
    for(int i=1;i<size;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}
int min(int array[],int size)
{
    int min = array[0];
    for(int i=1 ; i<size ; i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    return min;
}
int main()
{
    int a[100],s;
    cout<<"Enter Array size : ";
    cin>>s;
    cout<<"Enter Array Elements : "<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<endl<<endl;
    cout<<"Maximum element : "<<max(a,s)<<endl;
    cout<<"Minimum element : "<<min(a,s)<<endl;
    return 0;
}
