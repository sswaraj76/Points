#include <iostream>
#include <math.h>

using namespace std;

class Point{
  int x,y;
  friend double pointDistance(Point, Point);
  public:
  Point(int, int);
};

Point :: Point(int a, int b){
  x=a;
  y=b;
}

double pointDistance(Point o1, Point o2){
  double distance = sqrt(pow((o2.x - o1.x), 2)+pow((o2.y - o1.y), 2));
  return distance;
}
int main() {
  Point a1(0, 1);
  Point a2(0, 6);

  double dist=pointDistance(a1, a2);
  cout << dist<<endl;
}