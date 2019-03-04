
#include <iostream>
#include <string>

using namespace std;

class student {
private:
	static int counter;
	int id;
	float gpa;
	float *quizscore;
	int quizcapacity;
	int quiztaken;
public:
	student();
	student(int q,float gp);
	student(const student&s);
	~student();
	void addquizscore(int s);
	void setgpa(float s);
	float getgpa() const;
	void print() const;
	bool compare(student s);
	void updatescore(int s,int p);
	

};
