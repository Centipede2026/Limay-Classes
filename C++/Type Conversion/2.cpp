//type conversion class to class by defining OPERATOR DESTINATION IN SOURCE CLASS
#include<iostream>
using namespace std;
class result{
    int no;
    double mrk;
    public:
    result(int a,double b){
        no=a;
        mrk=b;
    }
    ~result(){}
    friend ostream & operator <<(ostream & out,result & t){
        out<<"ROLL NO. : "<<t.no<<"\nMARKS : "<<t.mrk;
        return out;    
    }
};
class marks{
    int rno;
    int s1,s2,s3;
    public:
    marks(){
        rno=s1=s2=s3=0;
    }
    ~marks(){}
    operator int(){
        return rno;
    }
    operator double(){
        return (s1+s2+s3)/3.0;
    }
    friend istream & operator >>(istream &,marks &);
    friend ostream & operator <<(ostream &,marks &);
    operator result(){
    int a=*this;// type conversion from marks to int by operator int
    double b=*this;//type converion from marks to double by operator double
    result k(a,b);
    return k;
}
};
istream & operator >>(istream & kin,marks & s){
    cout<<"ENTER ROLL NO. MARKS IN S1,S2,S3 RESPECTIVELY : ";
    kin>>s.rno;
    kin>>s.s1>>s.s2>>s.s3;
}
ostream & operator <<(ostream & kout,marks & s){
    cout<<"MARKS AND ROLL NO IN S1,S2,S3 RESPECTIVELY ARE : ";
    kout<<s.rno;
    kout<<s.s1<<endl<<s.s2<<endl<<s.s3;
}

int main(){
    marks p;
    cin>>p;
    cout<<p;
    result a;
    a=p;
    cout<<a;
    return 0;
}