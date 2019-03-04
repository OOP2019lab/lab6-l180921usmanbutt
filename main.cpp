
#include "header.h"

int student::counter=0;

student::student(){

	counter++;
	id=counter;
	quizcapacity=3;
	quizscore=new float [quizcapacity];
	quiztaken=0;
	gpa=0;
	cout<<"default constructor was invoked for id "<<counter<<endl;

}
student::student(int c, float g){
	counter++;
	id=counter;
	quizcapacity=c;
	quizscore=new float[c];
	quiztaken=0;
	gpa=g;

	cout<<"overloaded constructor was invoked for id "<<counter<<endl;
}

student::student(const student &s){

	id=s.id;
	quizcapacity=s.quizcapacity;
	quizscore=new float[quizcapacity];
	quiztaken=s.quiztaken;
	gpa=s.gpa;
	for(int i=0;i<quiztaken;i++)
	{
		quizscore[i]=s.quizscore[i];
	}
	cout<<"copy constructor was invoked here "<<endl;
}

student::~student()
{
	delete []quizscore;
}

void student::addquizscore(int a){

	if(quiztaken<quizcapacity){
		quizscore[quiztaken]=a;
		quiztaken++;
	}
	else
	{
		cout<<"no space in the array\n";
	}
}

void student::setgpa(float s)
{
	gpa=s;
}

float student::getgpa()const 
{
	return gpa;
}

void student::print()const
{
	cout<<"the id oof user is :"<<id<<endl;
	cout<<"the gpa of student is :"<<gpa<<endl;
	cout<<"quizzes taken till now :"<<quiztaken<<endl;
	for(int i=0;i<quiztaken;i++)
	{
		cout<<"score of quiz "<<i+1<<"is :" <<quizscore[i]<<endl;
	}
}

bool student::compare(student s)
{
	if(s.gpa>gpa)
	{
		cout<<"1"<<endl;
		return true;
	}
	else
	{
		cout<<"0"<<endl;
		return false;
	}
}

void student::updatescore(int n, int s)
{
	if(n<quiztaken)
	{
		cout<<"new score has been added"<<endl;
		quizscore[n]=s;
	}
	else
	{
		cout<<"quiz is not taken yet"<<endl;
	}
}



