#include "Bus.h"

vector<Bus>  Bus::buses;

Bus::Bus() {
        cout<<"An object has been instantiated"<<endl;
         busNumber = 0;
         driverName = "";
         start = "";
         destination =  "";
         departure = "";
          arrival = "";
     for(int i=0;  i<8;i++){
         for(int j=0;j<4;j++) {
                seats[i] [j] = "Empty";
}
}
}
// h-implement
void Bus::addBus(){
        cout<<"Enter the bus number:  "; cin>>busNumber;
        cout<<"Enter the driver name:   " ; cin>>driverName;
        cout<<"Enter the start city :  " ;  cin>>start;
        cout<<"Enter the destination city: " ;  cin>>destination;
        cout<<"Enter the departure time: " ;  cin>>departure;
        cout<<"Enter the arrival time : " ;cin>>arrival;
        Bus::buses.push_back ( *this);
}

void Bus::reserveSeat() {
    //1- Bus number
    //2-  Available seats
    //3- passenger name
    int busIndex = getBusIndex();
printSeats(busIndex);
int seatNumber,  index = 1;
string name;
cout<<"please enter the seat you want to reserve:  " ; cin>>seatNumber;
for(int i=0;  i<8;i++){
       for(int j=0; j<4;j++) {
                 if(index == seatNumber){
                    if(buses[busIndex].seats[i] [j] == "Empty")  {
                        cout<<"Enter your name: "; cin>>name;
                       buses[busIndex].seats[i] [j]  =  name;
                    } else{
                        cout<<"This is seat is occupied"<<endl;
                    }
                 }
                  index++;
}
}
printSeats(busIndex);
}

void Bus::showBus() {
 int   busIndex = getBusIndex();
 if(busIndex == -1) {
        cout<<"Bus is not found"<<endl;
 return;
 }
printLine(  ' * ' );
cout<<buses [busIndex];
printLine(  ' * ' );
printSeats(busIndex);
}


void Bus::showAllBuses () {
    for(int i=0;i<buses.size();i++){
            printLine(' * ');
        cout<<buses[i];
    }
    printLine( ' * ');
}
ostream &operator<<(ostream &out, const Bus &b){
    out<<"\tBus Number:  "<<b.busNumber<<"       Driver Name: "<<b.driverName
    <<"\n\n\tFrom:   "<<b.start<<"       To:  "<<b.destination
    <<"\n\n\tDeparture Time: "<<b.departure<<"       Arrival Time: "<<b.arrival<<endl;
     return out;
}

istream &operator>>(istream &in,  Bus   &b){
         cout<<"Enter the bus number: "   ;in>>b.busNumber;
         cout<<"Enter the driver name:  "   ;in>>b.driverName;
         cout<<"Enter the start city :  "   ;in>>b.start;
         cout<<"Enter the destination city: "   ;in>>b.destination;
         cout<<"Enter the departure time: "  ;in>>b.departure;
         cout<<"Enter the arrival time : "  ;in>>b.arrival;
        Bus::buses.push_back(b);
        return in;
}


void    Bus::printLine(char c) {
for(int i = 0;i<100;i++){
    cout<<c;

    }
    cout<<endl;
}
void Bus::printSeats(int busIndex){
    int index =  1;
for(int i=0;  i<8;i++){
       for(int j=0; j<4;j++) {
             cout<<index<< "-  "<< buses[busIndex].seats[i] [j] <<" \t";
                  index++;
}
cout<<endl;
}
}

    int Bus::getBusIndex(){
        int busNum, busIndex= -1;
   cout<<"Enter the bus number you want to show: "; cin>>  busNum;
 for(int i=0;i<buses.size();i++){
 if(busNum == buses[i].busNumber){
    return   i;
 }
}
cout<<"This is bus is not available"<<endl;
return -1;
}
