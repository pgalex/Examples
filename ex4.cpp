class Ellipse
{
protected:
  double sideA;
  double sideB;

public:
  virtual void SetA(double a)
  {
    sideA = a;
  }

  virtual void SetB(double b)
  {
    sideB = b;
  }

  bool Equal(Ellipse* e)
  {
    return sideA == e->sideA && sideB == e->sideB;
  }
};


class Circle : public Ellipse
{
public:
  virtual void SetA(double a) override
  {
    sideA = a;
    sideB = a;
  }

  virtual void SetB(double b) override
  {
    sideA = b;
    sideB = b;
  }
};

int main()
{
  Ellipse* someFigure1 = new Ellipse();
  Ellipse* someFigure2 = new Circle();
  
  someFigure1->SetA(15);
  someFigure1->SetB(20);
  someFigure2->SetA(15);
  someFigure2->SetB(20);

  bool b = someFigure2->Equal(someFigure1);
}
