//320 ，290
#include<iostream>
#include<cstring>
class String{
      struct Srep;       //用于使一个实际表示能够被几个具有同样值得String所共享
      Srep *rep;
public:
      class Cref;        //帮助实现下标运算，这个运算需要区别对待读操作和写操作
      class Range;     //用于在出现范围错误时抛出
      String();            //x = " "
      String(const char*); //x = "abc"
      String(const String&);//x = other_string
      String& operator = (const char*);
      String& operator = (const String&);
      ~String();
};

struct String::Srep{
      char* s;   //到元素的指针
      int sz;    //字符个数
      int n;     //引用计数

      Srep(int nsz, const char* p)
      {
           n = 1;  
           sz = nsz;
           s = new char [sz+1]; //为结束符增加空间
           strcpy(s,p);
      }
      
      ~Srep() {delete []s;}
      
      Srep* get_own_copy()  //需要时克隆
      {
           if(n == 1) return this;
           n--;
           return new Srep(sz,s);
      }
     
      void assign(int nsz, const char* p)
      {
           if(sz != nsz){
                 delete[] s;
                 sz = nsz;
                 s = new char[sz+1];
           }
      strcpy(s,p);
      } 
private:    //防止复制
      Srep(const Srep&);
      Srep& operator=(const Srep&);
};

String::String(){   //以空字符串为默认值
      rep = new Srep(0, "");
}
String::String(const String& x){ //复制构造函数
      x.rep -> n++;
      rep = x.rep;    //共享表示
}
String::~String()
{
      if(--rep -> n == 0) delete rep;
}
String& String::operator=(const String& x){ // 复制赋值
      x.rep -> n++;  //保护，防止"st = st"
      if(--rep -> n == 0) delete rep;
      rep = x.rep;   //共享表示
      return *this;
}
//伪装的复制运算以const char* 作为参数，以提供字符串文字量：
String::String(const char*s){
      rep = new Srep(strlen(s),s);
}
String& String::operator=(const char*s){
      if(rep -> n == 1)   //再利用Srep
           rep -> assign(strlen(s),s);
      else{               //使用新Srep
           rep -> n--;
           rep = new Srep(strlen(s),s);
      }
      return *this;
}
// template<class C>class String 
//using std::cout;

/* int main()
{
    return 0;
} */
