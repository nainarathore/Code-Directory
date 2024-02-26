//Binary search using recursive method
#include <iostream>
using namespace std;
int a[10];
int judge=0; 
int binary(int,int,int);
int main()
{
    int low=0,high=9, item ;
    cout<<"enter 10 elements"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"enter element to be searched : "<<endl;
    cin>>item;
    binary(low,high,item);
    if(judge==0)
    {
        cout<<"element not found...."<<endl;
    }
    
}
int binary(int low,int high ,int item)
{
    int mid;
    mid=(low+high)/2;
    if(item==a[mid])
    {
        cout<<"element found at "<<mid+1<<" position"<<endl;
        judge=1;
        return 0;
    }
    else if(item<a[mid])
    {
        binary(low,mid-1,item);
    }
    else if(item>a[mid])
    {
        binary(mid+1,high,item);
    }
    else
    {
        return 0;
    }
return 0;
}