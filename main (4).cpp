#include<iostream>

#include<conio.h>
using namespace std;
class student
{
protected:
  int rollno;
  char name[20];
};
class marks:public student
{
  int m[3];
  int totalm;
  float percentage;
public:
  void get ()
  {
    cout << "\n enter the roll no :";
    cin >> rollno;
    cout << "\n enter the name : ";
    cin >> name;
  }
  void print ()
  {
    cout << "\n ROLL NO = " << rollno;
    cout << "\n NAME = " << name;
  }
  void input ()
  {
    for (int i = 0; i < 3; i++)
      {
	cout << "\n enter the mark of sub " << i + 1 << "((MARK IN 100) : ";
	cin >> m[i];
      }
  }
  void totalmark ()
  {
    totalm = 0;
    for (int i = 0; i < 3; i++)
      {
	totalm += m[i];
      }
  }
  void percent ()
  {
    percentage = (totalm / 300) * 100;
  }
  void display ()
  {
    cout << "\n TOTAL MARK = " << totalm;
    cout << "\n PERCENTAGE = " << percentage;
  }
};

int
main ()
{
  marks obj;
  obj.get ();
  obj.input ();
  obj.totalmark ();
  obj.percent ();
  obj.print ();
  obj.display ();
}
