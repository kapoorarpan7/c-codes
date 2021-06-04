#include<iostream>
using namespace std;

int main()
{
    int radius=0,shape,l=0,b=0;
    float area1,area2;
    string s;
    cout<<"please enter the shape:";
    cin>>s;
    
    if(s=="circle")
    {
        cout<<"please enter the radius:";
        cin>>radius;
        area1=3.14*radius*radius;
        cout<<"\n area of circle"<<area1;
    }
    else if(s=="triangle"){
        cout<<"enter base : ";
        cin>>b;
        cout<<"enter height :";
        cin>>l;

        area1=(0.5)*l*b;

        cout<<"area of triangle : "<<area1;

    }
    else if(s==" rectangle")
    {
        cout<<"enter the length";
        cin>>l;
        cout<<"enter the breadth";
        cin>>b;
        area2=l*b;
        cout<<"\narea of rectangle"<<area2;
    }
    else{
        cout<<" wrong input";
    }
    return 0;
    

    
    
    
    
}