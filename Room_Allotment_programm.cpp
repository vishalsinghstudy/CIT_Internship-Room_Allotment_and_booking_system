
#include <iostream>
#include <regex>
using namespace std;

bool isValid(string s)
{
  const regex pattern("(0|91)?[7-9][0-9]{9}");
  if(regex_match(s, pattern))
  {
    return true;
  }
  else
  {
    return false;
  }
}

        void Book(){
            cout<<"\n\t\t\t*******Reserve a Room*******\t\t\t\n";
            char Name[50];
            cout<<"Enter the customer's Name: ";
            cin.ignore();
            cin.getline(Name,50);
            
            char Address[50];
            cout<<"Enter the customer's Address: ";
            cin.ignore();
            cin.getline(Address,50);
            
            string phone;
            cout<<"Enter the customer's Mobile No.: ";
            cin>>phone;
            
            if(isValid(phone)){
               cout << "Your Mobile No. is Varified..\n";
            }else{
                cout<<"Invalid Mobile No. Please Enter valid Mobile No.\n";
                cout<<"Enter the customer's Mobile No.: ";
                cin>>phone;
            }
            
            string Area;
            cout<<"In which Area do you want to book your room: ";
            cin>>Area;
            cout<<"\n\t\t\tcongratulations!!...Your room has Booked\t\t\t\n";
            cout<<endl;
        }
        void setHost(){
            cout<<"\n\t\t\t*******Set the host*******\t\t\t\n";
            char Name[50];
            cout<<"Host's Name To Manage the room: ";
            cin.ignore();
            cin.getline(Name,50);
            cout<<endl;
        }
        
        void startTime(){
            cout<<"\n\t\t\t*******Set the start time*******\t\t\t\n";
            char Time[50];
            cout<<"Set the start time to start the work: ";
            cin.ignore();
            cin.getline(Time,50);
            cout<<"At "<<Time<<" Everyone should start their work\n";
            
            char Time1[50];
            cout<<"Lunch break: ";
            cin.ignore();
            cin.getline(Time1,50);
            cout<<"At "<<Time1<<" you Can Lunch in Lunch Area\n";
            cout<<endl;
        }
        
        void endTime(){
            cout<<"\n\t\t\t*******Set the end time*******\t\t\t\n";
            char Time[50];
            cout<<"Set the end time to stop the work: ";
            cin.ignore();
            cin.getline(Time,50);
            cout<<"At "<<Time<<" Relax!!";
            cout<<endl;
        }
        
        void capability(){
            cout<<"\n\t\t\t*******Set the chair booking capability*******\t\t\t\n";
            int n1,n2,n3;
            cout<<"Enter chair capability in Workspace Area: ";
            cin>>n1;
            cout<<"There are total "<<n1<<" employees so,Everyone should be comforatable in Workspace Area\n";
            cout<<"Enter chair capability in Meeting Area: ";
            cin>>n2;
            cout<<n2<<" Number of people can meet in Meeting Area\n";
            cout<<"Enter chair capability in Lab Area: ";
            cin>>n3;
            cout<<n3<<" employees perform experiment in Lab Area\n";
            cout<<endl;
        }
        
        void roomNo(){
            cout<<"\n\t\t\t*******Define the room number*******\t\t\t\n";
            cout<<"According to Your All requirement\n";
            cout<<"Room is divided in two Compartment: \n";
            cout<<"\n\t\t\t---------------FIRST COMPARTMENT---------------\t\t\t\n";
            cout<<"As you Enter in room There is stuff Area in Room No.101\n";
            cout<<"There is Kitchen Area after the stuff and Room No. of Kitchen is 102\n";
            cout<<"There is coffee Room after Kitchen Room and Room No. of coffee Area is 103\n";
            cout<<"At back side There is small lean Area\n";
            cout<<"So finally..\n";
            cout<<"Room No. of stuff Area: 101\n";
            cout<<"Room No. of Kitchen Area: 102\n";
            cout<<"Room No. of coffee Area: 103\n";
            cout<<"\n\t\t\t---------------SECOND COMPARTMENT---------------\t\t\t\n";
            cout<<"Room No. of Lab Area: 201\n";
            cout<<"Room No. of Meeting Area: 202\n";
            cout<<"Room No. of Workspace Area: 203\n";
        }

int main(){
        cout<<"\n1.Reserve a room";
        cout<<"\n2.Set the host";
        cout<<"\n3.Set the start time";
        cout<<"\n4.Set the end time";
        cout<<"\n5.Set the chair booking capability";
        cout<<"\n6.Define the room number\n";
        
    int ch;
    do{
        cout<<"\nEnter Your Choise: ";
        cin>>ch;
        
        switch(ch){
            case 1:
            Book();
            break;
            case 2:
            setHost();
            break;
            case 3:
            startTime();
            break;
            case 4:
            endTime();
            break;
            case 5:
            capability();
            break;
            case 6:
            roomNo();
            break;
        }
    }while(ch!=0);
    return 0;
}
