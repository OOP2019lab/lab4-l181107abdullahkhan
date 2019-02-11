#include<iostream>
#include"crick.h"
#include<string>
#include<fstream>
using namespace std;

crick::crick()
{
	  names=nullptr;
 noOfmembers=11;
 Teamname=nullptr;
 for(int i=0;i<10;i++)
 { score[i]=0;
 }
 
 Rank=0;
 captain="not declared";
}

crick::crick(string name,int noofmembers){
	
		  names=nullptr;
 noOfmembers=noofmembers;
 int n=name.length();
 Teamname[n+1];
 strcpy(Teamname,name.c_str());
  Rank=0;
 captain="not declared";
}


void crick::setcapname(string cap){

	captain=cap;

}

string crick::getcapname()
{
	return captain;
}


void crick::setrank(int r){

	Rank=r;
}

int crick::getrank(){

	return Rank;
}


void crick::setteamname(char* arr){

	for(int i=0;i<sizeof(arr);i++)
	{
		Teamname[i]=arr[i];
	}
}


char crick::getteamname()
{
	return *Teamname;
}


void crick::setnomembers(int num){

	noOfmembers=num;
}


int crick::getnomembers(){
	return noOfmembers;
}



void crick::inputmembername(string name,int k){

	names[k]=name;
	
	
	

}

crick::crick (string filename){

{
	ifstream fin(filename);
	string a;
	getline(fin,a,':');
	getline(fin,a,'\n');
	Teamname=new char[sizeof(a)];
	strcpy_s(crick::Teamname,sizeof(a),a.c_str());
	getline(fin,a,':');
	fin>>noOfmembers;
	names=new string[noOfmembers];
	for(int i=0;i<noOfmembers;i++)
	{
		fin>>names[i];
    }
	getline(fin,a,':');
	fin>>Rank;
	getline(fin,a,':');
	fin>>captain;
	getline(fin,a,':');
	for(int i=0;i<noOfmembers;i++)
	{ fin>>score[i];
	}
}



	void crick::input_score(int score,int m)
	{
		if (m=10)
	{    for(int i=0;i<10:i++)
		{
			score[i]=score[i+1];
		}
		score[i]=score;
	}
		else 
			score[m]=score;
	}


	int crick::avg(char* arr)
	{
		int avg;
		int sum;
		int i=0;
		while(score[i]!=0)
		{
			 sum=sum+score[i];
			 i++;
	    }
		avg=sum/i;
		return avg;
	}


	void crick::latestinfo(int nomatches,int m)
	{
		cout<<captain<<endl;
		cout<<Teamname<<endl;
		cout<<score[m];
	}
		void crick::info()
		{
			cout<<captain<<endl;
			cout<<Teamname<<endl;
		for(int i=0;i<m;i++)
			cout<<score[i];
		}
		bool crick::compare(int avg1,int avg2)
		{
			if (avg1>avg2)
				return true;
			else 
				return false;


		}
		void crick::destruct(){
			delete names;
			names=nullptr;
			delete Teamname;
			Teamname=nullptr;
		}