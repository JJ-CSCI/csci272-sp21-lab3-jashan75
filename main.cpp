//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here
class Quaternion { 
  public : double a,b,c,d;
Quaternion (double p, double q, double r, double s);

{
  a=p; 
  b=q; 
  c=r; 
  d=s;
 };
bool operator == (const Quaternion) {

if(p ->a==this->a);
  
  else{return true, return false}; 
 
 if(p ->b==this->b);
  
  else{return true, return false};

  if(p ->c==this->c);
 
  else{return true ,return false};

 if(p ->d==this->d);
 
  else{return true, return false}; 
 
};
Quaternion operator+(const Quaternion p)

{

Quaternion (r);

r.a=p.a+this->a;

r.b=p.b+this->b;

r.c=p.c+this->c;

r.d=p.d+this->d;

return r;
};

};

int main()
{
Quaternion q(1.0,2.0,3.0,4.0);
Quaternion p(1.0,2.0,3.0,4.0);
bool a = (q==p);
return 0;
};


//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
