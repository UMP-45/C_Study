//
#ifndef _PERSON_H_ 
#define _PERSON_H_
#include<ctime>

using std::time;

class mytime{
 private:
  size_t start, end;
  void get_end(){ end = time(0); }

 public:
  mytime(){ start = time(0); }

  auto count(){
    get_end();
    return end - start;
  }

/*
  // test code
  auto get_start(){
    auto a = start;
    return a;
  }
*/
};
#endif
