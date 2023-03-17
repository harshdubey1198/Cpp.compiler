// #include <iostream>
// using namespace std;

// prog.1 : 1-dash-no-pattern.cpp

/*
#include <iostream>
using namespace std;

int main() {
int i,j,n; 
cin>>n;
for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
            {
        	if(i<=j)
                cout << "*";
    	    else 
              	cout << " ";
            }
       	for(j=0;j<n;j++)
            {
            	if(j<=i)
                    cout << "*";
            }
            cout<<endl;
   }
  return 0;
}*//*
// prog.2 : n*n-mirror-pattern.cpp
#include <iostream>
using namespace std;

int main() {
//    int arr;
/*int i,j,n; 
cin>>n;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
        {
        if(i<=j)
            cout <<i+1<< "*"; cout<<endl;
	    if(j==i) 
          	cout <<i+1;  cout<<endl;
        }
//    cout<<endl;
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i<=j)
            cout <<i+1<< "*"; cout<<endl;
	    if(j==i) 
            cout <<i+1; cout<<endl;
        }
   	for(j=0;j<n;j++)
    {
    	if(j<=i)
            cout << "*";
    }
 //   cout<<endl;
}   */
//int arr[5] = {1,2,3,4,5};
  //  cout<< *(&arr-1);
/*
    int i,size,x,n,p=1;
    int arr[size];
    cin>>size;
    for(i=0;i<n;i++){
        cin>>arr[i];
        int x = arr[i]/10;}
        p= p*x;}
    cout<<p;
    
//barua's number system
    

*/









    
   /* 
    
    
int sum=0,k=1;
for(i=0;)

    
    for i in range(n):

    m=int(input())

    while(m%10==0):

        sum1+=1

        m//=10

    c*=m

print(str(c)+"0"*sum1)*/
 /* return 0;
}
#include <iostream>
using namespace std;

int main() {
//    int arr;
/*int i,j,n; 
cin>>n;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
        {
        if(i<=j)
            cout <<i+1<< "*"; cout<<endl;
	    if(j==i) 
          	cout <<i+1;  cout<<endl;
        }
//    cout<<endl;
}

int arr[][3]= {3,4,5,6,7,8,9,1,2};
    int (*p)[3]=arr;
    p++;
    cout<<p[1][2];*//*
    
    #include <iostream>

using namespace std;

int main()
{
  

    int i,j,n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
{
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
       /*int spaces = 2 * (n - i);
       for (int j = 1; j <= spaces; j++) {
            cout << " ";*/ /*cout<< endl;
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
*/
/*
//Cpp prog:  class employee program
#include <iostream>
using namespace std;
class Employee
{
    int eid;
    float sal;

public:

    void setEid(int id)
    {
        eid = id;
    }
    int getEid()
    {
        return eid;
    }

    void setsal(float s)
    {
        sal = s;
    }
    float getsal()
    {
        return sal;
    }
};
int main() {
    
    Employee e;
    
    e.setEid(101);
    e.setsal(27800);
    
    cout<<"Eid:"<<e.getsal()<<endl;
    cout<<"Salary: "<<e.getsal()<<endl;
    
    return 0;
}
*/
//Cpp prog:  class employee program
/*#include <iostream>
using namespace std;
class Employee
{
    int eid;
    float sal;

public:

    void setEid(int id)
    {
        eid = id;
    }
    int getEid()
    {
        return eid;
    }

    void setsal(float s)
    {
        sal = s;
    }
    float getsal()
    {
        return sal;
    }
};
int main() {
    
    Employee e1;
    Employee e2;
    
    e1.eid = 101;
    Employee :: odc = 4;// e2.odc = 4;

    e1.show();
    e2.show();
    
    cout<<"Eid:"<<e.getsal()<<endl;
    cout<<"Salary: "<<e.getsal()<<endl;
    
    return 0;
}
*/

/*
// program for using static keyword datatype className :: variable = value;

#include<iostream>
using namespace std;
class Employee
{
    public :
    int eid;
    static int odc;
    void show(){cout << eid<<" "<<odc<< endl;}
};

 int Employee :: odc = 0; 
// initialize static data member outside the class once( bcz it's class variable.)

int main() {
    
    Employee e1;
    Employee e2;
    
    e1.eid = 101, e2.eid=201;
    Employee :: odc = 4; // e2.odc = 4;

    e1.show();
    e2.show();
    
    return 0;
}
*/
// default constructor
// when user doesn't define any consider , compile placed a consider implicitly.

/*
#include<iostream>
using namespace std;

class cab 
{
    int fare;

public:
    cab()
    {
        fare = 40;
    }
    cab (int fare)
    {
        this -> fare = fare;
    }
    void setFare(int d)
    {
       fare += d*10;       
    }
    int  getFare()
    {
        return fare;
    }
};

int main() { 
    cab ob;
    cab ob1;
    int d, cd;
    cout<<"Enter cab distance: ";
    cin >> cd;
    cout<<"Enter distance travelled by user: ";
    cin >> d;
    if (d<=5)
    {
        cab ob;
        ob.setFare(d);
        cout<<"Total Bill: "<<ob.getFare()<<endl;
    }
    else 
    {
        cab ob (40+ (cd-5)*10);
        ob.setFare(cd);
        cout<<"Total Bill: "<<ob.getFare()<<endl;
    }
    return 0;
    }
*//*
#include<iostream>
using namespace std;
class Employee
{
    public :
    int eid;
    static int odc;
    void show(){cout << eid<<" "<<odc<< endl;} // inline function bcz it's inside class.
   static void display(); // 
};

 int Employee :: odc = 0;
 void Employee :: display()
 {
    cout << "ODC : " << odc << endl;
// cout <<  eid<<" " << odc << endl;
 }
 
 // initialize static data member outside the class once( bcz it's class variable.)
// program

int main() 
{
    Employee e1;
    Employee e2;
    
    e1.eid = 101;
    Employee :: odc = 4; e2.eid = 201;// e2.odc = 4;

    e1.show();
    e2.show();
    e1.display();
    return 0; 
    e2.display();
}
*/
 // Inheritance : deriving class from existing class
// constructor and private member are not inherited , only protected and public are inherited

/*- if you inherited through protected mode , then public and protected member become protected member
- if you inherited through public mode then , public is public  and protected is  protected
## Types of Inheritance :
1) Single inheritance : A <- B // B inherit from A
2) Multilevel inheritance : A <- B <- C // C inherit from A as well as B while B inherit from A.
3) Heirarchical inheritance : A <= B|C
4) Multiple inheritance : A|B <= C
5) Hybrid inheritance : A <= B|C <= D
*/

// Inheritance is called IS-A Relationship.  Animal <= Dog|Cat 
// class inheritance syntax
/* 
#include<iostream>
using namespace std;
class A{

};
class B : public class A
{
    
};
*//*
#include<iostream>
using namespace std;
class Animal {
    public : 
    void run(){"Running"<<endl;} // 1 member run()
};
class Lion : public class Animal
{
        void roar(){"Roaring"<<endl;} // 2 member roar and run
};
int main()
{
    int Lion l; // object of child class is l
    l.run();
    l.roar();
    return 0;    
}*/
/*
// 4) Multiple level inheritance
#include<iostream>
using namespace std;
class A {
    public : 
    void show(){cout<<"Showing A"<<endl;} 
};
class B {
    public : 
        void display(){cout<<"Showing B"<<endl;} 
    //    void show(){cout<<"Showing B"<<endl;} 
    // if you use void show() instead of display same as previous class it shows ambiguous 
};
class C: public A , public B
{

};
int main()
{
    C ob;
    ob.show(); 
    ob.display();
   // ob.B :: show();
    ob.A :: show();
    return 0;    
}
*/
/*
 // 5) Hybrid level inheritance

#include<iostream>
using namespace std;
class A {
    public : 
    void show(){cout<<"Showing A"<<endl;} 
};
class B : virtual public A
{

};
class C: virtual public A 
{

};
class D: public B , public C
{

};

int main()
{
    D ob;
    ob.show(); 
    
    return 0;    
}
*/
// Call by : Value , Address and reference
/*
void swap (int a , int b)
{
    int x ,y,temp;
    temp = a;
    a = b;
    b = temp;
}
void swap2 (int *m , int *n)
{
    int x,y,temp;
    temp = *m;
    *m = *n;
    *n = temp;
}
void swap3(int &a , int &b)
{
    int x,y,temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x ,y , temp;// , *m , * n;
    x=10,y=20;
 //   *m  = &x , *n = &y;
  //  swap(x,y);
  //  swap(10,20);
  //  swap(x,y);
   // swap2(10,20); 
    swap3(&x,&y);
    return 0;    
}
*/
#include<iostream>
using namespace std;

class Demo{

private:    
    int a;
    int b;

public:
    void setA(int x){a=x;}
    int getA(){return a;}

    void setB(int y){b=y;}
    int getB(){return b;}
    
    void show(){cout<<"a = "<< a << "& b ="<< b << endl;}
    Demo operator+(const Demo & ob2); // member function declare
    
};
Demo Demo :: operator+(const Demo & ob2) // function Define 
{
    Demo temp;
    temp.a = a + ob2.a;
    temp.b = b + ob2.b;
    return temp;
}
int main()
{

    Demo ob1;
    Demo ob2;
    Demo res;
    ob1.setA(15);
    ob1.setB(25);
    ob1.show();

    ob2.setA(12);
    ob2.setB(27);
    ob2.show();
    cout << "a= a1+a2 & b = b1 + b2"<<endl;
    // res = ob1.operator+(ob2)
    res = ob1  + ob2; // ob1 (calling object) + ob2 (arguments) 
    // overloaded assignment operator invoke in case when object is already created before.
    // Demo res = ob1 + ob2; //copy constructor invoke when object is not created 
    res.show();
    return 0;
}