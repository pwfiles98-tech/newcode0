#include <iostream>
using namespace std;

int main()
{

// increment ++ 
  int a=10;
  int c=10;

   int b= a++; // that mean b show only 10 then a show 10 
   int d = ++c;//here its add +1 in c then again show in d 

   cout  << "b =" << b << endl;
   cout << "a =" << a << endl;
   cout << "d = " << d << endl;
   cout << "c = " << c<< endl;  
     //simmialrly in descrement 
   //where -1 in the value 


   int g=10;
     int h= g--;


      cout << "h = "  << h <<  endl;
     cout << "g = "<< g << endl;
   

  
  return 0;
}