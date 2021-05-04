#include<iostream>
#include<math.h>
using namespace std ;

class Bisection{
public: float a,b;
float p;

Bisection(float a,float b){
    this->a=a;
    this->b=b;
}

//algebraic function
float func(float n){
    return ( (pow(n,3)) + 4*(pow(n,2)) - 10 ) ;
}

// function to determine wether root exits
void root(){
if( func(a) * func(b) < 0 ){
    cout<<"\nRoot Exists!\n";
    algorithm(a,b,3);
}
else{
    cout<<"\nRoot Doesn't Exist. Please try again!\n";
}
}

int algorithm(float a,float b,int it){
   

   for(int i=1 ; i<4 ; i++){

   
   cout<<"\nIteration: "<<i<<endl;
   
   p = (a+b)/2;  // evaluating p
   cout<<"\np = "<< p<<endl;

   float fP = func(p); // evaluating F(p)
   printf("\nF(p): %.5f",fP);
   // cout<<'.2f'<<fP;
   if( func(a) * fP > 0){
       a = p;
       b = b;
       cout<<"\nThe new set of states are: ["<<a<<"]"<<"["<<b<<"]\n" ;
       //algorithm(a,b);
   }
   else if( func(a) * fP < 0){
       a = a;
       b = p;
       cout<<"\nThe new set of states are: ["<<a<<"]"<<"["<<b<<"]\n" ;
       //algorithm(a,b);
   }
   
  // algorithm(a,b,it-1);
}
}
};



int main(){
    Bisection b(1,2);
    b.root();
}