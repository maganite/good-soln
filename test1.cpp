#include<iostream>
using namespace std;

int foccur(int a[],int n,int x)
{
    int count=0;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]>x)
        high=mid-1;
        else if(a[mid]<x)
        low=mid+1;
        // else
        // {
        //     if(a[mid]==x && a[mid]!=a[mid-1])
            
        // }
    }
}

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    foccur(a,n,x);

}