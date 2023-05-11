/*Cpp uses a unique keyword called 'this' to represent an object that invoke a member function. This is a pointer that
 point to the object for which, this function was called. This unique pointer is automatically passed to a member 
 function when it calls the pointer 'this', it acts as an implicit argument to all the member function
*/
//Use of 'this' pointer.
#include<bits/stdc++.h>
using namespace std;

class Number
{
    private:
        int x,y;
        void swap()
        {
           int tmp=x;
           x=y;
           y=tmp;
        }
    public:
        void set()
        {
            cout<<"\nX: ";
            cin>>x;
            cout<<"\nY: ";
            cin>>y;
        }
        void set(int a)
        {
            x=y=a;
        }
        void set(int x, int y)
        {
            this->x=x;
            this->y=y;
        }
        void set(Number &t)
        {
            x=t.x;   //t.x and t.y are the arguments
            y=t.y;
        }
        void callswap()
        {
            swap();
        }
        void display()
        {
            cout<<"\nx: "<<x<<"\ny: "<<y;
        }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
        void setx(int a)
        {
            x=a;
        }
        void sety(int b)
        {
            y=b;
        }
        Number add(Number &t)
        {
            Number k;
            k.set(x+t.x,y+t.y);
            return k;
        }
        Number sub(Number &t)
        {
            Number k;
            k.set(x-t.x,y-t.y);
            return k;

        }
};

int main()
{
    Number p,q,r;
    p.set();
    int a = p.getX();
    int b = p.getY();
    q.set(b,a);
    p.display();   // 3  7
    q.display();   // 7  3
    q.callswap();
    q.display();   // 3  7
    r=p.add(q);
    r.display();   // 6  14
    return 0;
}