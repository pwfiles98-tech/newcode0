#include <iostream>

using namespace std;


int main() {
// relation 
  cout << (3==3) <<endl; // this show true (1)
    cout << (5==3) <<endl; // this show false (0)
   cout << (3<=7) <<endl; // this show true (1)
 cout << (3>=5) <<endl; // this show false (0)
  cout << (3 !=3) <<endl; // this show false (0)
  cout << (3 !=6) <<endl; // this show true (1)
cout << (3<1) <<endl; // this show false (0)
cout << (3<5) <<endl; // this show true (1)


//logical = and(&&) , or(||) , not (!)

 cout <<  !(3<2) << endl; // this mean 3 is not greater then 2 mean its true (1)
  cout <<( (3<1) || (3>1) ) << endl; // this or , if one thing right then its show true (1)
//or false (0)

   cout <<( (3>1) && (3>1) ) << endl; // this and . here both should be same or right
   // so its show true or if not same it show false



    return 0;
}