#include <iostream>
using namespace std;
class Addition
{
public:
  void add(int x, int y)
  {
    int z;
    z = x + y;
    cout << "Addition of two integer number is " << z << endl;
  }
  void add(float x, float y)
  {
    float z;
    z = x + y;
    cout << "Addition of two float number is " << z << endl;
  }
  void add(long x, long y)
  {
    long z;
    z = x + y;
    cout << "Addition of two long integer is " << z << endl;
  }
  void add(char x, char y)
  {
    int z;
    z = x + y;
    cout << "Addition of two character value is " << z << endl;
  }
  void add(double x, double y)
  {
    double z;
    z = x + y;
    cout << "Addition of two double float number is " << z << endl;
  }

  void add(string x, string y)
  {

    string z = x + y;
    cout << "Addition of two string number is " << z << endl;
  }
};
int main()
{
  Addition a;
  int ch;
  cout << "1.int" << endl
       << "2.float" << endl
       << "3.long" << endl
       << "4.char" << endl
       << "5.double" << endl
       << "6.String" << endl
       << "Enter Choice" << endl;
  cin >> ch;
  switch (ch)
  {
  case 1:
    int c, b;
    cout << "Enter two integer numbers" << endl;
    cin >> c >> b;
    a.add(c, b);
    break;
  case 2:
    float g, h;
    cout << "Enter two float numbers" << endl;
    cin >> g >> h;
    a.add(g, h);
    break;
  case 3:
    long s, r;
    cout << "Enter two long  numbers" << endl;
    cin >> s >> r;
    a.add(s, r);
    break;
  case 4:
    char t, u;
    cout << "Enter two character values" << endl;
    cin >> t >> u;
    a.add(t, u);
    break;
  case 5:
    double f, p;
    cout << "Enter two double numbers" << endl;
    cin >> f >> p;

    a.add(f, p);
    break;
  case 6:
    string s1 = "", s2 = "";
    cout << "enter 1st string" << endl;
    cin >> s1;
    cout << "enter 2nd string" << endl;
    cin >> s2;

    a.add(s1, s2);

 
  }
}