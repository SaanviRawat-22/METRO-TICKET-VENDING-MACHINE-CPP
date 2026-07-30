# include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;
int main(){
    cout<<"WELCOME TO THE METRO TICKET VENDING MACHINE\n" ;
    cout<<"type YES to continue\n";
    string confirm;
    cout<<"ENTER UR CHOICE: ";
    cin>>confirm;
    if(confirm=="YES"|| confirm=="Yes"||confirm=="yes"){
        cout<<"\n##BOOK YOUR TICKETS##  ";
        int ostation,dstation;
        cout<<"STATIONS: \n";
        cout<<"101.DR BABASAHEB AMBEDKAR HOSPITAL (ROHINI WEST)\n";
        cout<<"103.MAYAPURI\n";
        cout<<"104.NETAJI SUBASH PALACE\n";
        cout<<"109 KASHMERE GATE\n";
        cout<<"*****SELECT ORIGINATING STATION*****\n";
        cout<<"ENTER ORIGINATING STATION CODE: ";
        cin>>ostation;
        cout<<"*****SELECT DESTINATING STATION*****\n";
        cout<<"ENTER DESTINATING STATION CODE: ";
        cin>>dstation;
        int nofpeople,amt;
        if((ostation==101||ostation==109) && (dstation==101||dstation==109)){
           cout<<"enter the number of persons: "; 
           cin>>nofpeople;
           cout<<"AMOUNT TO PAY IS : RS  ";
           amt=43*nofpeople;
           cout<<amt;
          }
        else if((ostation==101||ostation==103) && (dstation==101||dstation==103)){
           cout<<"enter the number of persons: "; 
           cin>>nofpeople;
           cout<<"AMOUNT TO PAY IS : RS  ";
           amt=32*nofpeople;
           cout<<amt;
          } 
        else if((ostation==101||ostation==104) && (dstation==101||dstation==104)){
           cout<<"enter the number of persons: "; 
           cin>>nofpeople;
           cout<<"AMOUNT TO PAY IS : RS  ";
           amt=21*nofpeople;
           cout<<amt;
          } 
        
         else if((ostation==104||ostation==103) && (dstation==104||dstation==103)){
           cout<<"enter the number of persons: "; 
           cin>>nofpeople;
           cout<<"AMOUNT TO PAY IS : RS  ";
           amt=32*nofpeople;
           cout<<amt;
          }
         else if((ostation==109||ostation==103) && (dstation==109||dstation==103)){
           cout<<"enter the number of persons: "; 
           cin>>nofpeople;
           cout<<"AMOUNT TO PAY IS : RS  ";
           amt=43*nofpeople;
           cout<<amt;
          } 
         else if((ostation==104||ostation==109) && (dstation==104||dstation==109)){
           cout<<"enter the number of persons: "; 
           cin>>nofpeople;
           cout<<"AMOUNT TO PAY IS : RS  ";
           amt=32*nofpeople;
           cout<<amt;
          }
        int modetopay;    
        cout<<"\nSELECT THE MODE OF YOUR PAYMENT: \n";
        cout<<"1.UPI\n";
        cout<<"2.CASH\n";
        cout<<"ENTER MODE(either 1 or 2): ";
        cin>>modetopay;
        if (modetopay==1){
            int OTP;
            string mobileno;
            cout<< "ENTER YOUR MOBILE NUMBER: ";
            cin>>mobileno;
            srand(time(0));
            int otp;
            otp=rand()%9000+1000;
            cout<<"YOUR OTP IS: \n";
            cout<<otp;
            cout<<"\nREWRITE THE ABOVE OTP TO PROCEED THE PAYMENT:"<<endl;
            cin>>OTP;
            if(otp==OTP){
                cout<<"\nprocessing ur payment please wait ...........\n";
                cout<<"\n";
                cout<<"------DELHI METRO------\n";
                cout<<"   ******TICKET****** \n";
                cout<<"ORIGINATING STATION CODE : "<<ostation<<endl;
                cout<<"DESTINATING STATION CODE : "<<dstation<<endl;
                cout<<"NUMBER OF PERSONS: "<<nofpeople<<endl;
                cout<<"TOTAL FARE: RS "<<amt<<endl;
                cout<<"MODE OF PAYMENT : UPI\n";

            }
            else{
                cout<<"\nOTP NOT VERIFIED PLS TRY AGAIN!!!!!!!!!!!!";

            }
            

        }
        else{
                cout<<"processing ur payment please wait ...........\n";
                cout<<"\n";
                cout<<"   ******TICKET****** \n";
                cout<<"NUMBER OF PERSONS: "<<nofpeople<<endl;
                cout<<"TOTAL FARE: RS "<<amt<<endl;
                cout<<"MODE OF PAYMENT : CASH\n";

        }

      
       
     
   

          
          
          


        

    }
    else{
        cout<<"THANK YOU VISIT AGAIN!!!!!!";
    }
    
    
}
