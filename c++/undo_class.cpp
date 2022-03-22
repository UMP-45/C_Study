#include<iostream>
#include<string>

/* stuct Date{
     int d,m,y;
}; */
using std::string;
class Date{
      int d,m,y;
      static Date default_date;
public:
      enum Month {jan=1, feb, mar ,apr, may, jun, jul, aug, sep, oct, nov, dec};
      class Bad_date{} ;                 //异常类
      Date(int dd =0,Month mm =Month(0), int yy =0); //'0'的意思是“取默认值”
    //void init(int dd, int mm, int yy); //初始化
    //Date(int dd = 0, int mm = 0, int yy = 0);
    //检查Date的函数：
      int day() const;
      Month month() const;
      int year() const;    
      
      string string_rep() const;         //字符串表示
      static void set_default(int, Month, int);
    //Date(int, int, int);               //构造函数（初始化） 日月年
    //Date(int, int);                      日，月，本年
    //Date(int);                           日，本月本年
    //Date();                              默认日期，：今天
    //Date(const char* );                  字符串表示的日期
    //修改Date的函数：  
      Date& add_year(int n);             //加n年
      Date& add_month(int n);
      Date& add_day(int n);
/*    int day() const { return d;}       //检查Date的值
      int month() const { return m;}
      int year() const {return y;} */
};

using std::Month;

Date Date::default_date(21, may, 1998);

Date::Date(int dd, Month mm, int yy)     //构造函数的定义
{
     if(yy == 0)  yy = default_date.year();
     if(mm == 0)  mm = default_date.month();
     if(dd == 0)  dd = default_date.day();

     int max;
     
     switch(mm){
     case feb:
          max = 28 + leapyear(yy);
          break;
     case apr: case jun: case sep: case nov:
          max = 30;
          break;
     case jan: case mar: case may: case jul: case aug: case oct: case dec:
          max = 31;
          break;
     default:
          throw Bad_date();
     }
     if(1 > dd || dd > max) throw Bad_date();

     y = yy;
     m = mm;
     d = dd;
}

inline int Date::day() const 
{
      return d;
}
inline Month Date::month() const 
{
      return m;
}
inline int Date::year() const 
{
      return y;
}

void Date::set_default(int d, Month m, int y)
{
     Date::default_date = Date(d, m, y);
}
/* Date::Date(int dd, int mm, int yy)   15行
{
     d = dd?dd : today.d;
     m = mm?mm : today.m;
     y = yy?yy : today.y;
     //检查Date是否合法
} */
Date& Date::add_year(int n)
{
     if(d == 29 && m == 2 && !leapyear(y+n) ){   //当心2月29日
          d = 1;
          m = 3;   
     }
     y += n;
     return *this;     //*this引用的就是这个函数这次调用所针对的对象
}
Date& Date::add_month(int n)
{
     if(n == 0) return *this;
     if(n > 0){
           int delta_y = n/12;
           int mm = m+n%12;
           if(mm > 12){
                delta_y++;
                mm -= 12;
           }
           //处理Month(mm)没有天数d的情况
           
           y += delta_y;
           m = Month(mm);
           return *this;
     }  //处理负数n
     return *this;
}

//inline void Date::add_year(int n) { y += n;}  // 包含于多个源文件的函数必须为 inline
using std::cout;

int main(void)
{
    return 0;
}
