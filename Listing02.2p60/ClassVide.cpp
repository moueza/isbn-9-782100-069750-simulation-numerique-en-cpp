//p060
//parallel-visualization-of-scientific-data-using-blender
#include <iostream>
using namespace std;
class Vide
{
public:
  Vide()
  {
    cout<<"Constr par defaut a  l adress"<<this<<endl;
  }

  Vide(const Vide & t)
  {
    cout<<"Constr par copie a  l adress"<<this<<endl;
  }

  ~Vide()
  {
    cout<<"Destr a  l adress"<<this<<endl;
  }

  Vide & operator = (Vide &t)
  {
    cout<<"operath = pr Vide"<<endl;
    cout<<"   on copie l obj d @       "<< &t<<endl;
    return t;}
};

  
Vide & fct1(Vide v)
{return v;}

Vide & fct2(Vide &v)
{return v;}

void main()
{
  Vide a,b(a);
  cout<<"--------"<<endl;
  b=fct1(a);
  cout<<"--------"<<endl;
  b=fct2(a);
  cout<<"--------"<<endl;
  Vide * c = new Vide;
  Vide * d = new Vide(a);
  cout<<"c pointe vers l adress "<<c<<endl;
  cout<<"--------"<<endl;
  c=d;//SWAP
  cout<<"c pointe vers l adress "<<c<<endl;
  cout<<"--------"<<endl;
  delete c ;
  cout<<"c pointe vers l adress "<<c<<endl;
  cout<<"--------"<<endl;

    
}
