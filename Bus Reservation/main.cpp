#include <iostream>
#include "Bus.h"

using namespace std;


int main()
{
  Bus b;
  char choice;
  while(true){
    cout<<"1- Add Bus\n2- Reverse a set\n3- show Bus\n4- show All Buses\n5- Exit\n please enter your choice: ";
  cin>>choice;
  if(choice == '1'){
        b.addBus();

  } else if(choice == '2') {
      b.reserveSeat();
  }
  else if(choice == '3') {
      b.showBus();
  }
  else if(choice == '4') {
      b.showAllBuses();
  }
  else if(choice == '5') {
  return 0 ;
  } else {
  cout<<"Wrong Input"<<endl;
     b.printLine( ' * ');
  }
}
 return 0;

}
