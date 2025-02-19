//The program is for the University system //
#include <iostream>
using namespace std;
#include <string>

int main()
 {
     bool test_code = 0 ;      //To determine whether the student exists or not
     int add_number , number = 16 , enter,code ;
     int discount [800] = {750 ,0, 750 ,0 , 750 ,0, 750
                            , 0 , 1500 ,0, 1500 , 0, 1500,0,1500};

     string name_student ;
     string gpa ;

     float GPA[800]= {4.0 ,0,4.0,0,4.0, 0 ,4.0, 0 ,3.5,0,3.5,0,4,0,2.5} ;

     string student[800] = {"shaza","gouda","basmala" ,"mohamed"      //total student
     , "shahd" ,"ashraf" , "shahd", "ghandi" , "zahra" , "abdelmonem"
     , "radwa" ,"sabry" ,"omnia" ,"mohamed" , "ali", "sayed"};

     int student_code[800]={1 ,0, 2 ,0 , 3 ,0, 4 , 0 , 5 ,0, 6 , 0, 7 ,0,8};    //code of the students

     cout<<endl << " Welcome to University of Computers and information, Assiut"<<endl<<endl;
  cout<<endl;

    cout<<"To show the total codes and the names of the students: enter 1\n";
    cout<<"To search: enter 2 \n";
    cout<<"To add data: enter 3\n";
    cout<<"To see if you have a discount or not: enter 4 \n";
    cout << "To end the program: enter 0\n";
    cout<<"---------------------------------------------------\n";
 while(1)
 {


   cin>>enter;


   if( enter==1)
{
       //TO show the codes and the names of the students

    for ( int i = 0 ; i < number  ;i += 2 )
    {



        cout << student[i] <<" " <<student[i+1]  <<":"<<endl<<"The code is : "<< student_code[i]<<endl;

        cout << endl ;
    }
}

   else if( enter==2){

        //To get the total data about the student from his code

cout << "Enter you code \n";
    cin >> code ;
 for ( int i = 0 ; i < number  ;i += 2 )
    {
      if (code == student_code[i])
      {
          test_code=1;
            if(GPA[i]==4)  //To calculate the GPA
  {
    gpa =" A ";
  }
  else if(GPA[i]>=3.7&&GPA[i]<4)
  {
    gpa = " A- ";
  }
  else if(GPA[i]>=3.3&&GPA[i]<3.7)
  {

   gpa= " B+ ";
  }
  else if(GPA[i]>=3&&GPA[i]<3.3)
  {
    gpa=" B ";
  }
  else if(GPA[i]>=2.7&&GPA[i]<3)
  {
    gpa=" B- ";
  }
  else if(GPA[i]>=2.3&&GPA[i]<2.7)
  {
    gpa=" C+ ";
  }
  else if(GPA[i]>=2&&GPA[i]<2.3)
  {
    gpa=" C ";
  }
  else if(GPA[i]>=1.7&&GPA[i]<2)
  {
    gpa=" C- ";
  }
  else if(GPA[i]>=1.3&&GPA[i]<1.7)
  {
    gpa=" D+ ";
  }
  else if(GPA[i]>=1&&GPA[i]<1.3)
  {
    gpa=" D ";
  }
  else
  {
    gpa=" F ";
  }
            cout <<"The name of student is : "<<student[i] <<" "<<student[i+1] <<endl<<"Student GPA is : "<< GPA[i] <<endl<<"Student grade is"<<gpa<<endl<<"The student's university fees will be : "<< discount[i]<<endl ;
    }


    }
    if(test_code==0)   // If the user enters a code that does not exist
    {
        cout << "We can't found this code\n";
    }
   }

   else if(enter ==3)   //To add some students
{
    cout << "Enter the number of students you want to add\n";
    cin >> add_number ;
    number += (add_number * 2) ;
    cout <<endl<<"Enter the name of students\n";
   for ( int i = (number-(add_number * 2)) ; i < number ;i += 2 )
    {
         cin  >> student[i] >> student[i+1]  ;  //To enter the student code
         student_code[i] = ((i/2)+1);
         discount[i]=1500;  //to enter the university fees

    }
    cout <<endl<<"Enter the GPA of the students\n";

      for ( int i = (number-(add_number * 2)) ; i < number ;i += 2 )
     {
          cin>>GPA[i];  //To enter the GPA of the students
          if(GPA[i]>=0&&GPA[i]<=4)
        {
        }
        else
       {
        cout<<endl<<"Warning! 'You should enter the number between 0 and 4'"<<endl;
        //If the user enter a wrong GPA
        cin >> GPA[i];

       }
   }

}
 else if(enter ==4)
    //If the student deserve a discount or not
{
    cout << "Enter your code \n";
    cin>> code ;
    for ( int i = 0 ; i < number  ;i += 2 )
    {
      if (code == student_code[i])
      {
          test_code=1;
    cout<<endl<<"Students who deserve a reduction in fees are Palestinians, children of martyrs, and those whose family income is less than 3,000 pounds."<<endl;
  cout<<endl<<"Is your father a matyr or you are Palestinians?"<<endl;
  string answer1,answer2;
  cout<<endl<<"Just write yes or no"<<endl;
  cin>>answer1;
  if(answer1=="yes")
    {
        discount[((code -1)*2)] = 0 ;
    cout<<endl<<"We are happy that you will study at our university and we wish you success, hero and You have received a complete discount on university fees"<<endl;
  }
  else if(answer1!="yes"&&answer1!="no"){
    cout<<endl<<"Warning! please, just enter yes or no"<<endl;
  }
  else{
  cout<<endl<<"Did your family income less than 3,000 pounds?"<<endl;
  cin>>answer2;
  if(answer2=="yes")
  {
      discount[((code -1)*2)] = 750 ;
    cout<<endl<<"You have received a fifty percent discount on university fees"<<endl;
  }
  else if(answer2=="no"){
    cout<<endl<<"You don't have any discount on university fees"<<endl;
  }
  else{
    cout<<endl<<"Warning! please, just enter yes or no"<<endl;
  }
  }
}
}
if(test_code==0)
    {
        cout << "We can't found this code\n";
    }
}

 else if( enter==0){

break;
}
  cout << endl <<endl << "---------------------------------------------------\n\n" ;
  cout<<"To show total data: enter 1\n";
  cout<<"To search: enter 2 \n";
  cout<<"To add data: enter 3\n";
  cout<<"To see if you have a discount or not: enter 4 \n";
  cout << "To end the program: enter 0\n";
  cout<<"---------------------------------------------------\n\n";
}


    return 0;
}

                               //الحمد لله الذي تتم بنعمته الصالحات//
