// turkey.h
// 2018-04-16
// kdj6724@naver.com
#ifndef ADAPTER_TURKEY_H_
#define ADAPTER_TURKEY_H_
class Turkey {
public:
  virtual void Gobble() = 0;
  virtual void Fly() = 0;
};

class WildTurkey : public Turkey {
public:
  virtual void Gobble();
  virtual void Fly();
};
#endif
