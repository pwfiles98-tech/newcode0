#include <iostream>
using namespace std;


int sumofdigit(int num){
int digitsum=0;
  while (num >0 ){
    int lastdigit = num % 10; //here i use % for find last digit of number
    //       or find reminder of number
    num /=10; // here i use / for find number without last digit
       // mean we acually devide number 
               // this is different beween / and % operator
    digitsum +=lastdigit;
    
  }
  return digitsum;

}
int main (){
    int n;
    cout << "enter your number ";
    cin >> n;    //here i use n for innput (n)
     cout<< "sum of digit is " << sumofdigit(n) << endl;
}