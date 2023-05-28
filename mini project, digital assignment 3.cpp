#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;
class health
{
public:
int age,phone,days;
float weight,feet,inches;
string name;
void getdata(string *nm)
{
  name=*nm;
}
// name=name1+" "+name2;
};
int main()
{
  int a,b,c,d,e,f,p,q,b4[100]={10,11,10,9,14,13,10,8,9,12,20},b5[100]={12,17,15,10,9,19,16,15,18,18,8},b6;
  // health h1;
  string a1,g,n1,h="",a2,b1[100]={"mumbai","pune","kolhapur","solapur","satari","nagpur","nashik","sambhaji nagar","nanded","jalna","akola","chandrapur","jalgaon","parbhani","dhule","latur","ahmednagar","panvel","thane","malegaon","nandurbar","osmanabad","yavatmal","navi mumbai","ratnagiri","gadchiroli","washim","chinchwad","sangali"},     b2[100]={"ABC","XYZ","LMN","PQR","GHI","STU","DEF","YZA","HIK","JKL","YUP","MPO","GAW","QRT","ASD","BNM","ZXC","IOP","DFG","RTY"},     b3[100]={"MD","MBBS","BAMS","MS","BHMS","BPT","BUMS","BAMS","MBBS","MBBS","MS","MD","BAMS","BAMS","BHMS","MBBS","MBBS","MD","BUMS","BPT"},a4[100]={"Narayan","Apex","Unison","Optilife","Spandan","Lifeline","Heathcare","Artenis","Codeblue","Heartcare","Fortis"},a5[100]={"General and special","General","General","General and special","General and special","General","General and special","General","General","General and special","General,special and deluxe"};
  char a3;
  for(int i=0;i<1000;i++)
    {
      health hi;
      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
      cout<<"\t\t\t\t\t\t\tWelcome to Health Mitra\n\nPlease enter the number which designates your area of the body that is diseased: "<<endl
        <<"1. Face"<<endl
        <<"2. Upper body"<<endl
        <<"3. Lower body"<<endl
        <<"4. General issues"<<endl
        <<"5. Exit"<<endl
        <<"\n\t\t\t\t\t\t\t\t\t\t OR \n\nEnter y if you need to find information about nearby hospitals and phone number of ambulances: "<<endl;
      cout<<"\n"<<"Input: ";
      cin>>a2;
      if(a2=="y")
      {
        cout<<"Enter the name of the major city you live: "<<endl;
        cin>>a1;
        for(int i3=0;i3<29;i++)
          {
              if(a1==b1[i])
              {
                  cout<<"\n";
                  cout<<"Enter 1 for hospital info and 2 for ambulance contact numbers.";
                  cin>>b6;
                  if(b6==1)
                  {
                      for(int l1=0;l1<a1.length();l1++)
                      {
                          g=tolower(a1[l1]);
                          h=h+g;
                      }
                      for(int l1=0;l1<29;l1++)
                      {
                          if(h==b1[l1])
                          {
                              cout<<"The information of the nearby hospitals of your locality is as follows: \n"<<endl;
                              for(int i2=0;i2<11;i2++)
                              {
                                  cout<<"Name of the hospital: "<<a4[i2]<<"\nNumber of doctors working in it: "<<b4[i2]<<"\nDifferent types of wards present: "<<a5[i2]<<"\nTotal beds cureently available: "<<b5[i2]<<"\n\n";
                              }
                              cout<<"\n\t\t\t\tWe hope you recieved your required information\n"<<endl;
                              cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                          }
                      }
                  }
                  else if(b6==2)
                  {
                      cout<<"These are the contact numbers of ambulances near your area:\n99876xxxxx\n97001xxxxx\n93435xxxxx\n77200xxxxx\n89876xxxxx\n"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                  }
                  else
                  {
                      cout<<"Invalid input"<<endl;
                  }
              }
            else if(a1!=b1[28])
            {
              cout<<"You have entered the wrong city, try again"<<endl;
              break;
            }
          }
      }
      else if(a2=="n")
      {
        break;
      }
      else
      {a=stoi(a2);
      cout<<"\n";
      if(a==1)
      {
        for(int j=0;j<1000;j++)
          {
            cout<<"Enter the number of the specific part which is diseased\n1.Eyes\n2.Ears\n3.Nose\n4.Skin\n5.Hair\n6.Throat\n7.Teeth\n8.Bones\n9.Return to previous menu\n10.Exit"<<endl;
            cout<<"\n"<<"Number: ";
            cin>>b;
            cout<<"\n";
            if(b==1)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or type 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n')
                    {
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                      exit(true);
                    }
                    else
                    {
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name and last name: "<<endl;
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(b==2)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(b==3)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(b==4)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(b==5)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(b==6)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(b==7)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(b==8)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(b==9)
            {
              break;
            }
            else if(b==10)
            {
              exit(b=10);
            }
            else
            {
              cout<<"Entered input is invalid"<<"\n"<<endl;
            }
          }
      }
      else if(a==2)
      {
        cout<<"Enter the number of the specific part which is diseased\n1.Heart\n2.Bones\n3.Stomach\n4.Appendix\n5.Lower abdomen\n6.Lungs\n7.Skin\n8.Return to previous menu\n9.Exit"<<endl;
        cout<<"\n"<<"Number: ";
        cin>>c;
        cout<<"\n";
        if(c==1)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(c==2)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(c==3)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(c==4)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(c==5)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(c==6)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(c==7)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(c==8)
            {
              break;
            }
            else if(c==9)
            {
              exit(c=9);
            }
            else
            {
              cout<<"Entered input is invalid"<<"\n"<<endl;
            }
      }
      else if(a==3)
      {
        cout<<"Enter the number of the specific part which is diseased\n1.Bones\n2.Skin\n3.Intimate area\n4.Return to previous menu\n5.Exit"<<endl;
        cout<<"\n"<<"Number: ";
        cin>>d;
        cout<<"\n";
        if(d==1)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(d==2)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(d==3)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                                exit(true);}
                    else{
                    cout<<"Enter your following details so doctor may have some early idea about your condition: \n"<<endl;
                      cout<<""<<endl;
                      cin>>n1;
                    cout<<"Enter your first name: ";
                    cin>>hi.name;
                    cout<<"\nEnter your age: ";
                    cin>>hi.age;
                    cout<<"\nEnter your body weight: ";
                    cin>>hi.weight;
                    cout<<"\nEnter your height in feets and inches with space seperated numbers only: ";
                    cin>>hi.feet >>hi.inches;
                    cout<<"\nSince how many days your have been diseased: ";
                    cin>>hi.days;
                    cout<<"\nEnter your phone Number: ";
                    cin>>hi.phone;
                    cout<<"\nYour appointment has been fixed at 8.00pm, day after tomorrow.\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(d==4)
            {
              break;
            }
            else if(d==5)
            {
              cout<<"\t-------------------------------------------------------------------------\n"<<endl;
              exit(d=5);
            }
            else
            {
              cout<<"Entered input is invalid"<<"\n"<<endl;
            }
      }
      else if(a==4)
      {
        cout<<"Enter the number of specific general issue faced.\n1.Basic First Aid\n2.Health Checkup\n3.TT injection\n4.Fever,cold or cough\n5.Stomach ache\n6.Return to previous menu\n7.Exit"<<endl;
        cout<<"\n"<<"Number: ";
        cin>>e;
        cout<<"\n";
        if(e==1)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){exit(true);}
                    else{
                    cout<<"\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(e==2)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){exit(true);}
                    else{
                    cout<<"\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(e==3)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
              }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){exit(true);}
                    else{
                    cout<<"\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
}
                  }
                }
            }
            else if(e==4)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n"; cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){exit(true);}
                    else{
                    cout<<"\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);
                    }
                  }
                }
            }
            else if(e==5)
            {
              cout<<"Enter the name of your major city in Maharashtra: "<<endl;
              cin>>a1;
              cout<<"\n";
              for(int l=0;l<a1.length();l++)
                {
                  g=tolower(a1[l]);
                  h=h+g;
                }
              for(int l=0;l<29;l++)
                {
                  if(h==b1[l])
                  {
                    for(int m=0;m<20;m++)
                      {
                        cout<<m+1<<". "<<"Name: "<<b2[m]<<", Speciality: "<<b3[m]<<"\nPhone number: 123"<<m<<"\n";cout<<"\n";
                      }
                    cout<<"If you want to take appointment of any given doctor, please type the number alloted to their name, or enter 'n' to exit: \n";
                    cin>>a3;
                    a3=tolower(a3);
                    q=int(a3);
                    if(a3=='n'){exit(true);}
                    else{
                    cout<<"\nThe address for the clinic is as follows: \n";
                    cout<<"Mahatma Gandhi road, opposite reliance digital store,"<<h<<", Maharashtra"<<endl;
                      cout<<"\t-------------------------------------------------------------------------\n"<<endl;
                    exit(true);}
                  }
                }
            }
            else if(e==6)
            {
              break;
            }
            else if(e==7)
            {
              exit(e=7);
            }
            else
            {
              cout<<"Entered input is invalid"<<"\n"<<endl;
            }
      }
      else if(a==5)
      {
        exit(5);
      }
      else
      {
        cout<<"Wrong input number"<<"\n"<<endl;
      }
    }
    }
  return 0;
}