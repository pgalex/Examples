class A
{
  std::vector<int> v;

public:
  int FindMax() const
  {
    return *std::max_element(v.begin(), v.end());
  }
};

int main()
{
  std::vector<A> vecOfA;

  int sumOfMax = 0;
  for (const A& aEl : vecOfA)
  {
    sumOfMax += aEl.FindMax();
  }
}
