#include <bits/stdc++.h>
using namespace std;
//function to calculate power of 2
bool isPower(int num){
   return (num && !(num & (num - 1)));
}
//function to check if a number is a proth number
bool isProth(int num){
   int k = 1;
   while (k < (num / k)){
      if (num % k == 0){
         if (isPower(num / k))
            return true;
      }
      k = k + 2;
   }
   return false;
}
int main(){
   int num = 17;
   if (isProth(num - 1))
      cout << "its a proth number";
   else
      cout << "its not a proth number";
   return 0;
}