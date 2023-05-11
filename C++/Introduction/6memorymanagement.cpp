/*C uses malloc and calloc functions to allocate memory dynamically at run time similarly
  it uses function free to free dynamically allocated memory. We use dynamic allication 
  technique when it is not known in advance how much of memory space is needed. Although
  C++ supports these funcitons, it also defines 2 uinary operators 'new' and 'delete' 
  that perform the task of allocating and freeing the memory in a better and easier way. 
  Since these operators manipulate memory on the free store(heap) they are also known as
  free store operators. An object can be created by using 'new' and destroyed by using 
  'delete' comma as and when required. A data object created inside a block with new will
  remain in existance until it is explicitly destroyed by using 'delete'. Thus the 
  lifetime of an object is directly under our control. 
  
  The 'new' operator offers following advantages over the funciton 'malloc()'-
    1.It automatically computes the size of the data objects, we need not use the 
    operator 'sizeof'. 
    2.It automatically returns the correct pointer type so that there is no need to use 
    operator 'sizeof'.
    3.It is possible to initiallize the object while creating the memory space.
    4.Like any other operator the new and delete can be overloaded. */

//syntax-       <ptr_variable>=new <data_type>;

#include<iostream>
using namespace std;

int 1()
{
    int *ptr;
    ptr= new int;      //ptr= new int(10);   Parameterized condtructor
    cout<<"\nData";    //-
    cin>>*ptr;         //-
    cout<<"\nData:"<<*ptr;
    *ptr=*ptr+5;
    cout<<"\nData"<< *ptr;
    delete ptr;
    return 0;
}


//2.syntax-     <ptr_variable>=new <data_type>(<initial_value);
#include<iostream>
using namespace std;
 
int 2()
{
    int *ptr;
    ptr= new int(10);      //Parameterized condtructor
    cout<<"\nData:"<<*ptr;
    *ptr=*ptr+5;
    cout<<"\nData"<< *ptr;
    delete ptr;
    return 0;
}


//3.syntax-     <ptr_variable>=new <data_type>[<Number_of_Elements>];
#include<iostream>
using namespace std;
 
int main()
{
    int *ptr,i=0;
    ptr= new int[5];      //Parameterized condtructor
    cout<<"\nData:";
    for (i=0;i<5;i++)
    {
        cin>>ptr[i];
    }
    
    cout<<"\nData";
    for (i=0;i<5;i++)
    {
        cout<< *(ptr+1);
    }
    delete []ptr;
    return 0;
}

