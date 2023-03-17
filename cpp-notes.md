## Dynamic memory allocation
- array (static memory) // Both sequential and random element access
-
- Linkedlist (Dynamic memory) //  sequential element access
- tyoes of operations : malloc() , calloc() , realloc() , free() , new() , delete()

## - Malloc and Calloc :
// signature syntax
1) Malloc() : void * malloc(sizeof(int)); // void* is also called generic pointer ( we can store address of any type of pointer and can be converted into any type of pointer)
   
2) Calloc() : void * calloc(n, sizeof(int));

- // Void in datatype is return nothing , but in case of malloc it can be of everything or type.
##  Types of Pointer : 
### - Generic Pointer 
- int x=5;
- void *p = &x;
- cout << *(int*)p; //cout << *p; shows error that's why we have to typecast
### - Wild Pointer
- int *p; // wild because it's not point any type with initialization.
### - Null Pointer
- int *p = Null;
### - Dangling Pointer
- int *p = new int; // dangling pointer is a pointer which still point to the pointer whose memory is free.
## Memory allocation in different types 
- stack : local variable stored and function ( activation recored and intermediate result ).
- Heap :  dynamic memory at runtime.
- Data segment : initialized global and static variable is stored in Datasegment.
- BSS : uninitialized global and static variable is stored in Datasegment.
- Text : for source code.
- Os : reserved for os.

### Memory area involved in DMA : Stack and Heap 
stack : for pointer. // local variable delete
Heap : dynamic memory allocated in the scope of block for holding value.

## Memory Leak 
- void func()
  {
    int *p = new int;
    *p = 20;
    free(p) // if you don't free the dynamic memory allocated in the scope of block , Then it is called memory leak.      
 }

## new() :
- int *p = new int[5];
## delete() : 
- delete[] p; //delete p;
## realloc() :
- int *P = (int*) mallloc (6 *sizeof(int));
- p = (int*) realloc (p,10 * sizeof(int));

# OOP

## Class : 
- it is a blueprint, set of specification or features.
## Object :
- it is an implementation of blueprint. // it is an instance of class.

## State and Behaviour:
- state : data // it changes with different objects
- Behaviour : function // it remain sames for objects
## Static and Non Static:
- static : class variable
- non- static : object
> Employee
--- 
> - eid - int
> - sal - float
> - odc - int
--- 
> +show() - void

### e1
---
eid : 101
sal : 25000
odc : 4 

### e2
---
eid : 201
sal : 27000
odc : 4 

in case redundancy we use  static keyword to define it once.

## Using static keyword
// datatype className :: variable = value;

#include<iostream>
using namespace std;
class Employee
{
    public :
    int eid;
    static int odc;
    void show(){cout << eid<<""<<odc<< endl;}
};

> int Employee :: odc = 0; 
- // initialize static data member outside the class once( bcz it's class variable.)
program
```
int main() 
{
    Employee e1;
    Employee e2;
    
    e1.eid = 101;
    Employee :: odc = 4;// e2.odc = 4;

    e1.show();
    e2.show();
    
    return 0; 
}
```
## Control and Context Switching : 
- inline void func() { // code to be executed  }
- int main (){ fun(); fun(); fun();}

//
```
#include<iostream>
using namespace std;
class Employee
{
    public :
    int eid;
    static int odc;
    void show(){cout << eid<<""<<odc<< endl;} // inline function bcz it's inside class.
   static void display(); // 
};

 int Employee :: odc = 0;
 void Employee :: Display()
 {
    cout << "ODC :" " << odc << endl;
// cout <<  eid<<" " << odc << endl;
 }
 
 // initialize static data member outside the class once( bcz it's class variable.)
program

int main() 
{
    Employee e1;
    Employee e2;
    
    e1.eid = 101;
    Employee :: odc = 4;// e2.odc = 4;

    e1.show();
    e2.show();
    e1.display();
    e2.display();
    return 0; 
}
```
- // Inheritance : deriving class from existing class
// constructor and private member are not inherited , only protected and public are inherited
- if you inherited through protected mode , then public and protected member become protected member
- if you inherited through public mode then , public is public  and protected is  protected
  
## Types of Inheritance :
1) Single inheritance : A <- B // B inherit from A
2) Multilevel inheritance : A <- B <- C // C inheri from A as well as B while B inherit from A.
3) Heirarchical inheritance : A <= B|C
4) Multiple inheritance : A|B <= C
5) Hybrid inheritance : A <= B|C <= D


>- // IS-A Relationship  Animal <= Dog|Cat 
>- // class inheritance syntax

```
#include<iostream>
using namespace std;
class A{

};
class B : public class A
{
    
};
```
>- 1) Single level inheritance
```
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
}
```
>- 2) Multilevel level inheritance
```
#include<iostream>
using namespace std;
class Animal {
    public : 
    void run(){"Running"<<endl;} // 1 member run()
};
class Lion : public class Animal // class classname : class public parent classname
{
        void roar(){"Roaring"<<endl;} // 2 member roar and run
};
class Cub : public class Lion // class classname : class public parent classname
{
        void play(){"Playing"<<endl;} // 2 member roar and run
};
int main()
{
    int Cub l; // object of child class is l
    l.run();
    l.roar(); 
    l.play();
    // it won't run if you create an object of parent class , that's why we create object of child class l.
    return 0;    
}
```
>- 3) Hierarchical level inheritance
```
#include<iostream>
using namespace std;
class Animal {
    public : 
    void run(){cout<<"Running"<<endl;} 
};
class Lion : public Animal
{
    public : 
        void roar(){cout<<"Roaring"<<endl;} 
};
class Dog : public Animal 
{
    public : 
        void bark(){cout<<"Barking"<<endl;} 
};
int main()
{
    Lion l;
    Dog d;
    l.run();
    d.run();
    l.roar(); 
    d.bark();
 
    return 0;    
}
```
// 4) Multiple level inheritance
```
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
```
>- // 5) Hybrid level inheritance
```
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
```
## Association : Composition ( containership) and Aggregation

## Call by : Value , Address and reference
```
void show (int a , int b)
{
    int x ,y;
    temp = a;
    a = b;
    b = temp;
}
void show (int *a , int *b)
{
    int x,y;
    temp = a;
    a = b;
    b = temp;
}
void show (int &a , int &b)
{
    int x,y;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10 ,y = 20;
    swap1(x,y);
    swap2(x,y);
    swap3(&x,&y);
    return 0;    
}
```