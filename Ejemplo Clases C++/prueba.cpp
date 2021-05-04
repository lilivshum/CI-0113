#include<iostream>
using namespace std;

int main(){
   string str1 = "hello"; 
   string str2 = "world"; 
   str1.append(str2);
   cout << str1 << endl; 
   str1 = str1 + str2; 
   cout << str1 << endl; 
  
   
   return 0;
}