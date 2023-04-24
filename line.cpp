#include<iostream>
#include<math.h>
using namespace std;
class line{
    public:
    int p1, p2;
    public:
    line(int p3, int p4)
    {
        p1 = p3;
        p2 = p4;
    }
};
int main()
{
    int x,y,z,w;
    cout<<"Enter the points";
    cin>>x>>y>>z>>w;
    line a(x,y), b(z,w);
    int c,d;
    float e;
    c = pow((b.p1)-(a.p1),2);
    d = pow((b.p2)-(a.p2),2);
    e = sqrt(c+d);
    cout<<e;
    return 1;    
}