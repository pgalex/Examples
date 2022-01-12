class A
{
  mutable int i1;
  int i3;

public:
  void Init() const
  {
   i1 = 1;
   const_cast<A *>(this)->i3 = 3;
  }
};

int main()
{
  A a;
  a.Init();
}
