//date 02/08/24

//It called as Runtime polymorphism
#include <iostream>
using namespace  std;

class Area 
{
   public:
   int CalculateArea(int r )
   //circle

  {
    return 3.14*r*r;
  }

  int CalculateArea(int a , int b)
  {
    //ractangular
    return a*b;
  }
};

int main()
{
  Area A1,A2;
  cout<<A1.CalculateArea(4)<<endl;
   cout<<A2.CalculateArea(4,2)<<endl;
}
