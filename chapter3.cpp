#include <iostream>
#include <conio.h>
//#include <process.h>
using namespace std;
void task31()
{
    cout << "enter number ";
    int numb;
    cin >> numb;
    for (int j=1; j<200; j++)
       {
        cout << numb*j;
         if(!(j % 10))
            cout << endl;
       }
    cout << endl;
}
void task32()
{
    cout << "touch 1 that celsius => fahrenheit, " << "2 that fahrenheit => celsius: ";
    int numb;
    float ctemp, ftemp;
    cin >> numb;
    if (numb==1)
     {  cout << "enter ceilsium temperature: ";
        cin >> ctemp;
        ftemp=(ctemp*9/5)+32;
        cout << "farenheit temperature: " << ftemp<< endl;
      }
        else
         {   cout << "enter fahrenheit temperature: ";
                    cin >> ctemp;
                    ctemp=(ctemp-32)*5/9;
                    cout << "celsium temperature: " << ctemp<< endl;
          }
}
void task33()
{
  char ch;
  unsigned long var =0;
  cout << "\n enter number:";
  while((ch=getche())!='\r' )
  var =var*10 +ch-'0';
  cout <<"  \n your number:" << var <<endl;
}
void task34()
{
    Begin:
    cout << " enter first number, operation and second number: ";
    float x,z, answer;
    char ch, letter;
    cin >> x >>ch>> z;
    switch(ch)
       {
         case '+': answer=x+z; break;
         case '-': answer=x-z; break;
         case '*': answer=x*z; break;
         case '/': answer=x/z; break;
       }
    cout << "answer: " << answer << endl;
    cout << "again? (y/n): ";
    cin >> letter;
    if (letter=='y')
        goto Begin;
}
void task35()
{
  for (int i=1; i<40;i+=2)
   {
      for (int j=1; j<40; j++)
     {
          char ch=(j < 40-i) ? ' ' : 'x';
          cout << ch;
      }
      cout << endl;
   }
}
void task36()
{
    unsigned int numb=1;
    unsigned long fact = 1;
    char ch='a';
   Begin:
    while(numb > 0)
    {
    Sit0:
    cout << "enter number: ";
    cin >>   numb ;
    if (numb==0)
      {  cout << "enter other number"<< endl; goto Sit0; }
    for(int j=numb; j>0; j--)

        fact *= j;
   cout << "factorial= "<<  fact  << endl;
   cout << "again? (y/n): ";
   cin >> ch;
   if (ch=='y')
       goto Begin;
    }
}
void task37()
{
    int year, cont;
    float rate,sum;
    sum=0;
    double r,b1,b;
    char ch='a';
    For:
    cout << "enter initial contribution: ";
    cin >> cont;
    cout << "enter number of years: ";
    cin >> year;
    cout << "enter interest rate: ";
    cin >> rate;
    r = rate/100;
    b1 = r+1;
    b=1;
    for (int j=0; j <= year;j++)
    {
       sum = b*cont;
       b=b1*b;
     }
        cout << "after " << year << " years you get " << sum << endl;
        cout << "again? (y/n): ";
        cin >> ch;
        if (ch=='y')
            goto For;

}
void task38()
{
    Sum:
    int ster1, ster2, shill1, shill2, pens1, pens2, ster, shill, pens;
    char ch='a';
    cout << "enter first sum: ";
    cin >> ster1;
    cin >> shill1;
    cin >> pens1;
    cout << "enter second sum: ";
    cin >> ster2; cin>> shill2; cin>> pens2;
    ster=ster1+ster2;
    shill= shill1 + shill2;
    if (shill>19)
      { shill=shill-20; ster++; }
    pens=pens1+pens2;
    if (pens>11)
      { shill++; pens=pens-12;
        if (shill>19)
          { shill=shill-20; ster++; }
      }
    cout << "your sum: " << ster << ' ' << shill<<  ' '<< pens<< endl ;
    cout << "again? (y/n): ";
    cin >> ch;
    if (ch=='y')
        goto Sum;
}
void task39()
{
    long int place, guest, sum;
    char ch;
    Task39:
    cout <<"enter number of places: ";
    cin >> place;
    cout <<"enter number of guests: ";
    cin >> guest;
    sum=1;
    for (int j=0; j<place; j++)
        sum=sum*(guest-j);
    cout << "combinations: "<< sum<< endl;
    cout << "again? (y/n): ";
    cin >> ch;
    if (ch=='y')
        goto Task39;
}
void task310()
{
    int year, cont;
    float rate,sum, wish;
    double r,b1,b;
    char ch='a';
    For:
    year=0;
    sum=0;
    cout << "enter initial contribution: ";
    cin >> cont;
    cout << "enter interest rate: ";
    cin >> rate;
    cout << "enter desired sum: ";
    cin >> wish;
    r = rate/100;
    b1 = r+1;
    b=1;
    while (sum < wish)
    {
       sum = b*cont;
       b=b1*b;
       year++;
     }
        cout << "you get desired sum after " << year-1<< " years"<< endl;
        cout << "again? (y/n): ";
        cin >> ch;
        if (ch=='y')
            goto For;
}
void task311()
{
Sum:
int ster1, ster2, shill1, shill2, pens1, pens2, ster, shill, pens;
ster= shill= pens=0;
float factor;
char ch='a';
char sign='b';
cout << "enter first sum: ";
cin >> ster1;
cin >> shill1;
cin >> pens1;
cout << "enter +/-/* : ";
cin >> sign;
if (sign=='*')
   goto Operation3;
cout << "enter second sum : ";
cin >> ster2; cin>> shill2; cin>> pens2;
switch(sign)
 { case '+':
    ster=ster1+ster2;
    shill= shill1 + shill2;
    if (shill>19)
       { shill=shill-20; ster++; }
    pens=pens1+pens2;
   if (pens>11)
       { shill++; pens=pens-12;
         if (shill>19)
          { shill=shill-20; ster++; }
        }
    cout << "your sum: " << ster << ' ' << shill<<  ' '<< pens<< endl ;
    break;
   case '-':
    ster=ster1-ster2;
    shill= shill1 - shill2;
     if (shill>19)
       { shill=shill+20; ster--; }
    pens=pens1-pens2;
     if (pens<0)
       { shill--; pens=pens+12;
         if (shill<0)
          { shill=shill+20; ster--; }
        }
    cout << "your sum: " << ster << ' ' << shill<<  ' '<< pens<< endl ;
    break;
    Operation3:
    cout << "enter number: ";
    cin >> factor;
    ster=ster1*factor;
    shill=shill1*factor;
    if(shill>19)
      { shill=shill-20; ster++; }
    pens=pens1*factor;
    if(pens>11)
      { pens=pens-12; shill++;
        if(shill>19)
          { shill=shill-20; ster++; } }
    cout << "your sum: " << ster << ' ' << shill<<  ' '<< pens<< endl ;
    break;
  }
cout << "again? (y/n): ";
cin >> ch;
if (ch=='y')
    goto Sum;
}
void task312()
{
    char ch='a';
    char sign='b';
    char an='c';
    int a,b,c,d,sumup,sumdown;
    Task312:
    sumup=sumdown=0;
    cout << "enter first fraction: ";
    cin>> a>> ch>> b;
    cout << "enter sign + - * /: ";
    cin>> sign;
    cout << "enter second fraction: ";
    cin>> c>> ch>> d;
    switch(sign)
    {
      case '+':
      sumup=(a*d + b*c);
      sumdown=(b*d);
      cout << "answer " << sumup<< ch<< sumdown<< endl;
      break;
      case '-':
      sumup=(a*d - b*c);
      sumdown=(b*d);
      cout << "answer " << sumup<< ch<< sumdown<< endl;
      break;
      case '*':
      sumup=a*c;
      sumdown=b*d;
      cout << "answer " << sumup<< ch<< sumdown<< endl;
      break;
      case '/':
      sumup=a*d;
      sumdown=b*c;
      cout << "answer " << sumup<< ch<< sumdown<< endl;
      break;
    }
   cout << "again? (y/n): ";
   cin >> an;
   if (an=='y')
      goto Task312;
}
int main()
{
    task312();
    return 0;
}

