#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"0123456789"
"!@#&$%^?*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
int size= sizeof(alphanum)-1;

int main(){
  system("clear");
  int lunghezza=0;
  cout<<"PASSWORD GENERATOR\n\n";
  cout<<"Inserire la lunghezza: ";
  cin>>lunghezza;
  cout<<"Password: "<<endl;
  srand(time(0));
  for (int i=0; i<lunghezza; i++){
    cout<< alphanum[rand() % size];
  }
  cout<<"\n\n\n";
  return 0;
}
