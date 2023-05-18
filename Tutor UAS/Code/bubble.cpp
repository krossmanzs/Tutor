#include<iostream>

using namespace std;

void tukar(int *a, int *b){
   int tmp;
   tmp = *a;
   *a  = *b;
   *b  = tmp;
}


int main(){
   int i, j, n=7;
   int A[n] = {5,6,8,1,3,25,10};
  
   for(i=0; i < n; i++){
      for(j=n-1; j > i; j--){
         if(A[j] < A[j-1]){
            tukar(&A[j-1], &A[j]);
         }
      }
   }

   cout << endl << "Setelah pengurutan : ";
   for(i=0; i < n; i++){
      cout << A[i] << " ";
   }
}