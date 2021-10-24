#include <iostream>
using namespace std;
int sum(int a, int b=10, int c=20);

int main(){
   /* In this case a value is passed as
    * 1 and b and c values are taken from
    * default arguments.
    */
   cout<<sum(1)<<endl;

   /* In this case a value is passed as
    * 1 and b value as 2, value of c values is
    * taken from default arguments.
    */
   cout<<sum(1, 2)<<endl;

   /* In this case all the three values are
    * passed during function call, hence no
    * default arguments have been used.
    */
   cout<<sum(1, 2, 3)<<endl;
   return 0;
}
int sum(int a, int b, int c){
   int z;
   z = a+b+c;
   return z;
}
