#include <iostream>
using namespace std;

  int main (){

  
  
        //  appled nested loop
      int p;
       cout << "Enter the no. row  : "; //here er add price and add braket 
          cin >> p;

       for  (int i=1; i<=p; i++){    //this is also know as (outter loop) // start from i=0 this will start from 0 to...n
          int j=17;
           for(int i=1; i<=j; i++){     //this is inner loop
               cout << "$  " ; //here try "& \n" see magic of nested loop
           }
              
       
             cout <<endl;


       }        
                    // its print a primide
           
                int a;
                cout << "Enter the no : "; 
                 cin >> a;

                 for  (int i=1; i<=a; i++){
                  int b=i;
                   for(int i=1; i<=b; i++){
                   cout << b << a ; //here try "& \n" see magic of nested loop
           }
              
       
              cout <<endl;


       }                    
                                                           
                  //  print charator
             int c=9;//here is total five ch because it's start with zero
              for (int i=0; i<=c; i++){
                  char ch='A';
                  int j=25;  // its for coloum like how much alphabte
                 for(int i=0; i<=j; i++  ){
                    cout << ch; //<< "  ";
                    // cout << " 000 ";
                    ch = ch+1;


                 }

                 cout <<  endl;

              }



                   


    return 0;
  }
