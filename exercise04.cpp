#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int &len, int &wth);

// Do not change the main() function
int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}

void input(int &len, int &wth)
{
  int length, width;
  cout<<"INPUT LENGTH:\n";
  cin>>len;
  cout<<"INPUT WIDTH:\n";
  cin>>wth;
}
