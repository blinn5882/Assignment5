#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std ;
FILE *record ;

class MyRecord
{

public:

    int id ;
    string name  ;
    string password  ;
    int amount ;

};

int number ;
int RanID ;

MyRecord no[100] ;

void RandomID()
{
    srand( (unsigned)time( NULL ) );


        for (int i = 0; i < 10; i++)
    {

        RanID = (rand()%99999)+21252 ;

    }



}

void Signup()
{

    RandomID() ;
    no[number].id = RanID ;

    cout<<"Enter Username:" ;
    cin>>no[number].name ;

    cout<<"Enter Password:" ;
    cin>>no[number].password ;

    cout<<"Enter Amount:" ;
    cin>>no[number].amount ;

    number++ ;

    cout<<"Insert Data Success press any key" ;


    getch() ;

    system("CLS") ;

}
void ViewData()
{
    FILE *view = fopen("record.txt","r") ;

    if(number!=0){
  cout<<"     Data        "<<endl<<endl  ;

  for(int i=0 ; i<number ; i++)
  {

      cout<<"ID:"<<no[i].id ;
      cout<<"   Username:"<<no[i].name ;
      cout<<"   Password:"<<no[i].password ;
      cout<<"   Amount:"<<no[i].amount<<endl ;
  }
    }

    else{

        cout<<"No Data Found" ;
    }

getch() ;

system("CLS") ;

}
void Search()
{
    if(number!=0){

    int s_id ;

    cout<<"Total ID: "<<number<<endl ;

    for(int i=0 ; i<number ;i++){

        cout<<"ID["<<i+1 ;
        cout<<"]";
        cout<<"="<<no[i].id<<endl ;
    }

    cout<<"Enter ID You Want To Search-> " ;
    cin>>s_id ;

    for(int i=0 ; i<number ; i++) {

        if(no[i].id==s_id){

            cout<<"ID:"<<no[i].id ;
            cout<<"   Username:"<<no[i].name ;
            cout<<"   Password:"<<no[i].password ;
            cout<<"   Amount:"<<no[i].amount<<endl ;
            getch() ;
            system("CLS") ;
            return ;

            }

}
cout<<"ID not match!"<<endl ;
    }
    else{

        cout<<"No Data Found" ;
    }

getch() ;

system("CLS") ;

}
void ChangeData()
{

    if (number!= 0){

       int c_id ;

       for(int i=0 ; i<number ; i++){


      cout<<"ID:"<<no[i].id ;
      cout<<"   Username:"<<no[i].name ;
      cout<<"   Password:"<<no[i].password ;
      cout<<"   Amount:"<<no[i].amount<<endl ;

      }
      cout<<"Enter ID you want to change : " ;
      cin>>c_id ;

      system("CLS") ;

      for(int i=0; i<number ;i++){

      if(no[i].id==c_id){

      cout<<"ID:"<<no[i].id ;
      cout<<"   Username:"<<no[i].name ;
      cout<<"   Password:"<<no[i].password ;
      cout<<"   Amount:"<<no[i].amount<<endl ;
      cout<<"Press 1-> Change ID"<<endl ;
      cout<<"Press 2-> Change Username"<<endl ;
      cout<<"Press 3-> Change Password"<<endl ;
      cout<<"Press 4-> Change Amount"<<endl ;
      cout<<"Press 0-> Go to Main Menu"<<endl ;

      char c ;
      cin>>c ;

      switch(c){

    case'1':

    cout<<"Enter New ID:" ;
    cin>>no[i].id ;
    cout<<"ID change success" ;
    getch() ;
    system("CLS");
    break ;

    case'2':
        cout<<"Enter New Username:" ;
        cin>>no[i].name ;
        cout<<"Username change success" ;
        getch();
        system("CLS");
        return ;

    case'3':
        cout<<"Enter New Password:" ;
        cin>>no[i].password ;
        cout<<"Password change success" ;
        getch();
        system("CLS");
        return ;

    case'4':
        cout<<"Enter New Amount:" ;
        cin>>no[i].amount ;
        cout<<"Amount change success" ;
        getch();
        system("CLS");
        return ;

    case'0':
        system("CLS");
        return ;


      }

      }
      }

      cout<<"ID not match" <<endl ;
      getch() ;

      system("CLS");
      return  ;
    }
   else{

        cout<<"No Data "<<endl ;
         getch();
        system("CLS");
   }

}

int main()
{

char choice ;

while(1){

    cout<<"     Welcome     " <<endl<<endl ;
    cout<<"     Press 1 -> Insert Data      "<<endl ;
    cout<<"     Press 2 -> View Data        "<<endl ;
    cout<<"     Press 3 -> Search Data      "<<endl ;
    cout<<"     Press 4 -> Change Data      "<<endl ;
    cout<<"     Press 0 -> Exit      "<<endl ;
    cout<<"     Enter Your Choice: " ;

    cin>>choice ;

switch(choice)
{
case'0':

    exit(0) ;

    break ;

case'1':

    system("CLS") ;

    Signup() ;

    break ;

case'2':

    system("CLS") ;

    ViewData();

    break ;

case'3':

    system("CLS") ;

    Search() ;

    break ;

case'4':

    system("CLS") ;

    ChangeData() ;

    break ;

}


}
}
