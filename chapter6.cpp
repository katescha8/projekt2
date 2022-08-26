#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
class Int
{
private:
    int data;
public:
    Int() : data(0)
    { }
    void init(int n)
    {data=n;}
    void add(Int n1, Int n2)
    {
        Int i3;
        i3.data=n1.data + n2.data;
       cout << "result: "<< i3.data;
    }
};
void task61()
{
     Int i1, i2, i3;
    i1.init(3);
    i2.init(10);
    i3.add(i1, i2);
}
class tollBooth
{
private:
    unsigned int count;
    double sum;
public:
    tollBooth() : count(0), sum(0)
    {  }
    void payingCar()
    {
       count++;
       sum+=0.50;
    }
    void nopayCar()
    {
        count++;
    }
    void display() const
    {
        cout <<endl<< sum <<" "<< count<< endl;
    }
};
void task62()
{
    tollBooth t1;
    cout <<endl<<"enter 0 car without cash,"<<endl<<" 1 car with cash,"<<endl<<" or Esc to escape  ";
    const char ESC= 27;
    char ch;
    do { ch =   getche();
        if(  ch  =='0' )
        t1.nopayCar();
        if(  ch  =='1' )
        t1.payingCar();
    }
    while(ch   !=ESC);
    t1.display();
}
class time
{
    int h,m,s;
public:
    time() : h(0),m(0),s(0)
    { }
    time(int h1, int m1, int s1) : h(h1),m(m1),s(s1)
    {   }
    void output() const
    {cout << h<<":"<< m<<":"<< s<<endl;}
    void add(time t1, time t2)
    {
        h=t1.h+t2.h;
        m=t1.m+t2.m;
        s=t1.s+t2.s;
        if (s>=60)
        { s-=60; m++;}
        if (m>=60)
        { m-=60; h++;}

    }
};

void task63()
{
    const class time time1(12,54,32);
    const class time time2(7,16,23);
    class time time3;
    time1.output();
    time2.output();
    time3.add(time1,time2);
    time3.output();
}
class employee
   {
       int number;
       float salary;
     public:
      void get()
      {
          cout << " number and salary of employee: ";
          cin >> number>>salary;
      }
       void coutall()
       { cout <<number<< " employee get "<<salary << " dollars" << endl; }
};
void task64()
{
    employee emp1, emp2, emp3;
    emp1.get();
    emp2.get();
    emp3.get();
    emp1.coutall();
    emp2.coutall();
    emp3.coutall();
}
class date
{
    int m,d,y;
    char ch;
public:
    void getdate()
    {
        cout<< "enter date: ";
        cin >> m>>ch>>d>>ch>>y;
    }
    void showdate()
    {
        cout <<endl<<"date: "<< m<<ch<<d<<ch<<y;
    }
};

void task65()
{
   date date1;
   date1.getdate();
   date1.showdate();
}
class employee1
   {
       int number;
       float salary;
       enum etype { laborer, secretary, manager, accountant, executive, researcher };
       char chosen;
       int m,d,y;
       char ch;
public:
       void getemp()
       {
           cout << " number and salary of employee: ";
           cin >> number>>salary;
           cout << "enter first letter(laborer, secretary, manager, accountant,executive, researcher): ";
              chosen=getche();
          switch(chosen)
          {
             case 'a': chosen = accountant; break;
             case 'l': chosen = laborer; break;
             case 's': chosen = secretary; break;
             case 'm': chosen = manager; break;
             case 'e': chosen = executive; break;
             case 'r': chosen = researcher; break;
          }
          cout<< endl<<"enter date: ";
          cin >> m>>ch>>d>>ch>>y;
      }
       void putemp()
       {
           cout <<number<< " employee get "<<salary << " dollars" << endl;
           switch(chosen)
           {
              case 3 :cout << "\ntype of employee: accountant" << endl; break;
              case 0: cout << "\ntype of employee: laborer"<< endl; break;
              case 1: cout << "\ntype of employee: secretary"<< endl; break;
              case 2: cout << "\ntype of employee: manager"<< endl; break;
              case 4: cout << "\ntype of employee: executive"<< endl; break;
              case 5: cout << "\ntype of employee: researcher"<<endl; break;
        }
           cout <<endl<<"date: "<< m<<ch<<d<<ch<<y<<endl<<endl;
       }
};

void task66()
{
    employee1 emp1,emp2,emp3;
    emp1.getemp();
    emp2.getemp();
    emp3.getemp();
    emp1.putemp();
    emp2.putemp();
    emp3.putemp();
}
class angle
{
    int grad;
    float min;
    char ch;
    const char gr='\xF8';
public:
    angle(int g1, float m1, char ch1) : grad(g1), min(m1), ch(ch1)
    {cout <<grad<<gr<<min<<"' "<<ch<<endl;}
    void getcoor()
    {
        cout <<endl<<"enter coordinates: ";
        cin>>grad>>min>>ch;
        cout<<grad<<gr<<min<<"' "<<ch<<endl;
    }
};

void task67()
{
   char an='a';
   angle a1(55,47.3,'N');
   Begin:
   a1.getcoor();
   cout << "again?(y/n): ";
   cin >> an;
   if (an=='y')
   goto Begin;
}
class ordinal
{
    static int number;
    int count;
public:
    ordinal()
    {}
    ordinal(int count1): count(count1)
    {cout <<"my ordinal number "<<count<<endl;}
    int getord()
    {return count;}
    void myn()
    {
        number++;
        cout<<"my ordinal number "<<number<<endl;
    }
};
int ordinal::number=0;
void task68()
{
    ordinal o1,o2,o3,o5;
    o1.myn();
    o2.myn();
    o3.myn();
    ordinal o4(256);
    o5.myn();
}
class fraction1
{
    int a,b;
    char ch;
public:
    void get()
    {
        cout<<"enter fraction: ";
        cin>>a>>ch>>b;
    }
    void add1(fraction1, fraction1);
};
void fraction1::add1(fraction1 f1, fraction1 f2)
{
    a=f1.a*f2.b+f2.a*f1.b;
    b=f1.b*f2.b;
    ch='/';
    cout<<"answer: "<< a<<ch<<b<<endl;
}
void task69()
{
    fraction1 f1, f2, f3;
    char an;
    Begiin:
    f1.get();
    f2.get();
    f3.add1(f1,f2);
    cout << "again?(y/n): ";
    cin >> an;
    if (an=='y')
    goto Begiin;
}
class ship
{
        int grad;
        float min;
        char ch;
        const char gr='\xF8';
        static int number;
        int count;
public:
        ship()
        {    }
        int getord()
        {return count;}
        ship(int count1): count(count1)
        {cout <<"my ordinal number "<<count<<endl;}
        ship(int g1, float m1, char ch1) : grad(g1), min(m1), ch(ch1)
        {    }
        void getall()
        {
            cout <<endl<<"enter coordinates: ";
            cin>>grad>>min>>ch;
        }
        void numb()
        {
            number++;
            cout<<"ship ordinal number: "<<number<<endl;
        }
        void coutall()
        {
            //cout<<"ship ordinal number: "<<number<<endl;
            cout<<grad<<gr<<min<<"' "<<ch<<endl<<endl;;
        }
};
int ship::number=0;
void task610()
{
   ship ship1, ship2,ship3;
   ship1.getall();
   ship2.getall();
   ship3.getall();
   ship1.numb();
   ship1.coutall();
   ship2.numb();
   ship2.coutall();
   ship3.numb();
   ship3.coutall();
}
class fraction
{
    int a,b;
    char ch;
public:
    void get()
    {
        cout<<endl<<"enter fraction: ";
        cin>>a>>ch>>b;
    }
    void add(fraction, fraction);
    void sub(fraction, fraction);
    void mul(fraction, fraction);
    void div(fraction, fraction);
    void lowterms();
    void sort();
    void sort1();
};
void fraction::add(fraction f1, fraction f2)
{
    a=f1.a*f2.b+f2.a*f1.b;
    b=f1.b*f2.b;
    ch='/';
    lowterms();
    cout <<"answer is "<< a<<ch<<b;
}
void fraction::div(fraction f1, fraction f2)
{
    a=f1.a*f2.b;
    b=f1.b*f2.a;
    ch='/';
    lowterms();
    cout <<"answer is "<< a<<ch<<b;
}
void fraction::sub(fraction f1, fraction f2)
{
    a=f1.a*f2.b-f2.a*f1.b;
    b=f1.b*f2.b;
    ch='/';
    lowterms();
    cout <<"answer is "<< a<<ch<<b;
}
void fraction::mul(fraction f1, fraction f2)
{
    a=f1.a*f2.a;
    b=f1.b*f2.b;
    ch='/';
    lowterms();
    cout <<"answer is "<< a<<ch<<b;
}
void fraction::lowterms()
{
    long tnum, tden, temp, gcd;
    tnum = labs(a);
    tden = labs(b);
    if( tden == 0 )
    { cout << "invalid deniminator!"; exit(1); }
    else if( tnum== 0 )
    {a=0; b= 1; return; }
    while( tnum  !=0)
    {   if( tnum < tden )
        { temp=tnum; tnum =tden; tden=temp; }
        tnum = tnum -   tden; }
        gcd    = tden;
        a= a/ gcd;
        b= b/ gcd  ;
}
void task611()
{
    fraction f1, f2, f3;
    char an, sign;
    Begiin:
    f1.get();
    cout <<"enter sign(+ - * /): "; cin >>sign;
    f2.get();
    switch(sign)
    {
      case '+' : f3.add(f1,f2); break;
      case '-' : f3.sub(f1,f2); break;
      case '*' : f3.mul(f1,f2); break;
      case '/' : f3.div(f1,f2); break;
    }
    cout <<endl<< "again?(y/n): ";
    cin >> an;
    if (an=='y')
    goto Begiin;
}
void fraction::sort()
{
    cout << "enter denominator: ";
    cin >> b;
    int i=1;
    int j=b;
    a=0;
    while(i<j)
    {
        a=i;
        b=j;
        lowterms();
        cout <<setw(12)<< a<<"/"<<b;
        i++;
    }
}
void fraction::sort1()
{
    int i=1;
    int j=b;
    a=0;
    while(i<j)
    {
        a=i;
        b=j;
        lowterms();
        cout << a<<"/"<<b;
        int k=1;
        while (k<j)
        {
            a=i*k;
            b=j*j;
            lowterms();
            cout <<setw(10)<< a<<"/"<<b;
            k++;
        }
        i++;
        cout<<endl;
    }
}
void task612()
{
    fraction f1;
    f1.sort();
    cout <<endl<<"---------------------------------------------------------------------"<<endl;
    f1.sort1();
}
int main()
{
    task612();
    return 0;
}
