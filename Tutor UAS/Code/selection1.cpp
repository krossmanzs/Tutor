#include <iostream>
using namespace std;

struct siswa{
    string nama;
    int umur;
};

void tukar(siswa *a, siswa *b){
   siswa tmp;
   tmp = *a;
   *a  = *b;
   *b  = tmp;
}

int main(){
    siswa kelas10[] = {
        {"ujang",15},
        {"udin",10},
        {"eko", 20},
        {"Adin", 7}
    };

   int i, j, n=4;
  
   for(i=n-1; i > 0; i--){
      int idx_maks = 0;
      for(j=1; j <= i; j++){
         if(kelas10[j].umur > kelas10[idx_maks].umur){
            idx_maks = j;
         }
      }
      tukar(&kelas10[i],&kelas10[idx_maks]);
   }

   cout << endl << "Setelah pengurutan : " << endl;
   for(i=0; i < n; i++){
      cout << kelas10[i].nama << " " << kelas10[i].umur << " tahun" << endl;
   }
}