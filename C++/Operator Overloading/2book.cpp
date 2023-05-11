#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class Book
{
    int id;
    char nm[15];
    int price;

public:
    Book()
    {
        id = price = 0;
        nm[0] = '\0';
    }
    Book(Book &t)
    {

        id = t.id;
        price = t.price;
        strcpy(nm, t.nm);
    }
    ~Book(){}
    friend istream &operator>>(istream &in, Book &t)
    {
        cout << "\n Book  ID";
        in >> t.id;
        cout << "\n Name ";
        in >> t.nm;
        cout << "\n Price ";
        in >> t.price;
        return in;
    }
    friend ostream &operator<<(ostream &out, Book &t)
    {
        out << "\n Book ID: " << t.id << "\n Name : " << t.nm << "\n Price  : " << t.price;
        return out;
    }
};

int main()
{
    Book a;
    cin >> a;
    cout << a;
    return 0;
}
// ------------------------------

