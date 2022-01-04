#include<bits/stdc++.h>
using namespace std;
class shape{
    public:
    double x,y;
    void get_data(double l,double h){
       x=l;
       y=h;
    }
    virtual double display_area(){
        cout<<"Area is:"<<x*y;
        return 0;
    }
};

class traingle:public shape{
    public:
     double area;
      double display_area(){
     area=0.5*x*y;
     return area;
    }
    
};

class rectangle:public shape{
    public:
        double area;
        double display_area(){
        area=x*y;
        return area;
    }
};

int main(){
    traingle t1;
    t1.get_data(5.5,6.8);
   cout<<"Area of Triangle is "<<t1.display_area()<<"\n";
    rectangle r1;
    r1.get_data(12.1,10.9);
     cout<<"Area of Rectangle is "<<r1.display_area()<<"\n";
}