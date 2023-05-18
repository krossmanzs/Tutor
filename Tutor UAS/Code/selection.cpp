#include <iostream>
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
  
   for(i=n-1; i > 0; i--){
      int idx_maks = 0;
      for(j=1; j <= i; j++){
         if(A[j] > A[idx_maks]){
            idx_maks = j;
         }
      }
      tukar(&A[i],&A[idx_maks]);
   }

   cout << endl << "Setelah pengurutan : ";
   for(i=0; i < n; i++){
      cout << A[i] << " ";
   }
}