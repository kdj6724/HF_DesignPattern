// chocolate_boiler.h
// 2018-04-10
// kdj6724@naver.com
#ifndef SINGLETON_CHOCOLATE_BOILER_H_
#define SINGLETON_CHOCOLATE_BOILER_H_
class ChocolateBoiler {
private:
  bool empty_;
  bool boiled_;
public:
  ChocolateBoiler();
  void Fill();
  void Drain();
  void Boil();
  bool is_empty() { return empty_; }
  bool is_boiled() { return boiled_; }
};
#endif
