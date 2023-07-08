#include<iostream>
using namespace std;

int main(){
int gryffindor=0, hufflepuff=0, ravenclaw=0,slytherin=0;
int answer1, answer2, answer3, answer4;

cout<<"The Sorting Hat Quiz!";
cout<<endl;
cout<<" Q1) When I'm Dead, I want people to remember me as:"<<endl;
cout << "  1) The Good\n";
cout << "  2) The Great\n";
cout << "  3) The Wise\n";
cout << "  4) The Bold\n\n";
cin>>answer1;
if(answer1==1){
  hufflepuff++;
}
else if(answer1==2){
  slytherin++;
}
else if(answer1==3){
  ravenclaw++;
}
else if(answer1==4){
  gryffindor++;
}
else{
  cout<<"Invalid Output"<<endl;
}

cout<<" Q2) Dawn or Dusk"<<endl;
cout << "  1) Dawn\n";
cout << "  2) Dusk\n";
cin>>answer2;
if (answer2 == 1) {
  gryffindor++;
  ravenclaw++;
}

else if (answer2 == 2) {
  hufflepuff++;
  slytherin++; 
}
else { 
 cout<<"Invalid Output"<<endl;
}

cout<<" Q3) Which kind of instrument most pleases your ear?"<<endl;
cout << "  1) The violin\n";
cout << "  2) The trumpet\n";
cout << "  3) The piano\n";
cout << "  4) The drum\n\n";
cin>>answer3;

if(answer1==1){
  slytherin++;
}
else if(answer1==2){
  hufflepuff++;
}
else if(answer1==3){
  ravenclaw++;
}
else if(answer1==4){
  gryffindor++;
}
else{
  cout<<"Invalid Output"<<endl;
}

cout<<" Q4) Which road tempts you most?"<<endl;
cout << "  1) The wise, sunny grassy lane\n";
cout << "  2) The narrow, dark, lantern-lit alley\n";
cout << "  3) The twisting, leaf-strewn path through woods\n";
cout << "  4) The cobbled street lined (ancient buildings)\n";
cin>>answer4;

if(answer1==1){
  hufflepuff++;
}
else if(answer1==2){
  slytherin++;
}
else if(answer1==3){
  gryffindor++;
}
else if(answer1==4){
    ravenclaw++;
}
else{
  cout<<"Invalid Output"<<endl;
}

string house;
int max=0;
if(max<gryffindor){
  max = gryffindor;
  house = "gryffindor";
}
else if (max<hufflepuff){
  max = hufflepuff;
  house = "hufflepuff";
}
else if (ravenclaw>max){
  max = ravenclaw;
  house  = "ravenclaw";
}
else if(slytherin>max){
  max = slytherin;
  house = "slytherin";
}

cout<<house<<endl;

}
