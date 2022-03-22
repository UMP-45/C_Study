//p308
#include<iostream>

class Ival_box{
protected:
      int val;
      int low,high;
      bool changed;    //由用户通过set_value()修改
public:
      Ival_box(int ll, int hh) { changed = false; val = low = ll; high = hh;}
      
      virtual int get_value() { changed = false; return val;}
      virtual void set_value(int i) { changed = true; val = i;}     //为用户
      virtual void reset_value(int i) { changed = false; val = i;}  //为应用
      virtual void prompt() {}    //提示
      virtual bool was_changed() const { return changed;}
};

class Ival_slider:public Ival_box{    //定义滑块的视觉形式的图形要素等
public:
      Ival_slider(int, int);
      
      int get_value;
      void prompt;
}
using std::cout;

int main(void)
{
    return 0;
}
