#include <iostream>
using namespace std;
 int main (){

//while loop 
int b = 1;
cout << "number:";

 while (b <=10){

    
    cout << b << " ";
    b++;
    
 }
   cout << endl;
//for loop

         int n = 18;
       for(int i = 1 ; i<=n; i++ ) {

       cout << i << " ";

  }
       cout << endl;


       int y = 15;
       int sum = 0;
        for (int p=1  ; p<=y; p++){

        //   in this p which is 1 got added then its goes in condition and again its add 2 then 3 
        // its checked full coundution then stop at y = 15
       // its show output 120
         sum += p;
         if (p==10){
            break;

            //   now i applied break condition in tis loop 
            // where loop stop at 10 only
            //   now output is 55
         }

      }
               cout << "sum = " << sum <<endl;
      //  sum of all odd numbers
           int u=16;
           int oddsum =0;
             for  (int i=1; i<=u; i++){

                if (i % 2 != 0){

                    oddsum += i; // here output is sum of all odd number 64

                     //here don't applie {} in tis beause break conditon don't work 
                  
                     if (i==5){
                        break;//here output 9 because its break at 5
                     }
                    

                }
             }
             cout << "sum of odd numbers = " << oddsum << endl;
               
             int  c = 33;
             int evensum =0;
              for (int c=1; c<=33; c++){

                     if (c%2  ==0){


                        evensum += c; // here output is sum of all even number 
                          if (c==10 ) {
                           break; // here output 
                          }


                     }
                      
                              //  cout << "sum of even numbers = " << evensum << endl;  i don't know why this line of loop working different way jut in print 

                  
              }
                         cout << "sum of even numbers = " << evensum << endl;
                  

                         // find prime number 
                     
                               int r =7;
                            bool isprime = true;//here i used boolean because to check the conditon of prime number is or not 
                            for ( int i=2; i<=r-1; i++){ //here we start from 2 because prime number is divisible by and itself that mean (r-1)

                                  if ( r% i==0){//false because we take 7%2=1 and 7%3=1 more upto 7-1=6 that mean 7 is not completely divisbe 
                     
                         isprime = false;//so 7 never false then it not break so it's prime number a true condiion applied which we out 
                         break;

                       }
                   }
                     
                 if (isprime ==true){
                         cout <<"prime number\n"; //here

                   }
                   else {
                     cout << "not prime number\n";
                   }        
                        // another way  to find prime number
                          
                        
                               int o =12;
                            bool isprime2 = true; //here it put 2 for differentiate from first one boolean
                            for ( int i=2; i*i<=o; i++){ //here i applies root n meathod because if i at take 12 that mean 2*root12(3.4)that mean 
                                 //  mean this (12) is not prime number
                                  if ( o% i==0){ 
                     
                         isprime2 = false;
                         break;

                       }
                   }
                     
                 if (isprime2 ==true){
                         cout <<"prime number\n"; 

                   }
                   else {
                     cout << "not prime number\n";   

                      
                  
                   }
                           
                           


    return 0;
 }
