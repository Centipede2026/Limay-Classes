#include"mytime.h"

int main()
{
    MyTime a,b,c;
    a.setTime();
    a.display();
    b.display();
    b.setTime();

    if(a.isMore(b))
        cout<<"A";
    else 
        cout<<"B";
    c=a.add(b);
    c.display();
    return 0;
}
