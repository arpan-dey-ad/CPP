#include<iostream>
#include<math.h>
using namespace std;
class line{
    private:
    int p1, p2;
    public:
    line(int p3, int p4)
    {
        p1 = p3;
        p2 = p4;
    }
    int getnum1()
    {
        return p1;
    }
    int getnum2()
    {
        return p2;
    }
};
int main()
{
    int x,y,z,w;
    cout<<"Enter the points";
    cin>>x>>y>>z>>w;
    line a(x,y);
    line b(z,w);
    int c,d;
    float e;
    c = pow(((b.getnum1())-(a.getnum1())),2);
    d = pow(((b.getnum2())-(a.getnum2())),2);
    e = sqrt(c+d);
    cout<<e;
    return 1;    
}