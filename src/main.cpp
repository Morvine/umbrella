#include <iostream>
#include "point2d.hpp"
#include "box2d.hpp"
#include "ray2d.hpp"

using namespace std;

int main()
{
  Point2D c1{-1,-1}, c2{1,1}, c3{1,1}, c4{4,2}, origin{0,1}, dir{1,1};
  Box2D b1{c2}, b2(c3,c4);
  Ray2D r1 {origin};
  bool eq, eq2;
  eq=b1.Intersection(b2);
  //b1=std::move(b2);
  eq2=r1.Crossing(b1);
  cout <<r1 << endl;
  return 0;
}
