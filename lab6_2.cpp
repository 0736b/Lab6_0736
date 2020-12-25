#include<iostream>
#include<string>
using namespace std;

int main(){
string Name_ans,id,movie,date,goodbyetext;
int year,gear,i=0;

cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
cout << "?????: ";
getline(cin,Name_ans);
cout << "Fahsai: Wow!!! " << Name_ans << " is a really cool name." << endl;
cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<<endl;
cout << Name_ans << ": ";
cin >> year;
cin.ignore();
gear = (year/10000000) - 12;
cout << "Fahsai: I think you may be GEAR "<< gear <<". I have a free movie ticket for you."<< endl;
cout << "Fahsai: Let's go to the cinema together!!!"<< endl;
cout << "Fahsai: What movie do you want to watch?" << endl;
cout << Name_ans << ": ";
getline(cin,movie);
cout << "Fahsai: So....which day are you free to go with me?" <<endl;
cout << Name_ans << ": ";
getline(cin,date);
cout << "Fahsai: "<<date <<"....that is OK!!! I'm looking forward to watching " << movie << " with you." <<endl;
cout << Name_ans << ": ";
getline(cin,goodbyetext);
cout << "Fahsai: 555+ see you "<< date<< ". Bye Bye \\(^ ^)/";
return 0;

}