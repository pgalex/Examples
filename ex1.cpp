class A
{
};


class C
{
public:
  int cValue;
};

class B : public A
{
public:
  int bValue;
};


int main()
{
  A * someA = new B();

  B * someB = static_cast<B *>(someA);
  someB->bValue = 1;

  C * someC = static_cast<C *>(someA);
  someC->cValue = 2;
}
