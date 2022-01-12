enum class E { ONE = 1, TWO, THREE };
enum EU { ONE = 1, TWO, THREE };


int main()
{
  E ee = E::TWO;
  int i1 = static_cast<int>(ee);
  EU eu = EU::THREE;
  int i2 = eu;
}
