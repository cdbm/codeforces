#include <iostream>
#include <math.h>
using namespace std;


int main() 
{
   double n,m,a;
   cin >>n;
   cin >>m;
   cin >>a;
   double larg = ceil(n/a);
   double cumpr = ceil(m/a);
   long long res = larg*cumpr;
   cout<< res;		

}