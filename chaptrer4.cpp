#include <iostream>
#include <conio.h>
using namespace std;
void task41()
{
    struct phone
    {
        int city, stantion, abo;
    };
        phone phone1, phone2;
        phone1.city=212;
        phone1.stantion=767;
        phone1.abo=8900;
        cout << "enter city code, number of stantion and number of abonent: ";
        cin >> phone2.city >> phone2.stantion >> phone2.abo;
        cout << "my number: "<< "("<< phone1.city<< ") "<< phone1.stantion << "-"<< phone1.abo<< endl;
        cout << "your number: "<< "("<< phone2.city<< ") "<< phone2.stantion << "-"<< phone2.abo<< endl;

}
void task42()
{
    struct point
    {
        int x,y;
    };
    point point1, point2, point3;
    cout << "enter first coordinates: ";
    cin >> point1.x >> point1.y;
    cout << "enter second coordinates: ";
    cin >> point2.x >> point2.y;
    point3.x=point1.x+point2.x;
    point3.y=point1.y+point2.y;
    cout << "coordinates of points sum: "<< point3.x<< ' '<< point3.y<< endl;
}
void task43()
{
    struct Distance
    {
        float feet, inches;
    };
    struct Volume
    {
        Distance length, width, height;
    };
    Volume dining;
    cout << "enter feet length: ";
    cin >> dining.length.feet;
    cout << "enter inches length: ";
    cin >> dining.length.inches;
    cout << "enter feet width: ";
    cin >> dining.width.feet;
    cout << "enter inches width: ";
    cin >> dining.width.inches;
    cout << "enter feet height: ";
    cin >> dining.height.feet;
    cout << "enter inches height: ";
    cin >> dining.height.inches;
    float l=dining.length.feet + dining.length.inches/12;
    float w = dining.width.feet + dining.width.inches/12;
    float h = dining.height.feet + dining.height.inches/12;
    float volume=l*h*w;
    cout << "volume: "<< volume<< endl;
}
void task44()
{
   struct employee
   {
       int number;
       float salary;
   };
   employee emp1, emp2, emp3;
   cout << " number and salary of first employee: ";
   cin >> emp1.number >> emp1.salary;
   cout << " number and salary of second employee: ";
   cin >> emp2.number >> emp2.salary;
   cout << " number and salary of third employee: ";
   cin >> emp3.number >> emp3.salary;
   cout << emp1.number<< " employee get "<<emp1.salary << " dollars" << endl;
   cout << emp2.number<< " employee get "<<emp2.salary << " dollars" << endl;
   cout << emp3.number<< " employee get "<<emp3.salary << " dollars" << endl;
}
void task45()
{
   struct date
   {
       int month, day, year;
       char ch='a';
   };
   date date1;
   cout << "enter date: ";
   cin >> date1.month >> date1.ch>> date1.day>> date1.ch>> date1.year;
   cout << "date: " << date1.month << date1.ch << date1.day<< date1.ch<< date1.year;
}
void task46()
{
  enum etype { laborer, secretary, manager, accountant, executive, researcher };
  struct type
  {
      etype typee;
      char chosen;
  };
  type type1;
  cout << "enter first letter(laborer, secretary, manager, accountant,executive, researcher): ";
  type1.chosen=getche();
  switch(type1.chosen)
  {
     case 'a': type1.chosen = accountant; break;
     case 'l': type1.chosen = laborer; break;
     case 's': type1.chosen = secretary; break;
     case 'm': type1.chosen = manager; break;
     case 'e': type1.chosen = executive; break;
     case 'r': type1.chosen = researcher; break;
  }
  switch(type1.chosen)
  {
     case 3 :cout << "\ntype of employee: accountant" << endl; break;
     case 0: cout << "\ntype of employee: laborer"<< endl; break;
     case 1: cout << "\ntype of employee: secretary"<< endl; break;
     case 2: cout << "\ntype of employee: manager"<< endl; break;
     case 4: cout << "\ntype of employee: executive"<< endl; break;
     case 5: cout << "\ntype of employee: researcher"<<endl; break;
  }
}
void task47()
{
    struct employee
    {
        int number;
        float salary;
    };
    employee emp1, emp2, emp3;
    cout << " number and salary of first employee: ";
    cin >> emp1.number >> emp1.salary;
    struct date
    {
        int month, day, year;
        char ch='a';
    };
    date date1, date2, date3;
    cout << "enter date of employment: ";
    cin >> date1.month >> date1.ch>> date1.day>> date1.ch>> date1.year;
    enum etype { laborer, secretary, manager, accountant, executive, researcher };
    struct type
    {
        etype typee;
        char chosen;
    };
    type type1, type2, type3;
    cout << "enter first letter(laborer, secretary, manager, accountant,executive, researcher): ";
    type1.chosen=getche();
    switch(type1.chosen)
    {
       case 'a': type1.chosen = accountant; break;
       case 'l': type1.chosen = laborer; break;
       case 's': type1.chosen = secretary; break;
       case 'm': type1.chosen = manager; break;
       case 'e': type1.chosen = executive; break;
       case 'r': type1.chosen = researcher; break;
    }
    cout << endl;
    cout << " number and salary of second employee: ";
    cin >> emp2.number >> emp2.salary;
    cout << "enter date of employment: ";
    cin >> date2.month >> date2.ch>> date2.day>> date2.ch>> date2.year;
    cout << "enter first letter(laborer, secretary, manager, accountant,executive, researcher): ";
    type2.chosen=getche();
    switch(type2.chosen)
    {
       case 'a': type2.chosen = accountant; break;
       case 'l': type2.chosen = laborer; break;
       case 's': type2.chosen = secretary; break;
       case 'm': type2.chosen = manager; break;
       case 'e': type2.chosen = executive; break;
       case 'r': type2.chosen = researcher; break;
    }
    cout << endl;
    cout << " number and salary of third employee: ";
    cin >> emp3.number >> emp3.salary;
    cout << "enter date of employment: ";
    cin >> date3.month >> date3.ch>> date3.day>> date3.ch>> date3.year;
    cout << "enter first letter(laborer, secretary, manager, accountant,executive, researcher): ";
    type3.chosen=getche();
    switch(type3.chosen)
    {
       case 'a': type3.chosen = accountant; break;
       case 'l': type3.chosen = laborer; break;
       case 's': type3.chosen = secretary; break;
       case 'm': type3.chosen = manager; break;
       case 'e': type3.chosen = executive; break;
       case 'r': type3.chosen = researcher; break;
    }
    cout << endl;
    cout << emp1.number<< " employee get "<<emp1.salary << " dollars" << endl;
    cout << "date of employment: " << date1.month << date1.ch << date1.day<< date1.ch<< date1.year;
    switch(type1.chosen)
    {
       case 3 :cout << "\ntype of employee: accountant" << endl; break;
       case 0: cout << "\ntype of employee: laborer"<< endl; break;
       case 1: cout << "\ntype of employee: secretary"<< endl; break;
       case 2: cout << "\ntype of employee: manager"<< endl; break;
       case 4: cout << "\ntype of employee: executive"<< endl; break;
       case 5: cout << "\ntype of employee: researcher"<<endl; break; //first emp
    }
    cout << endl;
    cout << emp2.number<< " employee get "<<emp2.salary << " dollars" << endl;
    cout << "date of employment: " << date2.month << date2.ch << date2.day<< date2.ch<< date2.year;
    switch(type2.chosen)
    {
       case 3 :cout << "\ntype of employee: accountant" << endl; break;
       case 0: cout << "\ntype of employee: laborer"<< endl; break;
       case 1: cout << "\ntype of employee: secretary"<< endl; break;
       case 2: cout << "\ntype of employee: manager"<< endl; break;
       case 4: cout << "\ntype of employee: executive"<< endl; break;
       case 5: cout << "\ntype of employee: researcher"<<endl; break; //second emp
    }
    cout <<endl;
    cout << emp3.number<< " employee get "<<emp3.salary << " dollars" << endl;
    cout << "date of employment: " << date3.month << date3.ch << date3.day<< date3.ch<< date3.year;
    switch(type2.chosen)
    {
       case 3 :cout << "\ntype of employee: accountant" << endl; break;
       case 0: cout << "\ntype of employee: laborer"<< endl; break;
       case 1: cout << "\ntype of employee: secretary"<< endl; break;
       case 2: cout << "\ntype of employee: manager"<< endl; break;
       case 4: cout << "\ntype of employee: executive"<< endl; break;
       case 5: cout << "\ntype of employee: researcher"<<endl; break; //third emp
    }
}
void task48()
{
    struct fraction
    {
    int a, b, c, d, sumup, sumdown;
    char slash;
    };
    fraction fract1;
        cout << "enter first fractions " ;
        cin >> fract1.a >> fract1.slash >> fract1.b;
        cout << "enter second fractions ";
        cin >> fract1.c >> fract1.slash >> fract1.d;
        fract1.sumup=fract1.a*fract1.d + fract1.b*fract1.c;
        fract1.sumdown=fract1.b*fract1.d;
        cout << "sum = " << fract1.sumup << fract1.slash << fract1.sumdown;
}
void task49()
{
    struct time
    {
        int hours, minutes, seconds;
    };
    time time1;
    long totalsecs;
    cout << "enter time( hours minutes seconds): ";
    cin>> time1.hours >> time1.minutes >> time1.seconds;
    totalsecs = time1.hours*3600 + time1.minutes*60 + time1.seconds;
    cout << "time: "<< totalsecs<< endl;
}
void task410()
{
     struct sterling
     {
        int pounds, shillings,pence,sum;
     };
     sterling st1;
     double funt, shill, fpens;
     cout << "enter decimal sum: ";
     cin >> funt;
     st1.sum=funt*240;
     st1.pounds=static_cast<int>(funt);
     shill=st1.sum-240*st1.pounds;
     st1.shillings=static_cast<int>(shill/12);
     fpens=shill-12*st1.shillings;
     st1.pence=static_cast<int>(fpens);
     cout << "old sum " << st1.pounds <<"." << st1.shillings<< "."<<st1.pence<< endl;
}
void task411()
{
    struct time
    {
        int hours, minutes, seconds, totaltime;
    };
    time time1, time2, time3;
    long totalsecs1, totalsecs2;
    cout << "enter first time( hours minutes seconds): ";
    cin>> time1.hours >> time1.minutes >> time1.seconds;
    totalsecs1 = time1.hours*3600 + time1.minutes*60 + time1.seconds;
    cout << "enter second time( hours minutes seconds): ";
    cin>> time2.hours >> time2.minutes >> time2.seconds;
    totalsecs2 = time2.hours*3600 + time2.minutes*60 + time2.seconds;
    time3.totaltime=totalsecs1+totalsecs2;
    time3.hours=time3.totaltime/3600;
    time3.minutes=(time3.totaltime-time3.hours*3600)/60;
    time3.seconds=time3.totaltime-time3.hours*3600-time3.minutes*60;
    cout << "time: "<<time3.hours<<":"<<time3.minutes<<":"<<time3.seconds << endl;
}
void task412()
{
        char ch='a';
        char sign='b';
        char an='c';
        struct fraction
        {
            int a,b,c,d,sumup,sumdown;
        };
        fraction fr1;
        Task412:
        fr1.sumup=0;
        fr1.sumdown=0;
        cout << "enter first fraction: ";
        cin>> fr1.a>> ch>> fr1.b;
        cout << "enter sign + - * /: ";
        cin>> sign;
        cout << "enter second fraction: ";
        cin>> fr1.c>> ch>> fr1.d;
        switch(sign)
        {
          case '+':
          fr1.sumup=(fr1.a*fr1.d + fr1.b*fr1.c);
          fr1.sumdown=(fr1.b*fr1.d);
          cout << "answer " << fr1.sumup<< ch<< fr1.sumdown<< endl;
          break;
          case '-':
          fr1.sumup=(fr1.a*fr1.d - fr1.b*fr1.c);
          fr1.sumdown=(fr1.b*fr1.d);
          cout << "answer " << fr1.sumup<< ch<< fr1.sumdown<< endl;
          break;
          case '*':
          fr1.sumup=fr1.a*fr1.c;
          fr1.sumdown=fr1.b*fr1.d;
          cout << "answer " << fr1.sumup<< ch<< fr1.sumdown<< endl;
          break;
          case '/':
          fr1.sumup=fr1.a*fr1.d;
          fr1.sumdown=fr1.b*fr1.c;
          cout << "answer " << fr1.sumup<< ch<< fr1.sumdown<< endl;
          break;
        }
       cout << "again? (y/n): ";
       cin >> an;
       if (an=='y')
          goto Task412;
}
int main()
{
    task412();
    return 0;
}
