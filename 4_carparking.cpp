/*                     4. C/C++ PROJECT
                       ================
/* ******************* CAR PARKING ******************** */

#include<iostream>
#include<string>
using namespace std;

int main()
{
   char limit;
   int choice;
   char park;
   int amount=0;
   int num;
   int count=0;
   char parkother;
   int two=0;
   int three=0;
   int four=0;
   
  cout<<"\n=============================================================\n"; 
  cout<<"\n**************** Welcome to Parking stand  ****************\n"; 
  cout<<"=============================================================\n\n"; 
  cout<<"------  Please follow the instruction  -----------\n";
  again:   // goto all section for come here check and press again
  cout<<"press 1 for price list\n";
  cout<<"press 2 for Bicycle\n";
  cout<<"press 3 for threewheelar\n";
  cout<<"press 4 for fourwheelar\n";
  cout<<"press 5 for check record\n";
  cout<<"press 6 for delete record\n";
  cout<<"press 7 for exit\n";
  type:
  cout<<"Choice : "; 
  cin>>choice;

     switch(choice)
     {
        case 1:         //  Price list //

                 cout<<"=======  Price list  =======\n";
                 cout<<"Bicycle : Rs. 30\n";
                 cout<<"threewheelar : Rs. 70\n";
                 cout<<"threewheelar : Rs. 100\n";
                 cout<<"=============================\n";
                 cout<<"Do you want to park or not, Y or N ? :";
                 agianlist :
                 cin>>park;
                    if(park=='y'|| park=='Y')
                       {
                          cout<<"type of transport\n";
                          goto type;
                       }

                    else if(park=='n'|| park=='N') {
                           cout<<"************ Thankyou  ***********";
                           exit(0);
                         }
                    else {
                        cout<<"Wrong input..! Try again....\n";
                        goto agianlist;
                    }
        
        case 2 :   // twowheelar data //
                 
                 cout<<"No. of twowheelar :";
                 cin>>num;
                 cout<<"Your pay amount is ";
                 amount=amount+num*30;
                 cout<<amount;

                 count=count+num;
                 two=count;

                 cout<<"\nDo you want to park more other vehicycle, Y or N :";
                 tryagain2:
                 cin>>parkother;
                 if (parkother=='y' || parkother=='Y'){
                    goto again;
                 }
                 else if(parkother=='n' || parkother=='N') {
                       cout<<"************ Thankyou for parking  ***********";
                       exit(0);    // exit from data twowheelar section
                 }
                 else {
                        cout<<"Wrong input..! Try again....\n";
                        goto tryagain2;
                      }
                 break;

        case 3 :   // three Wheelar data //
        
                 cout<<"No. of threewheelar :";
                 cin>>num;
                 cout<<"Your pay amount is ";
                 amount=amount+num*70;
                 cout<<amount;
                 count=count+num;
                 three=count;

                cout<<"\nDo you want to park more other vehicycle, Y or N :";
                tryagain3:
                cin>>parkother;
                 if (parkother=='y' || parkother=='Y'){
                    goto again;
                    }
                 else if (parkother=='n' || parkother=='N') {
                         cout<<"************ Thankyou  ***********";
                         exit(0);    // exit from data threewheelar section
                      }
                else {
                        cout<<"Wrong input..! Try again....\n";
                        goto tryagain3;
                      }
                 break;

                 break;

        case 4 :    // Fourwheelar data //
        
                 cout<<"No. of fourwheelar :";
                 cin>>num;
                 cout<<"Your pay amount is ";
                 amount=amount+num*100;
                 cout<<amount;
                 count=count+num;
                 four=count;

                 cout<<"\nDo you want to park more other vehicycle, Y or N :";
                 tryagain4:
                 cin>>parkother;
                 if (parkother=='y' || parkother=='Y'){
                    goto again;
                 }
                 else if(parkother=='n' || parkother=='N') { 
                        cout<<"************ Thankyou  ***********";
                         exit(0);    // exit from data fourwheelar section
                      }
                else {
                        cout<<"Wrong input..! Try again....\n";
                        goto tryagain4;
                      }
                 break;

        case 5 :   // check data //
        
                 cout<<"The total amount is :"<<amount;
                 cout<<"\nThe total no. of vehicycle parked : "<<count<<endl;
                 cout<<"\nThe total no. of twowheelar parked : "<<two<<endl;
                 cout<<"\nThe total no. of threewheelar parked : "<<three<<endl;
                 cout<<"\nThe total no. of fourwheelar parked : "<<four<<endl;


                 cout<<"\nDo you want to Know more , Y or N :";
                 tryagain5:
                 cin>>parkother;
                 if (parkother=='y' || parkother=='Y'){
                    goto again;
                 }
                 else if(parkother=='n' || parkother=='N') { 
                        cout<<"************ Thankyou  ***********";
                         exit(0);   // exit from data check section
                      }
                else {
                        cout<<"Wrong input..! Try again....\n";
                        goto tryagain5;
                      }

                 break;

        case 6 : // delete data //
        
                 amount=0;
                 count=0;
                 break;

        case 7 :  // exit from program //
                  exit(0);

        default : cout<<"\nWrong enter....!  "<<"Please try again...\n\n";
                goto again;        
        
        
    }
                 
        

     

}

