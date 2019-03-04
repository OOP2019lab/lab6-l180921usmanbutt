#include "header.h"

void printstudentarray(student *arr, int m)
{

	for (int i=0;i<m;i++)
	{
		arr[i].print();
		cout<<endl;
	}

}

student* returnarry(student *arr,int m, int & count){
	 count=0;
	for(int i=0;i<m;i++)
	{
		if(arr[i].getgpa()>2){
		count++;
		}
	}
	student *narry=new student [count];

	for(int i=0;i<m;i++)
	{
		if(arr[i].getgpa()>2){

		narry[i]=arr[i];

		}
	}
	return narry;
}

void sorting(student *arr, int size)
{
	student temp[1];
	for (int i=0;i<size;i++)
	{
		for(int j=1;j<size;j++)
		{
			if(arr[i].getgpa()<arr[j].getgpa()){
				temp[0]=arr[i];
				arr[i]=arr[j];
				arr[j]=temp[0];
			}

		}
	}

}




void main()
{
	int count;
	student arr[3]={student(3,2.0),student(3,3.0),student(4,2.33)};  //default constructor will invoked here...
	
	arr[0].addquizscore(1);
	arr[0].addquizscore(4);
	arr[0].addquizscore(10);
	arr[1].addquizscore(10);
	arr[1].addquizscore(4);
	arr[1].addquizscore(9);
	arr[2].addquizscore(9);
	arr[2].addquizscore(8);
	arr[2].addquizscore(7);
	printstudentarray(arr,3);


	student *dyarr[4];

	dyarr[0]=new student(3,2);      //overloaded constructor will invoked....in next 3 lines also
	dyarr[1]=new student(3,3);
	dyarr[2]=new student(4,2.33);
	dyarr[3]=new student(4,1.00);

	dyarr[0]->addquizscore(1);
	dyarr[0]->addquizscore(4);
	dyarr[0]->addquizscore(10);
	dyarr[1]->addquizscore(10);
	dyarr[1]->addquizscore(4);
	dyarr[1]->addquizscore(9);
	dyarr[2]->addquizscore(9);
	dyarr[2]->addquizscore(8);
	dyarr[2]->addquizscore(7);
	dyarr[3]->addquizscore(2);
	dyarr[3]->addquizscore(3);

	//printstudentarray(dyarr,4);

	student* ar=returnarry(arr,3,count);
	for (int i=0;i<count ;i++){
	  ar[i].print();
	}
	system("pause");
	//destructor for all will be invoked down here after the scope of main.....
}