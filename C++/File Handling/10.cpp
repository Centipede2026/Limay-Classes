//Program to add modify and delete student class objects from the binary file stu.dat

#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class student
{
    int no;
    char nm[15];
    double mrk;
    int state; //0-delete  1-valid
public:
    student()
    {
        no=0;
        nm[0]='\0';
        mrk=0.0;
        state=1;
    }
    ~student(){}
    int getNo(){return mrk;}
    int getState(){return state;}
    void delRecord()
    {
        state=0;
    }
    void setData(int n)
    {
        no=n;
        cout<<"\nName:";
        cin>>nm;
        cout<<"\nMarks:";
        cin>>mrk;
        state=1;
    }
    void display()
    {
        cout<<"\nRoll No:"<<no;
        cout<<"\nName:"<<nm;
        cout<<"\nMarks:"<<mrk;
        cout<<"\nState:"<<state;
    }
};

class StudentAMD
{
    fstream fs;
    student s;
public:
    StudentAMD();
    ~StudentAMD(){fs.close();}
    void add();
    void mod();
    void del();
    void display();
    int search(int);
    //return -1 if no record;o.w. return begin byte no & founcd object from the file   
};

StudentAMD::StudentAMD()
{
    ifstream sin;
    sin.open("stu.dat",ios::in | ios::binary);
    if(!sin)
    {
        cout<<"\nFile not found";
        ofstream sout;
        sout.open("stu.dat",ios::out | ios::binary);
        sout.close();
    }
    else
        sin.close();
        fs.open("stu.dat",ios::in | ios::out | ios::binary);
    
}

int StudentAMD::search(int n)
{
    int pos=0;
    fs.seekg(0,ios::beg);
    //shift get ptr to byte 0 from begin of file
    while(1)
    {
        fs.read((char*)&s,sizeof(student));
        //reads an object from file
        if(fs.eof())
        {
            fs.clear();  //unlocks the file
            pos=-1;
            break;
        }
        if(s.getNo()==n)
            break;
        pos=fs.tellg();  //tells present position in byte from begin of the file
    }
    return pos;
}

void StudentAMD::add()
{
    int no,pos;
    cout<<"\nRoll No:";
    cin>>no;
    pos=search(no);
    if(pos>=0)
    {
        cout<<"\nRecord Exist";
        return;
    }
    s.setData(no);
    fs.seekp(0,ios::end);  //shift put pointer to 0th byte from EOF
    fs.write((char*)&s,sizeof(student));
}

void StudentAMD::mod()
{
    int no,pos;
    cout<<"\nRoll No:";
    cin>>no;
    pos=search(no);
    if(pos== -1 || s.getState()==0)
    {
        cout<<"\nRecord not exists";
        return;
    }
    s.setData(no);
    fs.seekp(pos,ios::beg);  //shift put pointer to pos byte from BOF
    fs.write((char*)&s,sizeof(student));
}

void StudentAMD::del()
{
    int no,pos;
    cout<<"\nRoll No:";
    cin>>no;
    pos=search(no);
    if(pos==-1 || s.getState()==0)
    {
        cout<<"\nRecord not exists";
        return;
    }
    s.delRecord();
    fs.seekp(pos,ios::beg);  //shift put pointer to pos byte from BOF
    fs.write((char*)&s,sizeof(student));
}

void StudentAMD::display()
{
    fs.seekg(0,ios::beg);  //shifts get ptr to BOF
    while(1)
    {
        fs.read((char*)&s,sizeof(student));
        if(fs.eof())
        {
            fs.clear();
            break;
        }
        s.display();
    }
}

int main()
{
    int opt;
    StudentAMD st;
    while (1)
    {
        cout<<"\nMenu\n1.Add\n2.Mod\n3.Del\n4.Display\n5.Exit\nOption:";
        cin>>opt;
        if(opt>4)
            break;
        switch(opt)
        {
            case 1:
                st.add();
                break;
            case 2:
                st.mod();
                break;
            case 3:
                st.del();
                break;
            case 4:
                st.display();
        }
    }
    return 0;
}


