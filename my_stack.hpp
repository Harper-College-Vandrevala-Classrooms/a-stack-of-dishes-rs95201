const int MAX_SIZE = 100;

template <typename T>
class DishStack
{
private:
  T arr[MAX_SIZE];
  T *top;
  T *start;

public:
  DishStack()
  {
    top = arr;
    start = arr;
  }

  bool is_empty()
  {
    return (top == start);
  }

  bool is_full()
  {
    return (start + MAX_SIZE == top);
  }

  void push(T element)
  {
    if (!is_full())
    {
      *top = element;
      top++;
    }
  }
  T pop()
  {
    if (!is_empty())
    {
      top--;
      T poppedElement = *top;
      return poppedElement;
    }
    else
    {
      throw "Oh no!";
    }
  }
  int size()
  {
    return top - start;
  }

  T peek()
  {
    if (!is_empty())
    {
      top--;
      T poppedElement = *top;
      top++;
      return poppedElement;
    }
    else
    {
      throw "Oh no!";
    }
  }
};