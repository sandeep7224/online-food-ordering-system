#include<iostream>
#include<stdlib.h>
using namespace std;

class variable
{ 
    public:
    char name[100],more_order,place[100];
    long mobile ;
    int password ,n,prize[10]={130,140,140,100,200,170,90,130,300,160},total,a,i,sum=0,q,payment,h,trise,payment_mode,amount;
   
    string email;
};
class account:public variable
{
    public:
    int sandip()
    {
      
       adarsh:
       cout<<"\n\n";
       cout<<"                            /////////////////////////////////////////////////////////////////////"<<endl;
       cout<<"                           /                   WELCOME TO ONLINE FOOD ORDER SYSTEM              /"<<endl;
       cout<<"                           /********************************************************************/"<<endl;
       cout<<"                             sign up [press 1]                                  login [press 2]"<<endl;
       cin>>n;
       switch(n)
       {
           case 1:
           cout<<"coustmer name:";
           cin>>name;
           cout<<"customer place:";
           cin>>place;
           cout<<"coustmer mobile no:";
           cin>>mobile;
           cout<<"coustmer email id:";
           cin>>email;
           cout<<"coustmer password:";
           cin>>password;
           cout<<"\n";
       cout<<"                      ////////////////   YOUR ACCOUNT SUCCESSFULLY CREATED   ////////////////\n"<<endl;
           break;
           
           case 2:
           cout<<"your Email.id = sandip123@gmail.com"<<endl;
           cout<<"your Password = 1234"<<endl;
           cout<<"coustmer email id =";
           cin>>email;
           cout<<"coustmer password =";
           cin>>password;
           cout<<"\n";
           if(email =="sandip123@gmail.com" && password==1234)
           {
       cout<<"                              ////////////////         SUCCESSFULLY LOGIN        ////////////////////"<<endl;
           }
           else
           {
               cout<<"You have entered wrong detail"<<endl;
               exit(0);
           }
           break;
           
           default:
           cout<<"                          /////////////////       you entered wrong text       //////////////////"<<endl;
           goto adarsh;
           exit(0);
           
       }
       return 0;
    }
   
    
 };
 class menu:public account
{
    public:
    int choice()
        {
                                    cout<<"DO you want to add more item"<<endl;
                                    cout<<"----------------------------------------------"<<endl;
                                    cout<<"YES = y:"<<endl;
                                    cout<<"----------------------------------------------"<<endl;
                                    cout<<"No = n:"<<endl;
                                    cout<<"----------------------------------------------"<<endl;
                                    cin>>more_order;
                                    cout<<"----------------------------------------------"<<endl;
                                    if(more_order=='y')
                                    {
                                       rajendra();
                                    }
                                    else
                                    {
                                        cout<<"                                                     ///////////////////     Your order is saved     ///////////////"<<endl;
                                    }
                                    return 0;
        }
    int rajendra()
    {
        cout<<"1.Fast food:"<<endl;
        cout<<"2.Veg food:"<<endl;
        cout<<"3.Non-veg food:"<<endl;https://www.onlinegdb.com/online_c_compiler#tab-stdin
        cout<<"Choice from above:"<<endl;
        cin>>a;
        trise++;
        switch(a)
        {
            case 1:
            cout<<"                        ************************************************************************               "<<endl;
            cout<<"                        */                             MENU                                   /*               "<<endl;
            cout<<"                        ************************************************************************               "<<endl;
                cout<<"                                       POPCORN   =  130$"<<"   --- "<<"  [1]  "<<endl;
                cout<<"                                       COFFEE    =  140$"<<"   --- "<<"  [2]  "<<endl;
                cout<<"                                       ICE CREAM =  140$"<<"   --- "<<"  [3]  "<<endl;
                cout<<"                                       PIZZA     =  100$"<<"   --- "<<"  [4]  "<<endl;
                cout<<"                                       BURGER    =  200$"<<"   --- "<<"  [5]  "<<endl;
                cout<<"                                       HOTDOG    =  170$"<<"   --- "<<"  [6]  "<<endl;
                cout<<"                                       SANDWICH  =  90$"<<"    --- "<<"  [7]  "<<endl;
                cout<<"                                       PANCAKES  =  130$"<<"   --- "<<"  [8]  "<<endl;
                cout<<"                                       NOODLES   =  300$"<<"   --- "<<"  [9]  "<<endl;
                cout<<"                                       DONUT     =  160$"<<"   --- "<<"  [10] \n"<<endl; 
            cout<<"----------------------------------------------"<<endl;
            cout<<"Place the order :";
            cin>>i;
            cout<<"----------------------------------------------"<<endl;
            switch(i)
          {
           case 1:
           cout<<"Enter the number of quantity:";
           cin>>q;
           cout<<"----------------------------------------------"<<endl;
           cout<<"you ordered POPCORN"<<endl;
           cout<<"----------------------------------------------"<<endl;
           sum += prize[0]*q;
           break;
          case 2:
         cout<<"Enter the number of quantity:";
          cin>>q;
           cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered COFFEE"<<endl;
           cout<<"----------------------------------------------"<<endl;
          sum += prize[1]*q;
          break;
          case 3:
          cout<<"Enter the number of quantity:";
          cin>>q;
           cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered ICE CREAM"<<endl;
           cout<<"----------------------------------------------"<<endl;
          sum += prize[2]*q;
          break;
          case 4:
          cout<<"Enter the number of quantity:";
          cin>>q;
           cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered PIZZA"<<endl;
           cout<<"----------------------------------------------"<<endl;
          sum += prize[3]*q;
          break;
          case 5:
         cout<<"Enter the number of quantity:";
          cin>>q;
           cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered BURGER"<<endl;
           cout<<"----------------------------------------------"<<endl;
          sum +=prize[4]*q;
          break;
          case 6:
          cout<<"Enter the number of quantity:";
          cin>>q;
           cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered HOTDOG"<<endl;
           cout<<"----------------------------------------------"<<endl;
          sum += prize[5]*q;
          break;
          case 7:
          cout<<"Enter the number of quantity:";
          cin>>q;
           cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered SANDWICH"<<endl;
           cout<<"----------------------------------------------"<<endl;
          sum += prize[6]*q;
          break;
          case 8:
          cout<<"Enter the number of quantity:";
          cin>>q;
           cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered PANCAKES"<<endl;
          sum += prize[7]*q;
           cout<<"----------------------------------------------"<<endl;
          break;
          case 9:
          cout<<"Enter the number of quantity:";
          cin>>q;
           cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered NOODLES"<<endl;
          sum += prize[8]*q;
           cout<<"----------------------------------------------"<<endl;
          break;
          case 10:
         cout<<"Enter the number of quantity:";
          cin>>q;
           cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered DONUT"<<endl;
           cout<<"----------------------------------------------"<<endl;
          sum +=  prize[9]*q;
          
          break;
         
         default:
         cout<<"you entered wrong text"<<endl;
                                    
                                   
                                    
       }
        choice();
        break;

            case 2: 
             cout<<"                       ************************************************************************               "<<endl;
             cout<<"                       */                             MENU                                   /*               "<<endl;
             cout<<"                       ************************************************************************               "<<endl;
                cout<<"                                 DAL MAKHANI  = 130$"<<"       --- "<<"  [1]  "<<endl;
                cout<<"                                 SHAHI PANNER = 140$"<<"       --- "<<"  [2]  "<<endl;
                cout<<"                                 MALAI KOPTA  = 140$"<<"       --- "<<"  [3]  "<<endl;
                cout<<"                                 FRIED RICE = 100$"<<"         --- "<<"  [4]  "<<endl;
                cout<<"                                 MANCHURIAN = 200$"<<"         --- "<<"  [5]  "<<endl;
                cout<<"                                 CHOCLET CAKE = 170$"<<"       --- "<<"  [6]  "<<endl;
                cout<<"                                 DAAL TADKA = 90$"<<"          --- "<<"  [7]  "<<endl;
                cout<<"                                 GARAM NAAN = 130$"<<"         --- "<<"  [8]  "<<endl;
                cout<<"                                 CHOLE KULCHE = 300$"<<"       --- "<<"  [9]  "<<endl;
                cout<<"                                 VEJ BIRYANI = 160$"<<"        --- "<<"  [10]  \n"<<endl;
                cout<<"Place the order :";
                cin>>i;
                cout<<"----------------------------------------------"<<endl;
    switch(i)
        {
        case 1:
        cout<<"Enter the number of quantity:";
        cin>>q;
         cout<<"----------------------------------------------"<<endl;
        cout<<"you ordered DAL MAKHANI"<<endl;
         cout<<"----------------------------------------------"<<endl;
        sum += prize[0]*q;
        break;
          case 2:
          cout<<"Enter the number of quantity:";
          cin>>q;
           cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered SHAHI PANEER"<<endl;
           cout<<"----------------------------------------------"<<endl;
          sum += prize[1]*q;
          break;
            case 3:
            cout<<"Enter the number of quantity:";
            cin>>q;
             cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered MALAI KOPTA"<<endl;
           cout<<"----------------------------------------------"<<endl;
          sum += prize[2]*q;
          break;
              case 4:
              cout<<"Enter the number of quantity:";
              cin>>q;
               cout<<"----------------------------------------------"<<endl;
              cout<<"you ordered FRIED RICE"<<endl;
               cout<<"----------------------------------------------"<<endl;
              sum += prize[3]*q;
              break;
                case 5:
                cout<<"Enter the number of quantity:";
                cin>>q;
                 cout<<"----------------------------------------------"<<endl;
                cout<<"you ordered MANCHURIAN"<<endl;
                 cout<<"----------------------------------------------"<<endl;
                sum +=prize[4]*q;
                break;
                   case 6:
                   cout<<"Enter the number of quantity";
                   cin>>q;
                    cout<<"----------------------------------------------"<<endl;
                   cout<<"you ordered CHOCLET CAKE"<<endl;
                    cout<<"----------------------------------------------"<<endl;
                   sum += prize[5]*q;
                   break;
                       case 7:
                      cout<<"Enter the number of quantity:";
                       cin>>q;
                        cout<<"----------------------------------------------"<<endl;
                       cout<<"you ordered DAL TADKA"<<endl;
                        cout<<"----------------------------------------------"<<endl;
                       sum += prize[6]*q;
                       break;
                           case 8:
                          cout<<"Enter the number of quantity:";
                           cin>>q;
                            cout<<"----------------------------------------------"<<endl;
                           cout<<"you ordered GARAM NAAN"<<endl;
                            cout<<"----------------------------------------------"<<endl;
                           sum += prize[7]*q;
                           break;
                              case 9:
                              cout<<"Enter the number of quantity:";
                              cin>>q;
                               cout<<"----------------------------------------------"<<endl;
                              cout<<"you ordered CHOLE KULCHE"<<endl;
                               cout<<"----------------------------------------------"<<endl;
                              sum += prize[8]*q;
                              break;
                                case 10:
                                cout<<"Enter the number of quantity:";
                                cin>>q;
                                 cout<<"----------------------------------------------"<<endl;
                                cout<<"you ordered VEG BIRYANI"<<endl;
                                 cout<<"----------------------------------------------"<<endl;
                                sum +=  prize[9]*q;
                                break;
                                    default:
                                    cout<<"you entered wrong text"<<endl;
                                    
                                   
                                  
        }
        choice();
                break;


            case 3:
            cout<<"                       ************************************************************************               "<<endl;
            cout<<"                       */                             MENU                                   /*               "<<endl;
            cout<<"                       ************************************************************************               "<<endl;
               cout<<"                             FRIED CHICKEN         = 130$"<<"      --- "<<"   [1]  "<<endl;
               cout<<"                             CHICKEN CHILLY        = 140$"<<"      --- "<<"   [2]  " <<endl;
               cout<<"                             CHICKEN BIRYANI       = 140$"<<"      --- "<<"   [3]  "<<endl;
               cout<<"                             FRIED FISH            = 100$"<<"      --- "<<"   [4]  "<<endl;
               cout<<"                             CHICKEN KARI          = 200$"<<"      --- "<<"   [5]  "<<endl;
               cout<<"                             MOTTON KORMA          = 170$"<<"      --- "<<"   [6]  "<<endl;
               cout<<"                             TANDURI CHICKEN       = 90$"<<"       --- "<<"   [7]  "<<endl;
               cout<<"                             KIMA SAMOSA           = 130$"<<"      --- "<<"   [8]  "<<endl;
               cout<<"                             BUTTER CHICKEN        = 300$"<<"      --- "<<"   [9]  "<<endl;
               cout<<"                             HYDRABADI CHICKEN FRY = 160$"<<"      --- "<<"   [10] \n"<<endl; 
               cout<<"Place the order :";
               cin>>i;
               cout<<"----------------------------------------------"<<endl;
    switch(i)
        {
        case 1:
        cout<<"Enter the number of quantity:";
        cin>>q;
         cout<<"----------------------------------------------"<<endl;
        cout<<"you ordered DAL MAKHANI"<<endl;
         cout<<"----------------------------------------------"<<endl;
        sum += prize[0]*q;
        break;
          case 2:
          cout<<"Enter the number of quantity:";
          cin>>q;
           cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered SHAHI PANEER"<<endl;
           cout<<"----------------------------------------------"<<endl;
          sum += prize[1]*q;
          break;
            case 3:
            cout<<"Enter the number of quantity:";
            cin>>q;
             cout<<"----------------------------------------------"<<endl;
          cout<<"you ordered MALAI KOPTA"<<endl;
           cout<<"----------------------------------------------"<<endl;
          sum += prize[2]*q;
          break;
              case 4:
              cout<<"Enter the number of quantity:";
              cin>>q;
               cout<<"----------------------------------------------"<<endl;
              cout<<"you ordered FRIED RICE"<<endl;
               cout<<"----------------------------------------------"<<endl;
              sum += prize[3]*q;
              break;
                case 5:
                cout<<"Enter the number of quantity";
                cin>>q;
                 cout<<"----------------------------------------------"<<endl;
                cout<<"you ordered MANCHURIAN"<<endl;
                 cout<<"----------------------------------------------"<<endl;
                sum +=prize[4]*q;
                break;
                   case 6:
                   cout<<"Enter the number of quantity:";
                   cin>>q;
                    cout<<"----------------------------------------------"<<endl;
                   cout<<"you ordered CHOCLET CAKE"<<endl;
                    cout<<"----------------------------------------------"<<endl;
                   sum += prize[5]*q;
                   break;
                       case 7:
                       cout<<"Enter the number of quantity:";
                       cin>>q;
                        cout<<"----------------------------------------------"<<endl;
                       cout<<"you ordered DAL TADKA"<<endl;
                        cout<<"----------------------------------------------"<<endl;
                       sum += prize[6]*q;
                       break;
                           case 8:
                           cout<<"Enter the number of quantity:";
                           cin>>q;
                            cout<<"----------------------------------------------"<<endl;
                           cout<<"you ordered GARAM NAAN"<<endl;
                            cout<<"----------------------------------------------"<<endl;
                           sum += prize[7]*q;
                           break;
                              case 9:
                              cout<<"Enter the number of quantity:";
                              cin>>q;
                               cout<<"----------------------------------------------"<<endl;
                              cout<<"you ordered CHOLE KULCHE"<<endl;
                               cout<<"----------------------------------------------"<<endl;
                              sum += prize[8]*q;
                              break;
                                case 10:
                                cout<<"Enter the number of quantity:";
                                cin>>q;
                                 cout<<"----------------------------------------------"<<endl;
                                cout<<"you ordered VEG BIRYANI"<<endl;
                                 cout<<"----------------------------------------------"<<endl;
                                sum +=  prize[9]*q;
                                break;
                                    default:
                                    cout<<"you entered wrong text"<<endl;
                                    
                                   
                                  
        }
        choice();
               
               break;

               default:
               cout<<"////////////////////////////////////////////////please try again////////////////////////////////////////////////////"<<endl; 

        }
        return 0;
    }   
        
}; 
class bill:public menu
{
    public:
    int result()
    { 
      cout<<"                                                     /////////////////      your bill is ready      ////////////////"<<endl;
      if(n==1)
      {
      cout<<" 1.customer name = "<<name<<endl;
      cout<<" 2.customer place = "<<place<<endl;
      }
      else
      {
          cout<<"1.customer name = sandip gupta"<<endl;
          cout<<"2.Customer place = Indore"<<endl;
      }
      cout<<" 1.You have ordered" <<trise<<" food"<<endl;
      cout<<" 2.Total bill = "<< sum <<endl;
      cout<<"                                          ********************************Make your payment********************************"<<endl;
    cout<<"Choose any:"<<endl;
    cout<<"                                          1.Cash on delivery\t\t\t\t\t\t  2.Online payment"<<endl;
    cin>>payment; // make payment variable
    switch(payment)
       {
        case 1:
        cout<<"Make your cash payment when order is received"<<endl;
        break;
    
        case 2:
            label:
            cout<<"Enter the amount = ";
            cin>>amount;
            if(amount==sum)
            {
                cout<<"                                                        ////////////    Your order is placed    ///////////////"<<endl;
                cout<<"                                                        *******************************************************"<<endl;
                cout<<"your order will reach in 30 MINUTE"<<endl;
                cout<<"                                                       ***************    Please visit again    ***************"<<endl;
                cout<<"                                                       *****************       THANKYOU       *****************"<<endl;      
            }
            else
            {
                cout<<"Please make sure that you have enter the same ammount"<<endl;
                goto label;
                
            }
        }
        return 0;
    }

};

    
int main()
{
 bill obj;
 obj.sandip();
 obj.rajendra();
 obj.result();
 
 
 
 return 0;
 
}
