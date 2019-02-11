#include<iostream>
#include<string>
using namespace std;

class crick{
	string * names;
int noOfmembers;
char *Teamname;
int score[10];
int Rank;
string captain;




crick();
crick(string names,int members);
crick(string filename);
void setcapname(string cap);
string getcapname();
void setrank(int r);
int getrank();
void setteamname(char* arr);
char getteamname();
void setnomembers(int num);
int getnomembers();
void inputmembername(string name,int k);
void input_score(int score,int m);
int avg(char *score);
void latestinfo(int nomatches,int m);
void info();
bool compare(int avg1,int avg2);
void destruct();

};