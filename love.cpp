#include <iostream>
using namespace std;

int main() {
   int height = 10;
   int width = 20;

   for(int i=0;i<height/2;i++){
      for(int j=0;j<=width;j++){
         if((j>=height/2-i && j<=height/2+i) || (j>=width-height/2-i && j<=width-height/2+i)){
            cout<<"*";
         }
         else{
            cout<<" ";
         }
      }
      cout<<endl;
   }
   for(int i=height/2;i<=height;i++){
      for(int j=0;j<=width;j++){
         if(j>=i-height/2 && j<=width-(i-height/2)){
            cout<<"*";
         }
         else{
            cout<<" ";
         }
      }
      cout<<endl;
   }

   return 0;
}