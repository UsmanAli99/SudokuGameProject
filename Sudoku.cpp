#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <iomanip>
//#include <thread>
#include <fstream>
using namespace std;
int score=0;
int ti=150;
struct sudoku{
int value;
sudoku *next;
};
sudoku *head=NULL;
sudoku *temp=NULL;
sudoku *head2=NULL;
sudoku *head3=NULL;
void myintro(){
system ("color A");
system ("color E");
for(int i=0;i<168;i++){
    cout<<"*";
}
cout<<"*"<<setw(167)<<"*";
cout<<"*\t\t\t\t\tUsman Ali";
cout<<"\t\t\t\t\t\t15081598-137"<<setw(60)<<"*";
cout<<"*"<<setw(167)<<"*";
cout<<"*"<<setw(167)<<"*"<<endl;
cout<<"*"<<setw(167)<< "*";
cout<<"*\t\t\t\t\tAsad Butt";
cout<<"\t\t\t\t\t\t15081598-119"<<setw(60)<<"*";
cout<<"*"<<setw(167)<<"*";
cout<<"*"<<setw(167)<<"*"<<endl;
for(int i=0;i<168;i++){
    cout<<"*";
}
cout<<"\n\n\n\n\n\n\n\n\n\n\n"<<setw(80)<<"Press any key to continue........";
getch();
}
void welcome(){
system ("cls");
system ("color C");
system ("color A");
for(int i=0;i<168;i++){
    cout<<"*";
}

for(int i=0;i<17;i++){
    if(i==8){
        cout<<"*\t\t\t\t\tWELCOME";
        Sleep(1000);
        cout<<"  \tTO ";
        Sleep(1000);
        cout<<"  \tMY";
        Sleep(1000);
        cout<<"  \tSUDOKU";
        Sleep(1000);
        cout<<"  \tGAME\t\t\t\t\t\t\t\t\t       *";
    }
else{
    cout<<endl;
    cout<<"*"<<setw(167)<<"*";
    }
}
for(int i=0;i<168;i++){
        cout<<"*";
    }
    cout<<"\n\n\n\n\n\n\n";
    cout<<setw(80)<<"Press any key to continue.......";
    getch();
}
void loading(){
      system ("cls");
      system ("color C");
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t";
      cout<<"Loading  .";
      Sleep(2000);
      cout<<"..";
      Sleep(2000);
      cout<<"..";
      cout<<"\n\t\t\t\t\t\t  _______________________________";
      cout<<"\n\t\t\t\t\t\t  |";
      for(int i=0;i<15;i++){
        if(i==6){
            Sleep(3000);
        }
        else if(i==7||i==8||i==9){
        }
        else{
      Sleep(1500);
        }
      cout<<"//";
      }
      cout<<"|";
}
void instruction(){
system ("cls");
system ("color B");
cout<<"\n\n\t\t\t\t\t\t\t\t   INSTRUCTIONS";
cout<<"\n\n\t\t\t\t\t\t1->. There are Three levels of this game.";
cout<<"\n\n\t\t\t\t\t\t2->. You must complete every level in time Limit.";
cout<<"\n\n\t\t\t\t\t\t3->. You can see some numbers in one row and you will fill the blanks";
cout<<"\n\n\t\t\t\t\t\t4->. It's like math series";
cout<<"\n\n\n\n\n\t\t\t\t\t\t\tSo Let's start Now";
Sleep(1000);
cout<<".";
Sleep(1000);
cout<<".";
Sleep(1000);
cout<<".";
cout<<"\n\n\n\n\n\t\t\t\t\t\tPress any key to continue.......";
getch();
}
//////////////////////////////////////////////////////////**************////////////////////////////////////////////////////////
                                              //LEVEL #1//
void level1(){
system ("cls");
system ("color C");
sudoku *newnode;
sudoku *tempnode;
cout<<"\n\n\t\t\t\t\t\t\t\t\t  LEVEL # 1"<<endl;
system ("color B");
for(int i=0;i<16;i++){
  newnode=new sudoku;
  if(i==0){
    newnode->value=2;
    newnode->next=NULL;
  }
  else if(i==2){
    newnode->value=8;
    newnode->next=NULL;
  }
  else if(i==5){
    newnode->value=7;
    newnode->next=NULL;
  }
  else if(i==6){
    newnode->value=11;
    newnode->next=NULL;
  }
  else if(i==8){
    newnode->value=16;
    newnode->next=NULL;
  }
  else if(i==10){
    newnode->value=4;
    newnode->next=NULL;
  }
  else if(i==13){
    newnode->value=2;
    newnode->next=NULL;
  }
  else if(i==14){
    newnode->value=3;
    newnode->next=NULL;
  }
  else {
    newnode->value=0;
    newnode->next=NULL;
  }
    if(head==NULL){
        head=newnode;
    }
    else{
        tempnode=head;
        while(tempnode->next!=NULL){
         tempnode=tempnode->next;
        }
        tempnode->next=newnode;
    }
}
}
////////////////////////////////////////////////////////********////////////////////////////////////////////////////////////
                                             //p.LEVEL//
void plevel(){
int t=0;
time_t starts,ends;
usman:
if(ti>-1){
starts=time(NULL);
system ("cls");
system ("color b");
sudoku *tempnode;
int num=0,n=0;
cout<<"\n\n\t\t\t\t\t\t\t\t    LEVEL # 1"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl;
tempnode=head;
cout<<"\t\t\t\t\t\t\t    ";
while(tempnode!=NULL){
    n++;
    if(n%4==0){
        if(tempnode->value!=0){
        cout<<"  |  "<<tempnode->value<<endl;
        }
        else{
        cout<<"  |   "<<endl;
        }
        cout<<"\t\t\t\t\t\t\t    ";
        for(int i=0;i<4;i++){
        cout<<"__|____";
        }
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t    ";
        for(int i=0;i<4;i++){
        cout<<"  |    ";
        }
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t    ";
    }
    else{
            if(tempnode->value>9){
        cout<<"  |  "<<tempnode->value;
            }
            else if(tempnode->value==0){
            cout<<"  |    ";
            }
            else{

                cout<<"  |   "<<tempnode->value;
            }
    }
    tempnode=tempnode->next;
}
cout<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tRemaining time-> "<<ti<<" sec";
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tScore-> "<<score;
if(t==0){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of first row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==4){
t++;
tempnode=head;
tempnode=tempnode->next;
tempnode->value=num;
score=score+10;
ends=time(NULL);
ti=ti-difftime(ends,starts);
goto usman;
}
else{
    system ("cls");
    system  ("color C");
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==1){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fourth position of first row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==16){
tempnode=head;
while(tempnode->value!=8){
        tempnode=tempnode->next;
}
tempnode=tempnode->next;
tempnode->value=num;
score=score+10;
ends=time(NULL);
ti=ti-difftime(ends,starts);
t++;
goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==2){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill first position of second row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==3){
    tempnode=head;
    while(tempnode->value!=16){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+20;
    ends=time(NULL);
    ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==3){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fourth position of second row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==15){
    tempnode=head;
    while(tempnode->value!=11){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+20;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==4){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==8){
    tempnode=head;
    while(tempnode->value!=15){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+30;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==5){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==2){
    tempnode=head;
    while(tempnode->value!=11){
        tempnode=tempnode->next;
    }
    for(int i=0;i<5;i++){
    tempnode=tempnode->next;
    }
    tempnode->value=num;
    score=score+30;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==6){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==1){
    tempnode=head;
    while(tempnode->value!=11){
        tempnode=tempnode->next;
    }
    for(int i=0;i<6;i++){
    tempnode=tempnode->next;
    }
    tempnode->value=num;
    score=score+40;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==7){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==4){
    tempnode=head;
    while(tempnode->value!=1){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+40;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
Sleep (500);
system ("cls");
system ("color C");
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tYour Level One Completed.........................";
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTotal Score-> "<<score<<endl;
cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\tPress any key to continue...................";
getch();
}
else{
system ("cls");
system ("color C");
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTotal Score-> "<<score<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tGame Over.........................";
}
}
///////////////////////////////////////////////////************/////////////////////////////////////////////////////////////
                                               //a_level1()//
void a_level1(){
system ("cls");
sudoku *newnode;
sudoku *tempnode;
cout<<"\n\n\t\t\t\t\t\t\t\t\t  LEVEL # 1"<<endl;
system ("color C");
for(int i=0;i<16;i++){
  newnode=new sudoku;
  if(i==0){
    newnode->value=8;
    newnode->next=NULL;
  }
  else if(i==2){
    newnode->value=6;
    newnode->next=NULL;
  }
  else if(i==5){
    newnode->value=3;
    newnode->next=NULL;
  }
  else if(i==6){
    newnode->value=4;
    newnode->next=NULL;
  }
  else if(i==8){
    newnode->value=-1;
    newnode->next=NULL;
  }
  else if(i==10){
    newnode->value=-3;
    newnode->next=NULL;
  }
  else if(i==13){
    newnode->value=3;
    newnode->next=NULL;
  }
  else if(i==14){
    newnode->value=4;
    newnode->next=NULL;
  }
  else {
    newnode->value=0;
    newnode->next=NULL;
  }
    if(head==NULL){
        head=newnode;
    }
    else{
        tempnode=head;
        while(tempnode->next!=NULL){
         tempnode=tempnode->next;
        }
        tempnode->next=newnode;
    }
}
}
///////////////////////////////////////////////**************///////////////////////////////////////////////////////
                                                //LEVEL a_plevel1()//
void a_plevel1(){
int t=0;
time_t starts,ends;
usman:
if(ti>-1){
    starts=time(NULL);
system ("cls");
system ("color A");
sudoku *tempnode;
int num=0,n=0;
cout<<"\n\n\t\t\t\t\t\t\t\t    LEVEL # 1"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl;
tempnode=head;
cout<<"\t\t\t\t\t\t\t    ";
while(tempnode!=NULL){
    n++;
    if(n%4==0){
            if(tempnode->value==0){
             cout<<"  |   "<<endl;
            }
            else{
        cout<<"  |   "<<tempnode->value<<endl;
            }
        cout<<"\t\t\t\t\t\t\t    ";
        for(int i=0;i<4;i++){
        cout<<"__|____";
        }
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t    ";
        for(int i=0;i<4;i++){
        cout<<"  |    ";
        }
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t    ";
    }
    else{
            if(tempnode->value>9){
        cout<<"  |  "<<tempnode->value;
            }
            else if(tempnode->value<0){
                cout<<"  |  "<<tempnode->value;
            }
            else if(tempnode->value==0){
            cout<<"  |    ";
            }
            else{

                cout<<"  |   "<<tempnode->value;
            }
    }
    tempnode=tempnode->next;
}
cout<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tRemaining time-> "<<ti<<" sec";
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tScore-> "<<score;
if(t==0){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of first row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==7){
t++;
tempnode=head;
tempnode=tempnode->next;
tempnode->value=num;
score=score+10;
ends=time(NULL);
ti=ti-difftime(ends,starts);
goto usman;
}
else{
    system ("cls");
    system  ("color C");
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==1){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fourth position of first row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==5){
tempnode=head;
while(tempnode->value!=6){
        tempnode=tempnode->next;
}
tempnode=tempnode->next;
tempnode->value=num;
t++;
score=score+10;
ends=time(NULL);
ti=ti-difftime(ends,starts);
goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==2){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill first position of second row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==2){
    tempnode=head;
    while(tempnode->value!=5){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+20;
ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==3){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fourth position of second row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==5){
    tempnode=head;
    while(tempnode->value!=4){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    t++;
    score=score+20;
ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==4){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
if(num==-2){
    tempnode=head;
    while(tempnode->value!=-1){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    t++;
    score=score+30;
ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==5){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==-4){
    tempnode=head;
    while(tempnode->value!=-3){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    t++;
    score=score+30;
ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==6){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==2){
    tempnode=head;
    while(tempnode->value!=-4){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    t++;
    score=score+40;
ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==7){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==5){
    tempnode=head;
    while(tempnode->value!=3){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode->value=num;
    t++;
    score=score+40;
ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
Sleep(500);
system ("cls");
system ("color C");
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tYour Level One Completed.........................";
cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\tPress any key to continue...................";
getch();
}
else{
system ("cls");
system ("color C");
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTotal Score-> "<<score<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tGame Over.........................";
}
}
////////////////////////////////////////////////////*****************///////////////////////////////////////////////////////////

                                                //leveltwo()//
void leveltwo(){
system ("cls");
system ("color B");
sudoku *newnode;
sudoku *tempnode;
cout<<"\n\n\t\t\t\t\t\t\t\t\t  LEVEL # 2"<<endl;
for(int i=0;i<25;i++){
  newnode=new sudoku;
  if(i==0){
    newnode->value=20;
    newnode->next=NULL;
  }
  else if(i==2){
    newnode->value=12;
    newnode->next=NULL;
  }
  else if(i==4){
    newnode->value=4;
    newnode->next=NULL;
  }
  else if(i==6){
    newnode->value=8;
    newnode->next=NULL;
  }
  else if(i==8){
    newnode->value=12;
    newnode->next=NULL;
  }
  else if(i==9){
    newnode->value=14;
    newnode->next=NULL;
  }
  else if(i==10){
    newnode->value=1;
    newnode->next=NULL;
  }
  else if(i==12){
    newnode->value=3;
    newnode->next=NULL;
  }
  else if(i==14){
    newnode->value=12;
    newnode->next=NULL;
  }
  else if(i==15){
    newnode->value=1;
    newnode->next=NULL;
  }
  else if(i==17){
    newnode->value=5;
    newnode->next=NULL;
  }
  else if(i==19){
    newnode->value=9;
    newnode->next=NULL;
  }
  else if(i==21){
    newnode->value=8;
    newnode->next=NULL;
  }
  else if(i==23){
    newnode->value=20;
    newnode->next=NULL;
  }
  else if(i==24){
    newnode->value=26;
    newnode->next=NULL;
  }
  else {
    newnode->value=0;
    newnode->next=NULL;
  }
    if(head2==NULL){
        head2=newnode;
    }
    else{
        tempnode=head2;
        while(tempnode->next!=NULL){
         tempnode=tempnode->next;
        }
        tempnode->next=newnode;
    }
}
}
///////////////////////////////////////////////////////////*************************/////////////////////////////////////////////
                                                         //pleveltwo();//

void pleveltwo(){
int t=0;
time_t starts,ends;
usman:
if(ti>-1){
starts=time(NULL);
system ("cls");
system ("color D");
sudoku *tempnode;
int num=0,n=0;
cout<<"\n\n\t\t\t\t\t\t\t\t    LEVEL # 2"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl;
tempnode=head2;
cout<<"\t\t\t\t\t\t\t    ";
while(tempnode!=NULL){
    n++;
    if(n%5==0){
        if(tempnode->value!=0){
        cout<<"  |  "<<tempnode->value<<endl;
        }
        else{
        cout<<"  |   "<<endl;
        }
        cout<<"\t\t\t\t\t\t\t    ";
        for(int i=0;i<5;i++){
        cout<<"__|____";
        }
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t    ";
        for(int i=0;i<5;i++){
        cout<<"  |    ";
        }
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t    ";
    }
    else{
            if(tempnode->value>9){
        cout<<"  |  "<<tempnode->value;
            }
            else if(tempnode->value==0){
            cout<<"  |    ";
            }
            else{

                cout<<"  |   "<<tempnode->value;
            }
    }
    tempnode=tempnode->next;
}
cout<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tRemaining time-> "<<ti<<" sec";
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tScore-> "<<score;
if(t==0){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of first row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==16){
t++;
tempnode=head2;
tempnode=tempnode->next;
tempnode->value=num;
score=score+20;
ends=time(NULL);
ti=ti-difftime(ends,starts);
goto usman;
}
else{
    system ("cls");
    system  ("color C");
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==1){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fourth position of first row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==8){
tempnode=head2;
while(tempnode->value!=12){
        tempnode=tempnode->next;
}
tempnode=tempnode->next;
tempnode->value=num;
score=score+20;
ends=time(NULL);
ti=ti-difftime(ends,starts);
t++;
goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==2){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill first position of second row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==6){
    tempnode=head2;
    while(tempnode->value!=4){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+30;
    ends=time(NULL);
    ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==3){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill third position of second row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==10){
    tempnode=head2;
    while(tempnode->value!=6){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+30;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==4){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==2){
    tempnode=head2;
    while(tempnode->value!=1){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+40;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==5){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fourth position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==6){
    tempnode=head2;
    while(tempnode->value!=3){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+40;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==6){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of fourth row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==3){
    tempnode=head2;
    while(tempnode->value!=3){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+50;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==7){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fourth position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==7){
    tempnode=head2;
    while(tempnode->value!=5){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+50;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==8){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill first position of fifth row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==2){
    tempnode=head2;
    while(tempnode->value!=9){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+60;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==9){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill third position of fifth row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==14){
    tempnode=head2;
    while(tempnode->value!=9){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+50;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
Sleep (500);
system ("cls");
system ("color C");
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tYour Level Two Completed.........................";
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTotal Score-> "<<score<<endl;
cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\tPress any key to continue...................";
getch();
}
else{
system ("cls");
system ("color C");
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTotal Score-> "<<score<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tGame Over.........................";
}
}
////////////////////////////////////////////////////*****************///////////////////////////////////////////////////////////

                                                //levelthree()//
void levelthree(){
system ("cls");
system ("color e");
sudoku *newnode;
sudoku *tempnode;
cout<<"\n\n\t\t\t\t\t\t\t\t\t  LEVEL # 3"<<endl;
for(int i=0;i<36;i++){
  newnode=new sudoku;
  if(i==0){
    newnode->value=5;
    newnode->next=NULL;
  }
  else if(i==2){
    newnode->value=15;
    newnode->next=NULL;
  }
  else if(i==4){
    newnode->value=25;
    newnode->next=NULL;
  }
  else if(i==7){
    newnode->value=8;
    newnode->next=NULL;
  }
  else if(i==9){
    newnode->value=16;
    newnode->next=NULL;
  }
  else if(i==11){
    newnode->value=24;
    newnode->next=NULL;
  }
  else if(i==12){
    newnode->value=2;
    newnode->next=NULL;
  }
  else if(i==14){
    newnode->value=9;
    newnode->next=NULL;
  }
  else if(i==16){
    newnode->value=22;
    newnode->next=NULL;
  }
  else if(i==19){
    newnode->value=12;
    newnode->next=NULL;
  }
  else if(i==21){
    newnode->value=32;
    newnode->next=NULL;
  }
  else if(i==23){
    newnode->value=52;
    newnode->next=NULL;
  }
  else if(i==24){
    newnode->value=3;
    newnode->next=NULL;
  }
  else if(i==26){
    newnode->value=9;
    newnode->next=NULL;
  }
  else if(i==28){
    newnode->value=15;
    newnode->next=NULL;
  }
  else if(i==31){
    newnode->value=25;
    newnode->next=NULL;
  }
  else if(i==33){
    newnode->value=55;
    newnode->next=NULL;
  }
  else if(i==35){
    newnode->value=85;
    newnode->next=NULL;
  }
  else {
    newnode->value=0;
    newnode->next=NULL;
  }
    if(head3==NULL){
        head3=newnode;
    }
    else{
        tempnode=head3;
        while(tempnode->next!=NULL){
         tempnode=tempnode->next;
        }
        tempnode->next=newnode;
    }
}
}
///////////////////////////////////////////////////////////*************************/////////////////////////////////////////////
                                                         //plevelthree();//

void plevelthree(){
int t=0;
time_t starts,ends;
usman:
if(ti>-1){
starts=time(NULL);
system ("cls");
system ("color e");
sudoku *tempnode;
int num=0,n=0;
cout<<"\n\n\t\t\t\t\t\t\t\t     LEVEL # 3"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl;
tempnode=head3;
cout<<"\t\t\t\t\t\t\t    ";
while(tempnode!=NULL){
    n++;
    if(n%6==0){
        if(tempnode->value!=0){
        cout<<"  |  "<<tempnode->value<<endl;
        }
        else{
        cout<<"  |   "<<endl;
        }
        cout<<"\t\t\t\t\t\t\t    ";
        for(int i=0;i<6;i++){
        cout<<"__|____";
        }
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t    ";
        for(int i=0;i<6;i++){
        cout<<"  |    ";
        }
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t    ";
    }
    else{
            if(tempnode->value>9){
        cout<<"  |  "<<tempnode->value;
            }
            else if(tempnode->value==0){
            cout<<"  |    ";
            }
            else{

                cout<<"  |   "<<tempnode->value;
            }
    }
    tempnode=tempnode->next;
}
cout<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tRemaining time-> "<<ti<<" sec";
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tScore-> "<<score;
if(t==0){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of first row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==10){
t++;
tempnode=head3;
tempnode=tempnode->next;
tempnode->value=num;
score=score+30;
ends=time(NULL);
ti=ti-difftime(ends,starts);
goto usman;
}
else{
    system ("cls");
    system  ("color C");
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==1){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fourth position of first row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==20){
tempnode=head3;
while(tempnode->value!=15){
        tempnode=tempnode->next;
}
tempnode=tempnode->next;
tempnode->value=num;
score=score+30;
ends=time(NULL);
ti=ti-difftime(ends,starts);
t++;
goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==2){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill sixth position of first row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==30){
    tempnode=head3;
    while(tempnode->value!=25){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+30;
    ends=time(NULL);
    ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==3){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill first position of second row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==4){
    tempnode=head3;
    while(tempnode->value!=30){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+40;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==4){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill third position of second row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==12){
    tempnode=head3;
    while(tempnode->value!=8){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+40;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==5){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fifth position of second row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==20){
    tempnode=head3;
    while(tempnode->value!=16){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+40;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==6){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==5){
    tempnode=head3;
    while(tempnode->value!=2){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+50;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==7){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fourth position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==16){
    tempnode=head3;
    while(tempnode->value!=9){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+50;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==8){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill sixt position of third row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==29){
    tempnode=head3;
    while(tempnode->value!=22){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+50;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==9){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill first position of fourth row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==2){
    tempnode=head3;
    while(tempnode->value!=29){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+60;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==10){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill third position of fourth row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==22){
    tempnode=head3;
    while(tempnode->value!=29){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+60;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==11){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fifth position of fourth row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==42){
    tempnode=head3;
    while(tempnode->value!=32){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+60;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==12){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill second position of fifth row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==6){
    tempnode=head3;
    while(tempnode->value!=3){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+70;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==13){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fourth position of fifth row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==12){
    tempnode=head3;
    while(tempnode->value!=6){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+70;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==14){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill sixth position of fifth row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==18){
    tempnode=head3;
    while(tempnode->value!=3){
        tempnode=tempnode->next;
    }
    for(int i=0;i<5;i++){
    tempnode=tempnode->next;
    }
    tempnode->value=num;
    score=score+70;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==15){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill first position of sixth row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==10){
    tempnode=head3;
    while(tempnode->value!=18){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+80;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==16){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill third position of sixth row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==40){
    tempnode=head3;
    while(tempnode->value!=18){
        tempnode=tempnode->next;
    }
    for(int i=0;i<3;i++){
    tempnode=tempnode->next;
    }
    tempnode->value=num;
    score=score+80;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
else if(t==17){
cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter number to fill fifth position of sixth row->";
cin>>num;
while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        goto usman;
    }
if(num==70){
    tempnode=head3;
    while(tempnode->value!=55){
        tempnode=tempnode->next;
    }
    tempnode=tempnode->next;
    tempnode->value=num;
    score=score+80;
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    t++;
    goto usman;
}
else{
    system ("cls");
    system ("color C");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWrong Number";
    score=score-10;
    Sleep(500);
    ends=time(NULL);
ti=ti-difftime(ends,starts);
    goto usman;
}
}
Sleep (500);
system ("cls");
system ("color B");
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tYour Level Three Completed.........................";
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTotal Score-> "<<score<<endl;
}
else{
system ("cls");
system ("color C");
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTotal Score-> "<<score<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tGame Over.........................";
}
}
int main(){
int ag=0,t_score;
string name;
myintro();
welcome();
loading();
instruction();
ifstream in("sudoku.txt");
in>>ag;
if(ag==0){
level1();
ag++;
ofstream out("sudoku.txt");
out<<ag<<endl;
plevel();
if(ti>0){
ti=350;
leveltwo();
pleveltwo();
if(ti>0){
    ti=400;
    levelthree();
    plevelthree();
    system ("cls");
    system ("color A");
    cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter your name->";
    cin>>name;
    out<<"\n\n\n\n\n\t\t\t\t\t"<<name<<" : "<<score;
}
}
}
else{
a_level1();
ag--;
ofstream out("sudoku.txt");
out<<ag<<endl;
a_plevel1();
if(ti>0){
ti=350;
leveltwo();
pleveltwo();
if(ti>0){
    ti=400;
    levelthree();
    plevelthree();
    system ("cls");
    system ("color A");
    cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter your name->";
    cin>>name;
    out<<"\n\n\n\n\n\t\t\t\t\t"<<name<<" : "<<score;
}
}
}
getch();
}
