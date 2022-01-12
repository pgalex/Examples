class Window
{
public:
  int w;
  int h;
};


class Renderer
{
  int wH;
  int wW;

public:
  Renderer(const Window& wnd)
  {
    wH = wnd.h;
    wW = wnd.w;
  }

  bool Equal(const Renderer& r)
  {
    return wH == r.wH && wW == r.wW;
  }
};

int main()
{
  Window wnd;
  Renderer ren(wnd);

  bool b = ren.Equal(wnd);
}
