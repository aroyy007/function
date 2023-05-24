// C program to find LCM of any limit

#include<bits/stdc++.h>
using namespace std;
int lcm(int a[], int size)
{
    int lcm = a[0];
    for(int i=1;i<size;i++)
    {
        int num1 = lcm;
        int num2 = a[i];
        while(num1!=num2)
        {
            if(num1>num2)
            {
                num2 = num2 + a[i];
            }
            else
            {
                num1 = num1 + lcm;
            }
        }
        lcm = num1;
    }
    return lcm;
}
int main()
{
    int a[100],s;
    cout<<"Enter Array Size : ";
    cin>>s;
    cout<<"Enter Array Elements : "<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<endl<<endl;
    cout<<"LCM of the given integers is "<< lcm(a,s)<<endl;
    return 0;
}
